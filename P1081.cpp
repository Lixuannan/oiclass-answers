//Created in Sat Nov 12 09:25:24 2022
 //System: Darwin 22.1.0
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