//Created in Fri Nov 11 14:31:11 2022
#include "iostream"

using namespace std;
int maxn, a[123];
string in;
int main(){
    cin >> in;
    for (char i:in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] > maxn) maxn = a[i];
    }
    for (int i=97; i <= 122; i++){
        if (a[i] == maxn){
            putchar(i);
        }
    }
}