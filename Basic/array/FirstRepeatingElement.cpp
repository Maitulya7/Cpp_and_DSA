#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minIdx = -1;
    unordered_set<int> set;

    for(int i = n - 1; i >= 0; i--) {
        if(set.find(a[i]) != set.end()) {
            minIdx = i;
        } else {
            set.insert(a[i]);
        }
    }

    if(minIdx == -1) {
        cout << "-1\n";
    } else {
        cout << minIdx + 1 << "\n";
    }

    return 0;
}
