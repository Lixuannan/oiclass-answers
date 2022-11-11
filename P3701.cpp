//Created in Fri Nov 11 16:04:42 2022
 //System: Darwin 22.1.0
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