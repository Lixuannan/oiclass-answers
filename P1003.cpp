//Created in Fri Nov 11 16:15:51 2022
 //System: Darwin 22.1.0
#include<iostream>

using namespace std;

int main(){
    int a, h, m, s;
    cin>>h>>m>>s;
    a = (h * 60 *60) + (m * 60) + s;
    cout<<a;
}