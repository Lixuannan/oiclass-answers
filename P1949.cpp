//Created in Fri Nov 11 14:56:27 2022
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