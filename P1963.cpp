//Created in Sat Nov 12 11:58:50 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include <iostream>
using namespace std;
int x, y, k, a, b, xi, yi;
int main(){
    cin >> x >> y >> k;
    if(x == y){
        cout<< 0 <<endl;
        return 0;
    }
    for (int i=1; i <= k; i++){
        cin >> a >> xi >> b >> yi;
        x += a * xi;
        y += b * yi;
        if (x <= 0) x = 0;
        if (y <= 0) y = 0;
        if (x == y){            
            cout << i << endl;            
            return 0;       
        }
    }
    cout << -1;
}