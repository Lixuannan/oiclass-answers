//Created in Wed Nov  9 16:21:47 2022
#include "iostream"

using namespace std;
int n;
string in;

string read(){
    char a;
    string ret = "";
    while (true){
        a = getchar();
        if (a == '#'){
            return ret;
        } else{
            ret += a;
        }
    }
}

int main(){
    in = read();
    for (char i: in){
        if (i == 'b' || i == 'B' || i == 'm' || i == 'M'){
            n += 1;
        }
    }
    cout << n;
}