//Created in Fri Nov 11 14:56:42 2022
#include "iostream"
#include "cmath"

using namespace std;
int n, ans, t;
int main(){
    cin >> n;
    ans = int (pow(n % 10, 3)
               + pow(n / 10 % 10, 3)
               + pow(n / 100 % 10, 3));
    for(int i=1; i <= 100000; i++){
        t = ans;
        ans = int (pow(ans % 10, 3)
                   + pow(ans / 10 % 10, 3)
                   + pow(ans / 100 % 10, 3));
        if (ans == t){
            cout << t;
            return 0;
        }
    }
    cout << "error" << endl;
}