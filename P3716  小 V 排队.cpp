//Created in Fri Nov 11 10:52:32 2022
#include "iostream"

using namespace std;
int n, in, sum, tmpsum;
int main(){
    cin >> n;
    for(int i=1; i <= n ; i++){
        cin >> in;
        sum += in;
        tmpsum += in;
        if (tmpsum >= 30){
            sum += 10;
            tmpsum -= 30;
        }
    }
    cout << sum;
}