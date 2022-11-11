//Created in Fri Nov 11 15:12:44 2022
#include "iostream"

using namespace std;

bool isrennian(int n) {
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        return true;
    }
    return false;
}

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int y, m, d, yy, mm, dd;

int main() {
    cin >> y >> m >> d;
    yy = y;
    mm = m;
    dd = d;
    for (int i = 1; i <= 10000; i++) {
        // cout << yy << "-" << mm << "-" << dd << endl;
        if (mm < 12){
            if (dd >= month[mm]) {
                if (isrennian(yy)) month[2] = 29;
                else month[2] = 28;
                mm += 1;
                dd = 1;
            } else{
                dd += 1;
            }
        }else{
            if (dd >= month[mm]) {
                if (isrennian(yy)) month[2] = 29;
                else month[2] = 28;
                mm = 1;
                yy += 1;
                dd = 1;
            }else{
                dd += 1;
            }
        }
    }
    cout << yy << "-" << mm << "-" << dd;
}