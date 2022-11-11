//Created in Fri Nov 11 16:39:52 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<algorithm>
using namespace std;

struct student{
	short c, m, e, n;
	int sum(){
		return c + m + e;
	};
};

bool cmp(student a, student b){
	if (b.sum() < a.sum()){
		return true;
	}else if(b.sum() == a.sum() && b.c < a.c){
		return true;
	}else if (b.sum() == a.sum() && b.c == a.c &&  b.n > a.n){
		return true;
	}else{
		return false;
	}
}

student s[301];
int n, c, m, e;

int main(){
	cin >> n;
	for (int i=0; i < n ; i++){
		cin >> s[i].c >> s[i].m >> s[i].e;
		s[i].n = i + 1;
	}
	sort (s, s + n, cmp);
	for (int i=0; i < 5; i++){
		cout << s[i].n << " " << s[i].sum() << endl;
	}
}