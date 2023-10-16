//Write a C++ program to get the largest element of an array using the function.

#include <iostream>

using namespace std;

int findL(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int n;

    cout << "size: ";
    cin >> n;


    int arr[50];

    cout << "elements" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int largest = findL(arr, n);

    cout << "largest element is: " << largest << endl;

    return 0;
}

