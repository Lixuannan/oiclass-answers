//Created in Fri Nov 11 16:39:50 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
short cnt = 1;
long long ans;
string in;
int main(){
	cin >> in;
	while (in.length() > 0){
		ans += (in[in.length() - 1] - '0') * (pow(2, cnt) - 1);
		cnt += 1;
		in.erase(in.length()-1, 1);
	}
	if (ans > 2147483647 || ans <= 0){
		cout << "too long!";
	}else{
		cout << ans;
	}
}