//Created in Fri Nov 11 16:16:32 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int n, tgp=7, dzp=9;
string str;
string a = "abcdefghijklmnopqrstuvwxyz";
int main(){
    cin >> str;
    for (char & i : str){
        i = a[(a.find(i) + 3) % 26];
    }
    cout << str << endl;
}