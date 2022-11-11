//Created in Fri Nov 11 16:04:45 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b;
    if (b == 15){
        cout << 14 << endl;
    }else if (b == 0){
        cout << 1 << endl;
    }else if (a - b == -1){
        cout << (b + 1) << endl;
    }else if (a - b == 1){
        cout << (b - 1) << endl;
    }
}