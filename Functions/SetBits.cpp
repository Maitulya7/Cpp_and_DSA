#include <iostream>
#include <bitset>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

void convertAndCountSetBits() {
    int a, b;
    cout << "Enter two decimal numbers: ";
    cin >> a >> b;

    string binaryA = bitset<32>(a).to_string();  // Assuming 32-bit binary representation
    string binaryB = bitset<32>(b).to_string();  // Assuming 32-bit binary representation

    int countA = countSetBits(a);
    int countB = countSetBits(b);

    cout << "Binary representation of a: " << binaryA << endl;
    cout << "Binary representation of b: " << binaryB << endl;
    cout << "Total number of set bits: " << countA + countB << endl;
}

int main() {
    convertAndCountSetBits();
    return 0;
}
