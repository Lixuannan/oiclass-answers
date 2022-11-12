//Created in Sat Nov 12 11:58:48 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long in;

int dSum10(int n){
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int dSum16(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 16;
		n /= 16;
	}
	return sum;
}

int main(){
	cin >> in;
	cout << dSum16(in) << endl;
	if (dSum10(in) == dSum16(in)){
		cout << "Yes";
	}else{
		cout << "No";
	}
}