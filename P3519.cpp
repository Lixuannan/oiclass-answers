//Created in Fri Nov 11 14:56:40 2022
#include "iostream"

using namespace std;
int yyyy, mm, dd;

int main() {
    cin >> yyyy >> mm >> dd;
    // w=y+[y/4]+[c/4]-2c+[26(m+1)/10]+d-1
    if (mm == 1) {
        mm = 13;
        yyyy -= 1;
    } else if (mm == 2) {
        mm = 14;
        yyyy -= 1;
    }
    int c = yyyy / 100;
    yyyy %= 100;
    int w = (yyyy + (yyyy / 4) + (c / 4) - 2 * c + (26 * (mm + 1) / 10) + dd - 1) % 7;
    if (w == 0) cout << "Sun.";
    else if (w == 1) cout << "Mon.";
    else if (w == 2) cout << "Tue.";
    else if (w == 3) cout << "Wed.";
    else if (w == 4) cout << "Thu.";
    else if (w == 5) cout << "Fri.";
    else if (w == 6) cout << "Sat.";
}