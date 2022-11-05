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