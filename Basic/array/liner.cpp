#include<iostream>
using namespace std;

int linear(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number you want to find: ";
    cin >> key;
    cout << "Index of that number is: " << linear(arr, n, key) << endl;

    return 0;
}
