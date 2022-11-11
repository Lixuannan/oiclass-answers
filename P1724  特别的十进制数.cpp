//Created in Fri Nov 11 10:52:16 2022
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