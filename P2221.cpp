//Created in Sat Nov 12 09:25:40 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b >> c;
    if (a + b <= c){
        cout << "no" << endl;
        return 0;
    }else if (a + c <= b){
        cout << "no" << endl;
        return 0;
    }else if (b + c <= a){
        cout << "no" << endl;
        return 0;
    }
    cout << "yes" << endl;
}