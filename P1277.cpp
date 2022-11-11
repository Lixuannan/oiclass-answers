//Created in Fri Nov 11 16:39:58 2022
 //System: Darwin 22.1.0
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