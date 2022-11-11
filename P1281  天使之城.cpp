//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int> tmp;
vector<int> v;
int n, num = 1;
string in;
int main(){
	cin >> n >> in;
	for (char i: in){
		if (i == 'A'){
			v.push_back(num++);
		}else if (i == 'B'){
			if (tmp.size() >= 5){
				cout << "No";
				return 0;
			}
			tmp.push(num++);
		}else if (i == 'C'){
			if (tmp.empty()){
				cout << "No";
				return 0;
			}
			v.push_back(tmp.top());
			tmp.pop();
		}
	}
	cout << "Yes" << endl;
	for (int i=0; i <= v.size() - 1; i++){
		cout << v[i] << endl;
	}
}