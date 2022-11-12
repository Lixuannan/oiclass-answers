//Created in Sat Nov 12 09:25:37 2022
 //System: Darwin 22.1.0
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