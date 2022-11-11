//Created in Fri Nov 11 10:52:33 2022
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