//Created in Sat Nov 12 08:44:34 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, s;
void f(int n,char a,char b,char c){
	if (n == 1){
		s += 1;
		cout << s << " " << a << "->" << c << endl;
		return;
	}
	f(n - 1, a, c, b);
	s += 1;
	cout << s << " " << a << "->" << c << endl;
	f(n - 1, b, a, c);
}
int main(){
	cin >> n;
	f(n, 'A', 'B', 'C');
}