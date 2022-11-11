//Created in Fri Nov 11 15:24:36 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, maxRp;
string in, ansName;
int rpcow(string str){
	int rp = 0;
	if (str.find("reioxzsj") != str.npos){
		int ind = str.find("woc");
		while (ind != str.npos){
			str.replace(ind, 3, "drib");
			ind = str.find("woc", ind);
		}
		for (int i=0; i < str.length(); i++){
			if (str[i] == 'r' || str[i] == 'p'){
				rp += 5;
				if (str[i] == 'r' && str[i - 1] == 'p'){
					rp += 20;
				}
			}
		}
	}
	return rp;
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (rpcow(in) > maxRp){
			maxRp = rpcow(in);
			ansName = in;
		}else if (rpcow(in) == maxRp && in.length() < ansName.length()){
			ansName = in;
		}
	}
	cout << ansName << endl;
	cout << maxRp << endl;
}