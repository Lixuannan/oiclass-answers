//Created in Wed Nov  9 16:21:04 2022
#include "iostream"
using namespace std;
int n,x,y;
int main(){
    cin>>n>>x>>y;
    if (y % x == 0){
        cout << n - (y / x);
    }else {
        cout << n - (y / x) - 1;
    }
}