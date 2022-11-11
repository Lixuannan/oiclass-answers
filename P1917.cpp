//Created in Fri Nov 11 14:56:27 2022
#include "iostream"
using namespace std;
int m, sum, cnt;
int main(){
    cin >> m;
    for (int i=1; i <= m; i++){
        if (sum + (1 + i) * i / 2 < m){
            sum += (1 + i) * i / 2;
            cnt += 1;
        }else{
            cout << cnt << " " << sum << endl;
            return 0;
        }
    }
}