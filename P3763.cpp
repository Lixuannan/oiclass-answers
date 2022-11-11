//Created in Fri Nov 11 15:02:52 2022
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