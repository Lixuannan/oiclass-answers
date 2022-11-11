//Created in Fri Nov 11 16:40:14 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
long long s, n, sum;
int main(){
    cin >> s;
    while(sum < s){
        n += 1;
        sum += n;
    }
    cout << n;
}