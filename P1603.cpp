//Created in Fri Nov 11 16:40:01 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int n, k, cnt, s;
bool p = true;
int main(){
    cin>>n>>k;
    for (int i=1; i <= n; i++){
        s = i;
        for (int a=0; a <= 6; a++){
            int wei = s / (long long)pow(10,a) % 10;
            if (wei > k){
                p=false;
            }else{
                continue;
            }
        }
        if (p) cnt++;
        p = true;
    }
    cout<<cnt;
}