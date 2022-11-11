//Created in Fri Nov 11 16:00:53 2022
 //System: Darwin 22.1.0
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