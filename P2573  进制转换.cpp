//Created in Wed Nov  9 16:22:04 2022
#include<iostream>

using namespace std;
bool boolp = true;
int n, m, a[999999], p;

int main() {
    cin >> n >> m;
    while (n > 0){
        a[p] = n % m;
        n /= m;
        p += 1;
    }
    for (int i=999998; i >= 0; i--){
        if (a[i] == 0 && boolp){
            continue;
        } else if(a[i] != 0 || !boolp){
            cout << a[i];
            boolp = false;
        }
    }
}