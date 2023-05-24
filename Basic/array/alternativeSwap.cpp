#include<iostream>
using namespace std;

void alternativeSwap(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    alternativeSwap(arr, n);

    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
