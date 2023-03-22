// Dynamic Memory Allocation of 2D array :-

#include<iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    // creating 2D array - Dynamically
    int** arr = new int*[row]; // first create given no. of row
    for(int i = 0; i < row; i++) {
        arr[i] = new int[col]; // then assign the given no. of columns to each row
    }

    //taking input
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    // printing output
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Once we create a 2d array or any other datatype - Dynamically then it is mandatory to free the allocated memory
    // becouse these memory are created in heap memory and heap memory does not clear itsely
    // we have to clear the memonry manually

    // releasing the memory
    // first we have to delete the memory that is allocated to columns
    for(int i = 0; i < row; i++) {
        delete []arr[i];
    }
    // now delete the memory that is allocated to row :
    delete []arr;
    return 0;
}