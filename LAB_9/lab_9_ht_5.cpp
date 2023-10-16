//Write a C++ program to find the sum of two one-dimensional arrays using the function.

#include <iostream>

using namespace std;

int summ(int arr1[], int arr2[], int sum[], int s) {
    for (int i = 0; i < s; ++i) {
        sum[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int s;

    cout << "size: ";
    cin >> s;


    int arr1[s], arr2[s], sum[s];

    cout << "first array:" << endl;
    for (int i = 0; i < s; ++i) {
        cin >> arr1[i];
    }

    cout << "second array:" << endl;
    for (int i = 0; i < s; ++i) {
        cin >> arr2[i];
    }

    summ(arr1, arr2, sum, s);

    cout << "sum:" << endl;
    for (int i = 0; i < s; ++i) {
        cout << sum[i] << " ";
    }

    return 0;
}

