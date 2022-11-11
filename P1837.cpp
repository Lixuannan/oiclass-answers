//Created in Fri Nov 11 16:40:04 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i=7; i <= n; i++){
        if (i % 7 == 0)
        {
            cout<<i<<"\n";
        }else{
            for (int ii=0; ii<=9; ii++){
                if (i / (long long)pow(10, ii) % 10 == 7){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
        
    }
}