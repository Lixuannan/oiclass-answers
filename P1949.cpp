//Created in Sat Nov 12 09:25:37 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "iomanip"
using namespace std;
double n;
int main(){
    cin >> n;
    if (n > 100){
        cout << setprecision(2) << fixed << 90 + (n - 100) * 0.6 << endl;
    } else{
        cout << setprecision(2) << fixed << n * 0.9 << endl;
    }
}