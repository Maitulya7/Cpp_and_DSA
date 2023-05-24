#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int answer = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            answer = mid;
            end = mid - 1;  // Update end to search for first occurrence
        }
        else if (arr[mid] < key) {
            start = mid + 1;  // Update start
        }
        else if (arr[mid] > key) {
            end = mid - 1;  // Update end
        }
    }
    return answer;
}
int lastOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int answer = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            answer = mid;
            start = mid + 1;  // Update end to search for first occurrence
        }
        else if (arr[mid] < key) {
            start = mid + 1;  // Update start
        }
        else if (arr[mid] > key) {
            end = mid - 1;  // Update end
        }
    }
    return answer;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want to find: ";
    cin >> key;

    int first = firstOcc(arr, n, key);
    cout << "The first occurrence of your key is: " << first << endl;

    int last = lastOcc(arr, n, key);
    cout << "The last occurrence of your key is: " << last << endl;

    

    return 0;
}
