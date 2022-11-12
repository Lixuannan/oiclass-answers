//Created in Sat Nov 12 11:59:09 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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