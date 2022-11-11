//Created in Fri Nov 11 11:49:45 2022
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