//Created in Fri Nov 11 14:56:42 2022
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