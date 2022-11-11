//Created in Fri Nov 11 15:12:35 2022
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