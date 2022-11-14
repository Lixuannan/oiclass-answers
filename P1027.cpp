// Created in Sat Nov 12 16:27:10 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
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