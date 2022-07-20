//
//  main.cpp
//  program #8
//
//  Created by Alexis Sisk on 3/27/22.
//

#include <iostream>
#include <vector>
using namespace std;

class arrayNum
{
//function
public:
void show(int * array, int );
int linearSearch(int * array, int, int);
void sortBubble(int * array, int );
int binarySearch(int * array, int, int);
};
void arrayNum::show(int * array, int siz);
{
    for(int a=0; a<siz; a++)
        cout << array[a] << " ";
    cout << endl;
    
}
int arrayNum::linearSearch(int * array, int, int)
{
    int counts = 0;
    int a;
    for(a = 0; a<size; a++)
    {
        if(array[a]==data)
        {
            cout << data << " found at " << a+1 << "position" <<endl;
            couts++;
            cout << "cout = " << couts <<endl
    }
}
const int SIZE=23;
int tests[SIZE] = { 23, 17, 5, 90, 12, 44, 38, 84, 77, 3, 66, 55, 1, 19, 37, 88, 8, 97, 25, 50, 75, 61, 49 };
int main()
{
int results;

    cout << "Unsorted array values ";

        //  Printing array elements
        // using range based for loop
        for (const int &n : tests) {
            cout << n << "  " ;
        }
    
    //search array for 25
    results = linearSearch(tests, SIZE, 25);
    //if return -1, not found
        if (results == -1)
            cout << "25= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "\n25 relative = ";
            cout <<(results + 1) << endl;
        }
    results = linearSearch(tests, SIZE, 30);
    //if return -1, not found
        if (results == -1)
            cout << "30= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "30 relative = ";
            cout <<(results + 1) << endl;
        }
    results = linearSearch(tests, SIZE, 50);
    //if return -1, not found
        if (results == -1)
            cout << "50= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "50 relative = ";
            cout <<(results + 1) << endl;
        }
    results = linearSearch(tests, SIZE, 75);
    //if return -1, not found
        if (results == -1)
            cout << "75= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "75 relative = ";
            cout <<(results + 1) << endl;
        }
    results = linearSearch(tests, SIZE, 92);
    //if return -1, not found
        if (results == -1)
            cout << "92= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "92 relative = ";
            cout <<(results + 1) << endl;
        }
    //search array for 25
    results = binarySearch(tests, SIZE, 25);
    //if return -1, not found
        if (results == -1)
            cout << "25= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "\n25 relative = ";
            cout <<(results + 1) << endl;
        }
    results = binarySearch(tests, SIZE, 30);
    //if return -1, not found
        if (results == -1)
            cout << "30= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "30 relative = ";
            cout <<(results + 1) << endl;
        }
    results = binarySearch(tests, SIZE, 50);
    //if return -1, not found
        if (results == -1)
            cout << "50= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "50 relative = ";
            cout <<(results + 1) << endl;
        }
    results = binarySearch(tests, SIZE, 75);
    //if return -1, not found
        if (results == -1)
            cout << "75= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "75 relative = ";
            cout <<(results + 1) << endl;
        }
    results = binarySearch(tests, SIZE, 92);
    //if return -1, not found
        if (results == -1)
            cout << "92= -1 search times = " << (SIZE) <<endl;
        else
        {
            cout << "92 relative = ";
            cout <<(results + 1) << endl;
        }
}
int linearSearch(const int arr[], int size, int value)
{
    int index = 0;      // Used as a subscript to search the array
    int position = -1;  // To record the position of search value
    bool found = false; // Flag to indicate if value was found
           
    while (index < size && !found)
    {
        if (arr[index] == value) // If the value is found
        {
            found = true; // Set the flag
            position = index; // Record the value's subscript
        }
        index++; // Go to the next element
    }
    return position; // Return the position, or -1
}

//Then display the total number of searches for all five numbers. If a number wasn’t found, then add in the total elements in the array for that search attempt since they obviously were all looked at. This is required output #3 of 6.
    
  //#4
void selectionSort (int array[], int size)
    {
        int minIndex, minValue;
    
        for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap (array[minIndex], array[start]);
    }
 
//#5
}

int binarySearch(int array[], int size, int value)
{
    int first = 0,             // First array element
        last = size - 1,       // Last array element
        middle,                // Mid point of search
        position = -1;         // Position of search value
        bool found = false;        // Flag
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;     // Calculate mid point
        if (array[middle] == value)      // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;           // If value is in upper half
        
    }
    return position;
}

