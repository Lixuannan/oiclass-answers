//Created in Sat Nov 12 11:59:04 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int red, idx, in, ans;
int main()
{
    cin>>red;
    for (int i=2; i <= 7; i++){
    	cin >> in;
    	if (in > 0){
    		idx = i;
		}
		ans += in * i;
	}
	ans += red * idx + red;
	cout << ans;
}