//Created in Sat Nov 12 11:59:12 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n, t;
int main(){
    cin >> n;
    for (int i=1; i <= n - 3; i++){
        for (int j=1; j < i; j++){
            putchar(' ');
        }
        for (int j=1; j <= 6; j++){
            putchar('*');
        }
        for (int j=1; j <= (n - 2) * 2 - (2 * i); j++){
            putchar(' ');
        }
        for (int j=1; j <= 6; j++){
            putchar('*');
        }
        putchar('\n');
        t = i;
    }
    for (int i=t; i < n; i++){
        for (int j=1; j <= i; j++){
            putchar(' ');
        }
        if (n - i == 3){
            printf("************\n");
        } else if(n - i == 2){
            printf("**********\n");
        } else if(n - i == 1){
            printf("********\n");
        }
    }
}


//输出样例1：
//******      ******
//******    ******
//******  ******
//************
//**********
//********
//输出样例2：
//******          ******
//******        ******
//******      ******
//******    ******
//******  ******
//************
//**********
//********
//输出样例3：
//******              ******
//******            ******
//******          ******
//******        ******
//******      ******
//******    ******
//******  ******
//************
//**********
//********

//******  ******
// ************
//  **********
//   ********