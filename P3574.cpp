//Created in Fri Nov 11 16:04:39 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
long long n, cnt4, cnt7;
int main(){
    cin >> n;
    while (n % 4 == 0 || n % 7 == 0){
        if (n % 4 == 0){
            cnt4 += 1;
            n /= 4;
        }
        if (n % 7 == 0){
            cnt7 += 1;
            n /= 7;
        }
    }
    cout << cnt4 << " " << cnt7;
}