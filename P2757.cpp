//Created in Fri Nov 11 14:56:18 2022
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