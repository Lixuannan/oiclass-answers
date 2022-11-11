//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
#include<sstream>
using namespace std;
string in;
int root(string str){
	int p = 0, sum = 0;
	string arg;
	while (p < str.length()){
		sum += str[p++] - '0';
	}
	if (sum / 10 == 0){
		return sum;
	}
	stringstream ss;
	ss.clear();
	ss << sum;
	ss >> arg;
	return root(arg);
}
int main(){
	cin >> in;
	while(in != "0"){
		cout << root(in) << endl;
		cin >>in; 
	}
}