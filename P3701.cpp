//Created in Sat Nov 12 09:25:52 2022
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