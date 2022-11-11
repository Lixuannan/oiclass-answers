//Created in Fri Nov 11 15:02:34 2022
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