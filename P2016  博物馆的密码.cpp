//Created in Fri Nov 11 13:59:43 2022
#include <iostream>
#include <sstream>

using namespace std;

string toN(long long x, int n){
    string ret;
    while (x > 0){
        if (x % n >= 10){
            ret = char ((x % n) - 10 + 'A') + ret;
        }else{
            ret = char ((x % n) + '0') + ret;
        }
        x /= n;
    }
    return ret;
}

int digitSum(string a){
    int n = 0;
    while (a.length() > 0){
        if (a[0] > '9'){
            n += int (a[0] - 'A' + 10);
        }else {
            n += int (a[0] - '0');
        }
        a.erase(0, 1);
    }
    return n;
}

long long pwd;
string strPwd, pwd12, pwd16;

int main(){
    cin >> pwd;
    pwd12 = toN(pwd, 12);
    pwd16 = toN(pwd, 16);
    stringstream ss;
    ss.clear();
    ss << pwd;
    ss >> strPwd;
    cout << digitSum(pwd16) << endl;
    // cout << digitSum(pwd12) << " " << digitSum(pwd16) << " " << digitSum(strPwd) << endl;
    if (int (digitSum(pwd12)) == int (digitSum(pwd16)) && int (digitSum(pwd16)) == int (digitSum(strPwd))){
        cout << "Right";
        return 0;
    }
    cout << "Wrong";
}