//Created in Sat Nov 12 09:25:18 2022
 //System: Darwin 22.1.0
#include<iostream>

using namespace std;

int main(){
    int origin, got;
    cin>>got>>origin;
    if (got >= origin){
        cout<<(got - origin)<<"\n";
    }
    else{
        cout<<"Not Enough!"<<"\n";
    }
}