//Created in Fri Nov 11 14:56:24 2022
//#include <iostream>
//
//using namespace std;
//int cnt;
//string str;
//int main(){
//    cin >> str;
//    for (char i: str){
//        if (i == '1'){
//            cnt += 1;
//        }
//    }
//    cout << cnt;
//}

//#include <iostream>
//
//using namespace std;
//int x, y, k, a, b, xi, yi;
//int main(){
//    cin >> x >> y >> k;
//    for (int i=1; i <= k; i++){
//        cin >> a >> xi >> b >> yi;
//        x += a * xi;
//        y += b * yi;
//        if (x <= 0) x = 0;
//        if (y <= 0) y = 0;
//        if (x == y){
//            cout << i << endl;
//            return 0;
//        }
//    }
//    if (x == y){
//        cout << k << endl;
//        return 0;
//    }
//    cout << -1;
//}

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//bool isprime(int n) {
//    if (n <= 1) return false;
//    if (n == 2) return true;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool is_pure_prime(int n) {
//    if (isprime(n)){
//        return false;
//    }
//    bool a[999999];
//    memset(a, false, sizeof a);
//    bool p = true;
//    while (p){
//        p = false;
//        for (int i=2; i * i <= n; i++){
//            if (n % i == 0){
//                p = true;
//                if (a[i]){
//                    return false;
//                }
//                a[i] = true;
//                n /= i;
//            }
//        }
//        if (a[n]){
//            return false;
//        }
//    }
////    cout << endl;
//    return true;
//}
//
//int n;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin >> n;
//    for (int i = 6; i <= n; i++) {
//        if (is_pure_prime(i)) {
//            cout << i << " ";
//        }
//    }
//}

#include <iostream>
#include <algorithm>

using namespace std;
struct tao{
    int height, sum, id;
} t[99999999];
bool cmp1(tao a, tao b){
    return a.height > b.height;
}
bool cmp2(int a, int b){
    return a > b;
}
bool cmp3(tao a, tao b){
    return a.id < b.id;
}
int n, m, a[99999999];
int main(){
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    for (int i=1; i <= m; i++){
        cin >> t[i].height;
        t[i].id = i;
    }
    sort(a + 1, a + n + 1, cmp2);
    sort(t + 1, t + m + 1, cmp1);
    int p = 1;
    for (int i=1; i <= n; i++){
        if (p > m){
            p = 1;
        }
        t[p++].sum += a[i];
    }
    sort(t + 1, t + m + 1, cmp3);
    for (int i=1; i <= m; i++){
        cout << t[i].sum << " ";
    }
}

//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int n, ans, maxn;
//int a[99999999];
//
//bool f(int lim) {
//    int cur = 1;
//    while (cur <= n) {
//        int pos = lower_bound(a + cur, a + n + 1, a[cur - 1] + lim) - a;
//        if (a[pos] != a[cur - 1] + lim) return false;
//        cur = pos + 1;
//    }
//    return true;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        maxn = max(maxn, a[i]);
//        a[i] += a[i - 1];
//    }
//    for (int i = 1; i <= n; ++i) {
//        if (a[n] % a[i] != 0 || a[i] < maxn){
//            continue;
//        }
//        if (f(a[i])) {
//            ans = a[i];
//            break;
//        }
//    }
//    cout << ans;
//}