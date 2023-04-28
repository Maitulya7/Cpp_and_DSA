#include <iostream>
#include <string>
using namespace std;


string addBinary(string a, string b) {
    int carry = 0;
    string result = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry != 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 2;
        sum = sum % 2;
        result = to_string(sum) + result;
    }
    
    return result;
}

int main() {
    string a, b;
    cout << "Enter two binary numbers to add: ";
    cin >> a >> b;
    string result = addBinary(a, b);
    cout << "Result: " << result << endl;
    return 0;
}
