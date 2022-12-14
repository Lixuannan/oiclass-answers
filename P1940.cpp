// Created in Sat Nov 12 16:27:30 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
bool p;
string str;
struct treasure{
	double x, y;
	string name;
	bool isTreasure(){
		if (name.find(str) != name.npos){
			return true;
		}
		return false;
	}
	double distance(){
		return sqrt(sqrt(x) + sqrt(y));
	}
} a[99999];
bool cmp(treasure a, treasure b){
	return a.distance() < b.distance();
}
int main(){
	cin >> str >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].x >> a[i].y >> a[i].name;
		if (a[i].isTreasure()){
			p = true;
		}
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; i <= n; i++){
		if (!p){
			cout << -1 << " " << -1;
			return 0;
		}else if (a[i].isTreasure()){
			cout << a[i].x << " " << a[i].y << "\n";
		}
	}
}