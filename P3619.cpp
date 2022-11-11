//Created in Fri Nov 11 15:25:10 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int m, t, u, f, d, in, sum, cnt;

int main() {
    cin >> m >> t >> u >> f >> d;
    for (int i = 1; i <= t; i++) {
        cin >> in;
        if (in == 1 && sum + u <= m) {
            sum += u;
            cnt += 1;
        } else if (in == 2 && sum + f <= m) {
            sum += f;
            cnt += 1;
        } else if (in == 3 && sum + d <= m) {
            sum += d;
            cnt += 1;
        } else{
            cout << cnt << endl;
            return 0;
        }
    }
}