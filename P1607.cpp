//Created in Sat Nov 12 11:58:46 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, tb, tw;
int main(){
    cin>>n;
    tb = 27 + n / 3.0 + 23;
    tw = n / 1.2;
    if (tb == tw) cout<<"All"<<endl<<tw;
    else if (tb < tw) cout<<"Bike"<<endl<<tb;
    else if (tw < tb) cout<<"Walk"<<endl<<tw;
}