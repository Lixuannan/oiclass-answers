//Created in Fri Nov 11 11:49:48 2022
#include "iostream"
#include "cmath"

using namespace std;
int n;
int main(){
    cin >> n;
    if (n < 64){
        cout << (long long) (pow(2, n) - 1);
    }else{
        cout << "18446744073709551615";
    }
}