// Created in Sat Nov 12 16:27:21 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<queue>
using namespace std;
long long n;
char ch;
queue<long long> q;
int main(){
	while (cin >> ch){
		if (ch == 'O'){
			if (q.empty()){
				cout << "None\n";
			}else{
				cout << q.front() << endl;
				q.pop();
			}
		}
		if (ch == 'I'){
			cin >> n;
			q.push(n);
		}
	}
}