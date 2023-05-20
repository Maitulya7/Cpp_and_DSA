#include <iostream>
using namespace std;

void fibonacci() {
    int n;
    cin >> n;
    int t1 = 0;
    int t2 = 1;

    cout << t1 << " " << t2 << " "; // Print the first two terms of the series

    for (int i = 3; i <= n; i++) {
        int t3 = t1 + t2;
        cout << t3 << " ";
        t1 = t2;
        t2 = t3;
    }
    cout << endl;
}

int main() {
    fibonacci();
    return 0;
}
