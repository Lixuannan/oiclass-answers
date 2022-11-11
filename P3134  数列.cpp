//Created in Fri Nov 11 13:59:50 2022
#include "iostream"
#include "iomanip"

using namespace std;
int n;
double ans,gn,fn;

double g(int x){
    double sum = 0;
    for (int i=1; i <= x; i++){
        if (i % 2 == 1){
            sum += 1.0 / double(i);
        }
    }
    // cout << sum << endl;
    return sum;
}

double f(int x){
    double sum = 0;
    for (int i=1; i <= x; i++){
        if (i % 2 == 0){
            sum += 1.0 / double(i);
        }
    }
    // cout << sum << endl;
    return sum;
}

int main(){
    cin >> n;
    fn = f(n);
    gn = g(n);
    ans = gn - fn;
    cout << setprecision(8) << fixed << ans <<endl;
}