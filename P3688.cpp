//Created in Fri Nov 11 14:56:46 2022
#include "iostream"

using namespace std;
int n,t,in,sum;
int main(){
    cin >> n >>t;
    for(int i=1; i <= n; i++){
        cin >> in;
        if (in > t){
            sum += in - t;
        }else {
            continue;
        }
    }
    cout << sum;
}