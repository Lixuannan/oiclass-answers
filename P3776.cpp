//Created in Sat Nov 12 09:25:55 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int n, sum = 1, cnt = 1;
int main(){
    cin >> n;
    while (sum <= n){
        sum *= 3;
        cnt += 1;
    }
    cout << cnt << endl;
}