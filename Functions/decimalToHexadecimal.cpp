#include <iostream>
#include <string>

using namespace std;

string decimalToHexadecimal(int n) {
    string hex = "";
    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            hex = to_string(remainder) + hex;
        }
        else {
            char digit = 'A' + remainder - 10;
            hex = digit + hex;
        }
        n /= 16;
    }
    return hex;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Hexadecimal equivalent: " << decimalToHexadecimal(n) << endl;
    return 0;
}




