//Write a C++ program to find the reverse of an array using the function.

#include <iostream>

using namespace std;


 rvrs(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int size;

    cout << "size: ";
    cin >> size;


    int arr[size];

    cout << "elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    rvrs(arr, size);

    cout << "Reverse array is:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

