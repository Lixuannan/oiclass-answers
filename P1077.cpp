//Created in Fri Nov 11 16:04:12 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int cnt, ind, strLen, striInd, striLen;
string str, stri;

int main(){
	cin >> str;
	getline(cin, stri);
	getline(cin, stri);
	striLen = stri.length();
	strLen = str.length();
	for (int i=0; i <= strLen-1; i++){
		str[i] = tolower(str[i]);
	}
	for (int i=0; i <= striLen-1; i++){
		stri[i] = tolower(stri[i]);
	}
	stri = ' ' + stri + ' ';
	str = ' ' + str + ' ';
	striInd = stri.find(str);
	if (striInd != stri.npos){
		ind = striInd;
	}else{
		cout << -1 << endl;
		return 0;
	}
	while(striInd != stri.npos){
		cnt += 1;
		striInd = stri.find(str, striInd + 1);
	}
	cout << cnt << " " << ind;
}