//Created in Fri Nov 11 15:24:31 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n;
int num = 1;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
        for (int ii=1; ii <= i; ii++){
            if (num == 10){
                num = 0;
            }
            cout<<num;
            num ++;
        }
        cout<<"\n";
    }
}