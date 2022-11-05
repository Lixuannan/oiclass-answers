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