//Created in Fri Nov 11 16:40:12 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int n,sum,in;
int main() {
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        sum += in;
    }
    cout << sum << endl;
}