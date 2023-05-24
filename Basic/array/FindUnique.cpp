#include<iostream>
using namespace std;

int FindUnique(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueNumber = FindUnique(arr, n);
    cout << "Unique number: " << uniqueNumber << endl;

    return 0;
}
