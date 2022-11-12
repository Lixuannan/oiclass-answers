//Created in Sat Nov 12 11:59:13 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int a, b, c, d, e, f;
int gbs, gys;
bool p;
int main(){
    cin>>a>>b>>c>>d;
    for (int i=min(d,b); i <= min(d, b); i++){
        if (i * max(d,b) % min(d,b) == 0){
            gbs = i * max(d,b);
        }
    }
    a *= gbs / b;
    c *= gbs / d;
    e = a - c;
    f = gbs;
    for (int i=2; i <= min(e,f); i++){
        if (e % i == 0 && f % i == 0){
            gys = i;
            p = true;
        }else{
            continue;
        }
    }
    if (!p) cout<<e<<" "<<f;
    else cout<<e/gys<<" "<<f/gys;
}