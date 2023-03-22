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
    return 0;
}