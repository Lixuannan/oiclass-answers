//Created in Fri Nov 11 15:12:31 2022
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