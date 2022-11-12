//Created in Sat Nov 12 11:58:42 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include <iostream>
#include <cstring>

using namespace std;
int h, w, n, m;
int a[30][30];
char ch;

int dfs(int x, int y) {
    if (a[x][y] == 0) {
        return 0;
    }
    a[x][y] = 0;
    return 1 + dfs(x - 1, y) + dfs(x + 1, y) + dfs(x, y - 1) + dfs(x, y + 1);
}

int main() {
    while (cin >> w >> h) {
        if (h == 0 && w == 0) {
            return 0;
        }
        memset(a, 0, sizeof a);
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                cin >> ch;
                if (ch == '.' || ch == '@'){
                    a[i][j] = 1;
                    if (ch == '@'){
                        n = i;
                        m = j;
                    }
                }
            }
        }
        cout << dfs(n, m) << endl;
    }
}