#include <iostream>
using namespace std;

// Function to input array size
int inputSize()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    return n;
}

// Function to input array elements
void inputArray(int arr[], int n)
{
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Function to display array
void displayArray(int arr[], int n)
{
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// function to swap 
 void swap(int &a, int &b)
 {
     int temp = a;
     a = b;
     b = temp;
 }
// Function to sort array in ascending order
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int n = inputSize();
    int arr[100];

    inputArray(arr, n);

    cout << "\nOriginal Array:\n";
    displayArray(arr, n);

    sortArray(arr, n);

    cout << "\nSorted Array (Ascending Order):\n";
    displayArray(arr, n);

    return 0;
}
