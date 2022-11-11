//Created in Fri Nov 11 16:04:08 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int n;
bool p = true;
int main(){
    cin>>n;
    cout<<n<<"=";
    for (int i=2; i <= n; i++){
        while (n % i == 0)
        {
            if (p) cout<<i;
            else cout<<"*"<<i;
            n /= i;    
            p = false;        
        }
        
    }
}