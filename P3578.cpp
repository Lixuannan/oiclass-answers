//Created in Fri Nov 11 15:02:48 2022
#include<iostream>
using namespace std;
#define int long long
void out(__int128 x){
    string str;
    while (x > 0){
        str = char ((x % 10) + '0') + str;
        x /= 10;
    }
    cout << str.substr(0, str.length() - 3) << '.' << str.substr(str.length() - 3, str.npos) << endl;
}
int n, m, x, y;
__int128 a[1000001];
signed main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> x;
        a[i] = x + a[i - 1];
    }
    cin >> m;
    for (int i=1; i <= m; i++){
        cin >> x >> y;
        if (x >= y){
            swap(x, y);
        }
        __int128 tmp = (a[y] - a[x - 1]) * 10000;
        tmp /= y - x + 1;
        if (tmp % 10 >= 5){
            tmp += 10;
        }
        tmp /= 10;
        out(tmp);
    }
}