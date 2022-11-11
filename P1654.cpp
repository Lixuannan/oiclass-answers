//Created in Fri Nov 11 15:24:34 2022
 //System: Darwin 22.1.0
#include <iostream>
#include <cstring>

using namespace std;
int a[11][11], n;

bool check() {
    bool l[10];
    memset(l, 0, sizeof l);
    for (int i = 1; i <= 9; i++) {
        memset(l, 0, sizeof l);
        for (int j = 1; j <= 9; j++) {
            if (l[a[i][j]]) {
                return false;
            } else {
                l[a[i][j]] = true;
            }
        }
    }
    for (int i = 1; i <= 9; i++) {
        memset(l, 0, sizeof l);
        for (int j = 1; j <= 9; j++) {
            if (l[a[j][i]]) {
                return false;
            } else {
                l[a[j][i]] = true;
            }
        }
    }
    memset(l, 0, sizeof l);
    for (int i = 1; i <= 1; i += 3) {
        memset(l, 0, sizeof l);
        for (int j = i; j <= i + 2; j++) {
            for (int k = i; k <= i + 2; k++) {
                // cout << l[a[j][k]] << endl;
                if (l[a[j][k]]){
                    // cout << j << " " << k << " " << a[j][k] << " " << i << endl;
                    return false;
                }else{
                    l[a[j][k]] = true;
                    continue;
                }
            }
        }
    }
    return true;
}

void getData() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        getData();
        if (check()) {
            cout << "Right\n";
        } else {
            cout << "Wrong\n";
        }
    }
}
//
//#include "iostream"
//int main(){
//    int n = 10 xor 10;
//    std::cout << n;
//}