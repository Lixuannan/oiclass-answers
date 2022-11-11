//Created in Fri Nov 11 15:12:39 2022
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