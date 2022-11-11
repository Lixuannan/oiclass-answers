//Created in Fri Nov 11 16:04:45 2022
 //System: Darwin 22.1.0
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