//Created in Fri Nov 11 15:12:52 2022
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