//Created in Fri Nov 11 11:49:38 2022
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