//Created in Fri Nov 11 15:10:14 2022
#include<iostream>
using namespace std;
int n, tb, tw;
int main(){
    cin>>n;
    tb = 27 + n / 3.0 + 23;
    tw = n / 1.2;
    if (tb == tw) cout<<"All"<<"\n"<<tw;
    else if (tb < tw) cout<<"Bike"<<"\n"<<tb;
    else if (tw < tb) cout<<"Walk"<<"\n"<<tw;
}