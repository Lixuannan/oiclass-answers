//Created in Wed Nov  9 16:22:13 2022
#include "iostream"

using namespace std;
int n, m, danjia;

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        cin >> danjia;
        cout << n / danjia << endl;
    }
}