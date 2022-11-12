//Created in Sat Nov 12 11:59:16 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<iomanip>
using namespace std;
float n,min_ = 999999999,max_,sun,ave;
int main(){
    for (int i=1; i <= 5; i++){
        cin>>n;
        sun += n;
        ave = sun / i;
        if (n > max_) max_ = n;
        if (n < min_) min_ = n;
    }
    cout<<"MAX:"<<max_<<endl;
    cout<<"MIN:"<<min_<<endl;
    cout<<"SUM:"<<sun<<endl;
    cout<<setprecision(1)<<fixed<<"AVE:"<<ave<<endl;
}