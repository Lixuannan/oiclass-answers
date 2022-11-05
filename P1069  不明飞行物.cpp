#include "iostream"

using namespace std;
int n, m;
string a, b;
int main(){
    cin >> a >> b;
    for (int i=0; i <= a.length() - 1; i++){
        if (n == 0){
            n = a[i] - '@';
        } else{
            n *= a[i] - '@';
        }
        // putchar(a[i]);
        n %= 47;
    }
    // putchar('\n');
    for (int i=0; i <= b.length() - 1; i++){
        if (m == 0){
            m = b[i] - '@';
        } else{
            m *= b[i] - '@';
        }
        // putchar(b[i]);
        m %= 47;
    }
    // putchar('\n');
    // cout << n << " " << m << endl;
    if (n == m){
        cout << "GO\nr1=r2=" << n;
    } else{
        cout << "STAY\nr1=" << n << " r2=" << m;
    }
}