#include <iostream>
using namespace std;

int main() {
    int n;
    int array[6] = {1, 2, 3, 4, 5, 6};

    int even_array[6];
    int odd_array[6];

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 6; i++) {
        if (array[i] % 2 == 0) {
            even_array[even_count] = array[i];
            even_count++;
        } else {
            odd_array[odd_count] = array[i];
            odd_count++;
        }
    }

    cout << "Even Array: ";
    for (int i = 0; i < even_count; i++) {
        cout << even_array[i] << " ";
    }
    cout << endl;

    cout << "Odd Array: ";
    for (int i = 0; i < odd_count; i++) {
        cout << odd_array[i] << " ";
    }
    cout << endl;

    if (even_count >= 2) {
        int second_last_even = even_array[even_count - 2];
        cout << "Second-to-last element of even_array: " << second_last_even << endl;
    } else {
        cout << "Even Array does not have a second-to-last element." << endl;
    }
    if (odd_count >= 2) {
        int second_last_odd = odd_array[odd_count - 2];
        cout << "Second-to-last element of even_array: " << second_last << endl;
    } else {
        cout << "Even Array does not have a second-to-last element." << endl;
    }

    return 0;
}
