//Created in Fri Nov 11 16:40:10 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "cmath"

using namespace std;
long long n, cnt;
int main(){
    cin >> n;
    for (long long i=0; i <= (long long)(ceilf(sqrt(float (n)))); i++){
        if (sqrt(n - i * i) == (long long)(sqrt(n - i * i))){
            cnt += 1;
        }
    }
    cout << cnt;
}