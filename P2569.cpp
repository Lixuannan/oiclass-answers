//Created in Sat Nov 12 09:25:42 2022
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