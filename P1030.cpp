//Created in Sat Nov 12 09:25:20 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    cout<<(n - n%3) / 3;
}