//Created in Sat Nov 12 08:45:26 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
bool n[1000];
int a, b, c, n1, n2, n3, n4, n5, n6, t;

int main() {
    cin >> a >> b >> c;
    n[a * 100 + b * 10 + c] = true;
    n[a * 100 + c * 10 + b] = true;
    n[b * 100 + a * 10 + c] = true;
    n[b * 100 + c * 10 + a] = true;
    n[c * 100 + b * 10 + a] = true;
    n[c * 100 + a * 10 + b] = true;
    for (int i=100; i < 1000; i++){
        if (n[i]){
            cout << i << endl;
        }
    }
}