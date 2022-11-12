//Created in Sat Nov 12 08:45:28 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;

string getstr(){
    char a;
    string out;
    while(cin.get(a)){
        if (a != '\n'){
            out += a;
        } else{
            return out;
        }
    }
}

int n;
string in;
int main(){
    in = getstr();
    for (char i: in){
        if (i != ' ' && i != '\n'){
            n += 1;
        }
    }
    cout << n;
}