//Created in Fri Nov 11 16:04:42 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int n,a,b,c,maxa,maxb,maxc,maxsum;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a >>b >>c;
        if (a + b + c > maxsum) maxsum = a +b +c;
        if (a > maxa) maxa = a;
        if (b > maxb) maxb = b;
        if (c > maxc) maxc = c;
    }
    cout << maxsum << " " <<  maxa << " " <<  maxb << " " <<  maxc;
}