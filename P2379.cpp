//Created in Fri Nov 11 16:04:19 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "cmath"
using namespace std;
int n;
int main(){
    cin >> n;
    for (int i=2; i <= ceilf(sqrt(n)); i++){
        if (n % i == 0 && n / i > i){
            cout << n / i << endl;
            return 0;
        }else if (n % i == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}