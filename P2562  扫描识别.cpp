//Created in Fri Nov 11 14:31:09 2022
#include "iostream"

using namespace std;
string in, out;
int main(){
    cin >> in;
    out = in;
    for (int i=0; i < in.length(); i++){
        if (in[i] == 'O'){
            out[i] = '0';
        } else if(in[i] == 'l'){
            out[i] = '1';
        } else if(in[i] == 'Z'){
            out[i] = '2';
        } else if(in[i] == 'S'){
            out[i] = '5';
        } else if(in[i] == 'b'){
            out[i] = '6';
        } else if(in[i] == 'B'){
            out[i] = '8';
        } else if(in[i] == 'q'){
            out[i] = '9';
        }
    }
    cout << out;
}