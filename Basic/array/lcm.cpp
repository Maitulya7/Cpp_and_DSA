#include<iostream>
using namespace std;

int gcd(int n1, int n2) {
    if (n2 == 0)
        return n1;
    return gcd(n2, n1 % n2);
}

int lcm(int n1, int n2) {
    int greatestCommonDivisor = gcd(n1, n2);
    int product = n1 * n2;
    int lcm = product / greatestCommonDivisor;
    return lcm;
}

int main() {
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    int answer = lcm(n1, n2);
    cout << "LCM of " << n1 << " and " << n2 << " is: " << answer << endl;
    return 0;
}
