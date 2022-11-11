//Created in Fri Nov 11 15:24:38 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int n,minn,maxn;
int main(){
    cin >> n;
    if (n % 2 == 0){
        if (n % 4 == 0){
            minn = n / 4;
        }else if ((n - 2) % 4 == 0){
            minn = n / 4 + 1;
        }
        if (n % 2 == 0){
            maxn = n / 2;
        }else if ((n - 1) % 2 == 0){
            maxn = n / 2 + 1;
        }
    }
    cout << minn << " "  << maxn << endl;
}