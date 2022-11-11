//Created in Fri Nov 11 14:30:45 2022
#include<iostream>
#include<cmath>
using namespace std;
int num;
int tmp = 999999;
int cpnum1, cpnum2;
int n[201];
int main(){
    cin>>num;
    for (int i = 1; i <= num; i++){
        cin>>n[i];
    }
    for (int i = 2; i <= num; i++){
        if (abs(n[i - 1] - n[i]) < tmp){
            cpnum1 = n[i - 1];
            cpnum2 = n[i];
            tmp = abs(n[i - 1] - n[i]);
            continue;
        }
    }
    cout<<cpnum1<<" "<<cpnum2<<endl;
}