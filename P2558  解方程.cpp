//Created in Fri Nov 11 14:19:01 2022
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