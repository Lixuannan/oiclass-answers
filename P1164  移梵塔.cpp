//Created in Fri Nov 11 14:30:56 2022
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