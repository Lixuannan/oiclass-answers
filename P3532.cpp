// Created in Sat Nov 12 16:27:45 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	int h,m,s,si;
	cin>>si;
	h = (si - si % 3600) / 3600;
	m = ((si - h * 3600) - (si - h * 3600) % 60) / 60;
	s = si - h * 3600 - m * 60;
	cout<<h<<':'<<m<<':'<<s;
}