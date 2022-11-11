//Created in Fri Nov 11 13:59:34 2022
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