//Created in Wed Nov  9 16:21:56 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct king{
	string name, num;
} a[2002];

bool cmp(king a, king b){
	if (a.num.length() != b.num.length()){
		return a.num.length() > b.num.length();
	}
	for (int i=0; i <= a.num.length() - 1; i++){
		if (a.num[i] > b.num[i]){
			return true;
		}else if(a.num[i] < b.num[i]){
			return false;
		}
	}
	return a.name < b.name;
}

int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].name >> a[i].num;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; i <= n; i++){
		cout << a[i].name << endl;
	}
}