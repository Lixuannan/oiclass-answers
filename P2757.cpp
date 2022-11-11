//Created in Fri Nov 11 16:39:59 2022
 //System: Darwin 22.1.0
#include <iostream>

using namespace std;
int cnt;
string str;
int main(){
    cin >> str;
    for (char i: str){
        if (i == '1'){
            cnt += 1;
        }
    }
    cout << cnt;
}