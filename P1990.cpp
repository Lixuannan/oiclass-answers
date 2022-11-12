//Created in Sat Nov 12 11:58:50 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n;
string in;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        if ((in[in.length() - 1] - '0') % 2 == 0){
            cout << "even" << endl;
        } else{
            cout << "odd" << endl;
        }
    }
}