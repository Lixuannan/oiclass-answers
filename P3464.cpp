//Created in Sat Nov 12 09:25:45 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int s, n, sum;
int main(){
    cin >> s;
    while(sum < s){
        n += 2;
        sum += n * n;
    }
    cout << n - 2;
}