//Created in Fri Nov 11 11:49:45 2022
#include "iostream"

using namespace std;
char n;
int a, b;
int main(){
    cin >> a >> n >> b;
    if (n == '-'){
        cout << a - b;
    }else if (n == '+'){
        cout << a + b;
    }
}