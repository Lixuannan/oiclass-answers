//Created in Sat Nov 12 09:25:30 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;int n;string str;string tree(string s){string ans;if(s.length()<=1){if(s.find('0')!=s.npos&&s.find('1')!=s.npos){ans+='F';}else if(s.find('0')!=s.npos){ans+='B';}else if(s.find('1')!=s.npos){ans+='I';}}else{ans+=tree(s.substr(0,s.length()/2));ans+=tree(s.substr(s.length()/2,s.npos));if(s.find('0')!=s.npos&&s.find('1')!=s.npos){ans+='F';}else if(s.find('0')!=s.npos){ans+='B';}else if(s.find('1')!=s.npos){ans+='I';}}return ans;}int main(){cin>>n>>str;cout<<tree(str);}