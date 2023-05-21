#include<iostream>
using namespace std;

int sumOfAll(int array[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Sum of all elements is: " << sumOfAll(array, n);
    return 0;
}
