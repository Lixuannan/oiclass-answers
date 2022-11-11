//Created in Fri Nov 11 16:39:44 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, all[10085];
int ans1, ans10, ans100;
int main(){
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>all[i];
        ans100 += (all[i] - all[i] % 100) / 100;
        ans10 += ((all[i] - (all[i] - all[i] % 100)) - (all[i] - (all[i] - all[i] % 100)) % 10) / 10;
        ans1 += (all[i] - (all[i] - all[i] % 100) - ((all[i] - (all[i] - all[i] % 100)) - (all[i] - 
        (all[i] - all[i] % 100)) % 10)) - ((all[i] - (all[i] - all[i] % 100)) - (all[i] - (all[i] - all[i] % 100)) % 10) % 1 / 1;
    }
    cout<<ans100<<"\n"<<ans10<<"\n"<<ans1<<endl;
}