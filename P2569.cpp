//Created in Fri Nov 11 15:24:54 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n,k,power=1;
int main(){
    cin>>n>>k;
    for (int i=0; i < k; i++){
        power *= n;
        power %= 100;
    }
    cout<<power/10%10<<" "<<power%10;
}