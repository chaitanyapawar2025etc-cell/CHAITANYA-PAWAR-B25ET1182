#include <iostream>              // for cin and cout (input/output)
#include <string>                // for using the string class
#include <vector>                // for using the vector container
using namespace std;             // so we can write cout instead of std::cout

// ---------- BASE CLASS 1: basic employee information ----------
class Employee {                 // first base class
protected:                       // protected: accessible in derived classes
    int empId;                   // employee ID number
    string name;                 // employee name
    string department;           // department where employee works
public:                          // public: accessible from anywhere
    void getBasicInfo() {        // function to read basic information
        cout << "Enter Employee ID: ";          // ask for the ID
        cin >> empId;                           // read the ID
        cin.ignore();                           // clear leftover newline from buffer
        cout << "Enter Name: ";                 // ask for the name
        getline(cin, name);                     // read full name (with spaces)
        cout << "Enter Department: ";           // ask for the department
        getline(cin, department);               // read department (with spaces)
    }                            // end of getBasicInfo
    void displayBasicInfo() {    // function to show basic information
        cout << "\nEmployee ID : " << empId;        // print the ID
        cout << "\nName        : " << name;         // print the name
        cout << "\nDepartment  : " << department;   // print the department
    }                            // end of displayBasicInfo
};                               // end of Employee class

// ---------- BASE CLASS 2: training information ----------
class Training {                 // second base class
protected:                       // protected: accessible in derived classes
    int totalPrograms;           // total number of training programs taken up
    vector<string> programName;  // list of training program names
    vector<bool> completed;      // true if the program at same index is completed
public:                          // public: accessible from anywhere
    void getTrainingInfo() {     // function to read training information
        cout << "\nEnter number of training programs: ";   // ask how many programs
        cin >> totalPrograms;                               // read the count
        cin.ignore();                                       // clear leftover newline
        for (int i = 0; i < totalPrograms; i++) {           // loop over every program
            string pName;                                   // temporary variable for name
            char status;                                    // temporary variable for y/n
            cout << "Program " << i + 1 << " name: ";       // ask for program name
            getline(cin, pName);                            // read program name
            cout << "Completed? (y/n): ";                   // ask whether it is completed
            cin >> status;                                  // read y or n
            cin.ignore();                                   // clear leftover newline
            programName.push_back(pName);                   // store the program name
            completed.push_back(status == 'y' || status == 'Y'); // store true if y/Y
        }                        // end of for loop
    }                            // end of getTrainingInfo
    int countCompleted() {       // function to count completed programs
        int count = 0;                                      // start the counter at zero
        for (int i = 0; i < totalPrograms; i++)             // go through every program
            if (completed[i]) count++;                      // add one if it is completed
        return count;                                       // return the total completed
    }                            // end of countCompleted
    void displayCompleted() {    // function to list completed programs
        cout << "\n\nCompleted Training Programs:";         // heading
        bool any = false;                                   // flag: found any completed?
        for (int i = 0; i < totalPrograms; i++) {           // go through every program
            if (completed[i]) {                             // check if this one is completed
                cout << "\n  - " << programName[i];         // print its name
                any = true;                                 // at least one is completed
            }                                               // end of if
        }                        // end of for loop
        if (!any) cout << "\n  None";                       // message if nothing completed
    }                            // end of displayCompleted
};                               // end of Training class

// ---------- DERIVED CLASS: inherits from BOTH base classes ----------
class Staff : public Employee, public Training {   // multiple inheritance
public:                          // public: accessible from anywhere
    void displayCertification() {                   // function to show certification status
        displayBasicInfo();                         // call Employee's display function
        displayCompleted();                         // call Training's display function
        cout << "\n\nCertification Status: ";       // heading for the status
        // certified only if at least one program exists and all are completed
        if (totalPrograms > 0 && countCompleted() == totalPrograms)
            cout << "CERTIFIED";                    // all programs done -> certified
        else                                        // otherwise
            cout << "NOT CERTIFIED (" << countCompleted()   // show how many are done
                 << "/" << totalPrograms << " completed)";  // out of total programs
        cout << endl;                               // move to a new line
    }                            // end of displayCertification
};                               // end of Staff class

int main() {                     // program execution starts here
    Staff s;                     // create an object of the derived class
    s.getBasicInfo();            // read employee basic info (from Employee)
    s.getTrainingInfo();         // read training info (from Training)
    s.displayCertification();    // display info, completed programs, certification
    return 0;                    // end program successfully
}                                // end of main
