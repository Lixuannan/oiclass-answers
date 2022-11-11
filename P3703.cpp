//Created in Fri Nov 11 16:40:21 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int n,xin,score;
int main(){
    cin >> n;
    for (int i=1; i <= n; i ++){
        cin >> xin;
        score += xin;
    }
    score /= n;
    score += 23;
    score %= 10;
    cout << score;
}