//Created in Fri Nov 11 15:12:28 2022
#include<iostream>

using namespace std;

int main(){
    const int tPerRange = 300 / (6 - 4);
    int range, tAnswer;
    cin>>range;
    tAnswer = tPerRange * range;
    cout<<tAnswer<<"\n";
}