#include<iostream>
using namespace std;

int binarySearch(int array[] , int n , int key){
    int starting =0;
    int ending =n;

    while (start <= end) {
        int mid = start + (end - start) / 2; // its same as (start + end) / 2 ; 
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want to find: ";
    cin >> key;

    int answer = binarySearch(arr, n, key);

    if (answer != -1) {
        cout << "The key is found at index: " << answer << endl;
    } else {
        cout << "The key is not found in the array." << endl;
    }
    
    return 0;
}
