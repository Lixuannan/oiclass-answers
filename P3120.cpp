//Created in Fri Nov 11 15:12:53 2022
#include<iostream>
#include<cmath>

using namespace std;
long long n;
int main(){
    cin >> n;
    for (long long i=2; i <= ceilf(sqrt(n)); i++){
        if (n % i == 0){
            cout << n / i;
            return 0;
        }
    }
}