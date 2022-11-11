//Created in Fri Nov 11 14:56:19 2022
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