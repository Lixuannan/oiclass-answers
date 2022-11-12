//Created in Sat Nov 12 09:25:54 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;
double s, l;
int main(){
    cin >> s;
    l = sqrt(s / 3.14);
    cout << setprecision(2) << fixed << l;
}