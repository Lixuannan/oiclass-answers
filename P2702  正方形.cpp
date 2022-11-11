//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int n,m;
double a,mf,g;

double lengh(int n, int m){
    double lengh_ = m;
    for (int i=1; i < ceilf(n / 4.0); i ++){
        lengh_ = sqrt(2 * pow(lengh_ / 2.0, 2));
    }
    return lengh_;
}

int main(){
    cin>>n>>m;
    for (int i=1; i <= 4 * m; i+=1){
        if (i % 3 == 0){
            g += lengh(i, n);
        }else if (i % 3 == 1){
            a += lengh(i, n);
        }else if(i % 3 == 2){
            mf += lengh(i, n);
        }
    }
    cout<<setprecision(3)<<fixed<<a<<" "<<mf<<" "<<g<<endl;
}