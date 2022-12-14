// Created in Sat Nov 12 16:27:37 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>
#include <cmath>
using namespace std;
int n;

string isprime(int x){
	if (x == 2){
		return "YES";
	}
	if (x <= 1){
		return "NO";
	}
	for (int i=2; i <= ceil(sqrt(x)); i++){
		if (x % i == 0){
			return "NO";
		}
	}
	return "YES";
}

int count(string str){
	int cnt = 0;
	for (char i: str){
		if (i == 'a' || i == 'e' || i == 'o' 
		|| i == 'u' || i == 'i' || i == 'y'){
			cnt += 1;
		}
	}
	return cnt;
}

string touper(string str){
	for (int i=0; i <= str.length() - 1; i++){
		str[i] = toupper(str[i]);
	}
	return str;
}

int count(int x){
	int cnt = 0;
	while (x > 0){
		cnt += x % 2;
		x /= 2;
	}
	return cnt;
}

int main(){
    while (cin >> n){
        if (n == 1){
        	string str;
        	cin >> str;
        	cout << str.length() << endl;
		}else if (n == 2){
			string str;
			cin >> str;
			cout << count(str) << endl;
		}else if (n == 3){
			int in;
			cin >> in;
			cout << isprime(in) << endl;
		}else if (n == 4){
			string str;
			cin >> str;
			if (touper(str) != str){
				cout << "NO" << endl;
			}else {
				cout << "YES" << endl;
			}
		}else if (n == 5){
			int in;
			cin >> in;
			cout << count(in) << endl;
		}
    }
}