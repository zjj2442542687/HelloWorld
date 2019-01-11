#include <iostream>

using namespace std;
int n;
int num[100][100];
int maxm = 0;

void fun(int m, int i, int j) {
    if (i == n) {
        return;
    }
    m += num[i][j];
    if (maxm < m) {
        maxm = m;
    }
    fun(m, i + 1, j);
    fun(m, i + 1, j + 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> num[i][j];
        }
    }
    fun(0, 0, 0);
    cout<<maxm;
    return 0;
}