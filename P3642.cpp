//Created in Sat Nov 12 08:45:45 2022
 //System: Darwin 22.1.0
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