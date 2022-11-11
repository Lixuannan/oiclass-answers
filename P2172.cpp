//Created in Fri Nov 11 16:04:29 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "iomanip"

using namespace std;

int main() {
    double r1, r2, r;
    cin >> r1 >> r2;
    r = 1 / (1 / r1 + 1 / r2);
    cout << setprecision(3) << fixed << r << endl;
}