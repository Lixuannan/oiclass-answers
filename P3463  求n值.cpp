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