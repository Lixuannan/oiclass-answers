//Created in Sat Nov 12 11:58:36 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include <iostream>
#include <algorithm>
using namespace std;
bool p[102];
int n, m, cnt;
string bug[102], fix[102];
int main(){
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        cin >> bug[i];
        transform(bug[i].begin(), bug[i].end(), bug[i].begin(), ::tolower);
    }
    for (int i=1; i <= m; i++){
        cin >> fix[i];
        transform(fix[i].begin(), fix[i].end(), fix[i].begin(), ::tolower);
    }
    for (int i=1; i <= m; i++){
        for (int j=1; j <= n; j++){
            if (bug[j].find(fix[i]) != string::npos
            || fix[i].find(bug[j]) != string::npos){
                p[j] = true;
            }
        }
    }
    for (int i=0; i <= 101; i++){
        if (p[i]){
            cnt += 1;
        }
    }
    cout << cnt;
}