#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }
        while (arr[right] == 1 && left < right) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n = 8;
    int arr[8] = {0, 1, 1, 1, 0, 0, 0, 1};
    cout << "Original array: ";
    printArray(arr, n);
    sortArray(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
