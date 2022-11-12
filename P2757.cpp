//Created in Sat Nov 12 09:25:31 2022
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