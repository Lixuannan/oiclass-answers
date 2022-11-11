//Created in Fri Nov 11 10:52:19 2022
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;
bool isPrime(int n){
	if (n % 2 == 0 && n > 2){
		return false;
	}
	if (n == 2){
		return true;
	}
	if (n < 2){
		return false;
	}
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

string toN(int n, int k){
	string ans;
	int tmp = 0;
	while (n > 0){
		tmp = n % k;
		// cout << tmp << endl;
		if (tmp >= 10){
			ans = char (tmp - 10 + 'A') + ans;
		}else{
			ans = char (tmp + '0') + ans;
		}
		n /= k;
	}
	return ans;
}

int to10(string n, int k){
	int ans, pow = 1;
	while (n.length() > 0){
		ans += (n[n.length() - 1] - '0') * pow;
		pow *= k;
		n.erase(n.length() - 1, 1);
	}
	return ans;
}

stringstream sstr;
int h, m, s;
string in, hs, ms, ss, ansV, ansH;
int main(){
	cin >> in;
	sstr.clear();
	sstr << in.substr(0, 2);
	sstr >> h;
	in.erase(0, 3);
	sstr.clear();
	sstr << in.substr(0, 2);
	sstr >> m;
	sstr.clear();
	in.erase(0, 3);
	sstr << in;
	sstr >> s;
//	cout << h << " " << m << " " << s << endl;
	hs = toN(h, 2);
	ms = toN(m, 2);
	ss = toN(s, 2);
	while (hs.length() < 6){
		hs = "0" + hs;
	}
	while (ms.length() < 6){
		ms = "0" + ms;
	}
	while (ss.length() < 6){
		ss = "0" + ss;
	}
	for (int i=0; i <= 5; i++){
		ansV = ansV + hs[i] + ms[i] + ss[i];
	}
	ansH = hs + ms + ss;
	cout << ansV << " " << ansH;
//  cout << toN(0, 2).length();
}