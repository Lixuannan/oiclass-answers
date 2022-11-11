//Created in Fri Nov 11 14:56:11 2022
#include<iostream>
#include<cmath>
using namespace std;
int n,m,sum,num[17];
int main(){
    // 7 9 10 5 8 4 2 1 6 3 7 9 10 5 8 4 2
    num[0] = 7;
    num[1] = 9;
    num[2] = 10;
    num[3] = 5;
    num[4] = 8;
    num[5] = 4;
    num[6] = 2;
    num[7] = 1;
    num[8] = 6;
    num[9] = 3;
    num[10] = 7;
    num[11] = 9;
    num[12] = 10;
    num[13] = 5;
    num[14] = 8;
    num[15] = 4;
    num[16] = 2;
    for (int i=0; i <= 16; i++){
        cin>>n;
        // cout<<n * num[i]<<"\t"<<n<<"\t"<<num[i]<<endl;
        sum += n * num[i];
    }
    // cout<<sum<<endl;
    sum %= 11;
    // 第$4$步：余数只可能有$0、1、2、3、4、5、6、7、8、9、10$这$11$个数字，其分别对应的校验码为$1、0、X\text{(注意是大写)}、9、8、7、6、5、4、3、2$；也就是说如果上面得到的余数为$2$，那校验码就是$X$，如果余数为$10$，那校验码就是$2$。
    switch (sum){
        case 0:{
            cout<<1;
            break;
        }
        case 1:{
            cout<<0;
            break;
        }
        case 2:{
            cout<<"X";
            break;
        }
        case 3:{
            cout<<9;
            break;
        }
        case 4:{
            cout<<8;
            break;
        }
        case 5:{
            cout<<7;
            break;
        }
        case 6:{
            cout<<6;
            break;
        }
        case 7:{
            cout<<5;
            break;
        }
        case 8:{
            cout<<4;
            break;
        }
        case 9:{
            cout<<3;
            break;
        }
        case 10:{
            cout<<2;
            break;
        }
    }
}