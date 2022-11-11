//Created in Fri Nov 11 14:19:01 2022
#include "iostream"
using namespace std;
int n,cnt,h,in;
int main() {
    cin >> n >> h;
    for (int i=1; i <= n; i++){
        cin >> in;
        if (in < h){
            cnt += 1;
        }
    }
    cout << cnt << endl;
}