#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
        for (int j = (n - i); j > 0; j--){
            cout<<" ";
        }
        for (int j=1; j < i; j++){
            cout<<j%10;
        }
        cout<<i%10;
        for (int j=i-1; j > 0; j--){
            cout<<j%10;
        }
        cout<<"\n";
    }
}