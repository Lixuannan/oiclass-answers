//Created in Sat Nov 12 08:45:49 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int n, sum, in, min_;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        sum += in;
        if (min_ > sum){
            min_ = sum;
        }
    }
    cout << 0 - min_;
}