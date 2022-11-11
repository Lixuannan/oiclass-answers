//Created in Fri Nov 11 13:59:50 2022
#include<iostream>

using namespace std;
__int128 n,ans,in,in1;

inline __int128 read()
{
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch>'9'){
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9'){
        x = (x << 1) + (x << 3) + (ch - '0');
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x){
    if (x < 0){
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main() {
    n = read();
    ans = read();
    for (int i=1; i <= n -1 ; i++){
        in = read();
        in1 = read();
        if (in1 == 1){
            ans += in;
        }else if (in1  == 2){
            ans -= in;
        }else if (in1 == 3){
            ans *= in;
        }
    }
    print(ans);
}