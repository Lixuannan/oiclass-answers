//Created in Fri Nov 11 15:02:13 2022
#include<iostream>

using namespace std;

int main(){
    int a, h, m, s;
    cin>>h>>m>>s;
    a = (h * 60 *60) + (m * 60) + s;
    cout<<a;
}