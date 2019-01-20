#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int maxm;
    int n;
    int num[100];
    int m = 0;
    cin >> maxm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int j = 0; j < n; ++j) {
        m += num[j];
        if (m >= maxm) {
            cout << j;
            break;
        }
    }
    return 0;
}
