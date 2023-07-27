// Joshua House
// CSCI 1010 MWF 1:00-1:50
// Assignment 6
// Reversing and ordering arrays with rand function
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    // Initializing temp variable and array as well as setting the seed for the random function to time
    srand(time(0));
    int a[20], temp;

    // Setting each value of a using the random function and printing out each initialized value
    cout << "After initalizing the elements, the array is:" << endl;
    for(int i = 0; i < 20; i++)
    {
        a[i] = rand() % 101;
        cout << a[i] << " ";
    }
    cout << endl << endl;



    // Sorting the elements in decending order
    for(int i = 0; i < 20 - 1; i++)
    {
        // initialize testing variables
        int largest = a[i];
        int target = i;
        // For loop to test the largest values
        for(int j = i + 1; j < 20; j++)
        {
            if(a[j] > largest)
            {
                largest = a[j];
                target = j;
            }
        }
        // sorting
        temp = a[i];
        a[i] = a[target];
        a[target] = temp;
    }
    // Printing the sorted elements
    cout << "After sorting the elements, the array is:" << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << endl;
    


    // Reversing the values in the array
    for(int i = 0; i < 20/2; i++)
    {
        temp = a[i];
        a[i] = a[20 - 1 - i];
        a[20 - 1 - i] = temp;
    }
    // Printing the reversed values
    cout << "After reversing the elements, the array is:" << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}