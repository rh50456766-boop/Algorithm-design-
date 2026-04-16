#include <iostream>
using namespace std;

int main() {
    int n, value;

    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> value;

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(a[i] == value) {
            index = i;
        }
    }

    cout << index;

    return 0;
}
