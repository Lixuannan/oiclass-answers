//Created in Fri Nov 11 11:49:10 2022
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