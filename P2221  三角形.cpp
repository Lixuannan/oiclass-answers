//Created in Fri Nov 11 10:52:20 2022
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