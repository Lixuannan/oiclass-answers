//Created in Fri Nov 11 11:49:15 2022
#include "iostream"

using namespace std;
int n, m, k, a[101], cntplcm, b[101], cnt;

int lcm(int x, int y){
    for (int i=min(x, y); i <= x * y; i++){
        if (i % x == 0 && i % y == 0){
            return i;
        }
    }
    return 0;
}

int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i=0; i < m; i++){
        cin >> b[i];
    }
//    for (int i=0; i < n + m; i++){
//        cout << a[i] << " ";
//    }
//    cout << endl;
    int lcm_ = lcm(n, m);
    for (int i = 0; i < lcm_; i++) {
        if (((a[i % n] == 1 && b[i % m] == 2)
             || (a[i % n] == 2 && b[i % m] == 3)
             || (a[i % n] == 3 && b[i % m] == 1))
            && a[i % n] != 0 && b[i % m] != 0) {
            cntplcm += 1;
        }
        // cout << a[i % n] << "\t" << b[i % m] << "\t" << i + 1 << endl;
    }
    cnt = (k - k % lcm_) / lcm_ * cntplcm;
    for (int i=0; i < k % lcm_; i++){
        if (((a[i % n] == 1 && b[i % m] == 2)
             || (a[i % n] == 2 && b[i % m] == 3)
             || (a[i % n] == 3 && b[i % m] == 1))
            && a[i % n] != 0 && b[i % m] != 0) {
            cnt += 1;
        }
    }
    cout << cnt << endl;
}

//
//#include "iostream"
//
//using namespace std;
//int n, m, k, a[101], cnt, b[101];
//
//int main() {
//    cin >> n >> m >> k;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for (int i=0; i < m; i++){
//        cin >> b[i];
//    }
////    for (int i=0; i < n + m; i++){
////        cout << a[i] << " ";
////    }
////    cout << endl;
//    for (long long i = 0; i < k; i++) {
//        if (((a[i % n] == 1 && b[i % m] == 2)
//             || (a[i % n] == 2 && b[i % m] == 3)
//             || (a[i % n] == 3 && b[i % m] == 1))
//            && a[i % n] != 0 && b[i % m] != 0) {
//            cnt += 1;
//        }
//        // cout << a[i % n] << "\t" << b[i % m] << "\t" << i + 1 << endl;
//    }
//    cout << cnt << endl;
//}