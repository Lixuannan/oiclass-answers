//Created in Fri Nov 11 15:13:01 2022
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