//Created in Sat Nov 12 11:58:54 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<stack>
#include<iomanip>
using namespace std;
int co, vo, n, v, c;
char ch;
stack<int> weight;
stack<double> cSta;
int main(){
	cin >> vo >> co >> n;
	cSta.push(double(co));
	weight.push(vo);
	for (int i=1; i <= n; i++){
		cin >> ch;
		if (ch == 'P'){
			cin >> v >> c;
			double tmp = weight.top() * cSta.top() + v * c;
			tmp /= weight.top() + v;
			cSta.push(tmp); 
			weight.push(weight.top() + v);
		}else if (ch == 'Z'){
			if (cSta.size() > 1){
				cSta.pop();
			}
			if (weight.size() > 1){
				weight.pop();
			}
		}
		cout << weight.top() << " ";
		cout << setprecision(5) << fixed << cSta.top() << endl;
	}
}