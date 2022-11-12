//Created in Sat Nov 12 09:25:49 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "iomanip"

using namespace std;
double ave;
int n, m, minn = 999999999, minx, miny, maxn, maxx, maxy, in;
int main(){
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        for (int j=1; j <= m; j++){
            cin >> in;
            ave += in;
            if (in < minn){
                minn = in;
                minx = i;
                miny = j;
            }
            if (in > maxn){
                maxn = in;
                maxx = i;
                maxy = j;
            }
        }
    }
    cout << maxn << " " << maxx << " " << maxy << endl;
    cout << minn << " " << minx << " " << miny << endl;
    cout << setprecision(2) << fixed << ave / (n * m) << endl;
}