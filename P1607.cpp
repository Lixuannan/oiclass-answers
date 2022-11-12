//Created in Sat Nov 12 09:25:33 2022
 //System: Darwin 22.1.0
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