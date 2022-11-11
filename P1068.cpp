//Created in Fri Nov 11 14:56:05 2022
#include "iostream"
#include "cmath"

using namespace std;
string in;
int a[123];
int maxn, minn = 9999;
int main(){
    cin >> in;
    for (char i: in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] > maxn) {
            maxn = a[i];
        } else if(a[i] < minn && a[i] != 0){
            minn = a[i];
        }
    }
    if (maxn - minn < 2){
        cout << "No Answer\n0";
        return 0;
    } else{
        for (int i=2; i <= ceilf(sqrt(maxn - minn)); i++){
            if ((maxn - minn) % i == 0 && i != maxn - minn){
                cout << "No Answer\n0";
                return 0;
            }
        }
        cout << "Lucky Word\n" << maxn - minn;
        return 0;
    }
}