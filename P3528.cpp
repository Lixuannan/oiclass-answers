//Created in Sat Nov 12 09:25:47 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int in, maxn, minn = 99999, sum;
int main(){
    for (int i=1; i <= 5; i ++){
        cin >> in;
        sum += in;
        if (in > maxn){
            maxn = in;
        }
        if (in < minn){
            minn = in;
        }
    }
    cout << sum - minn - maxn;
}