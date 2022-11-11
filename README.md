# All the answer I write from [oiclass](http://oiclass.com)
# [Oiclass](http://oiclass.com)上的所有我写的题解

## [P1056  愧疚指数.cpp](./P1056  愧疚指数.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
using namespace std;
int n, a[121], in[200001], cnt[200001], cntn;
int main(){
	cin >> n;
	for (int i=n; i > 0; i--){
		cin >> in[i];
	}
	for (int i=1; i <= n; i++){
		for (int j=in[i] - 1; j > 0; j--){
			cntn += a[j];
		}
		a[in[i]] += 1;
		cnt[i] = cntn;
		cntn = 0;
	}
	for (int i=n; i > 0; i--){
		cout << cnt[i] << " ";
	}
}
```

## [P1045  小矮人.cpp](./P1045  小矮人.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout<<1+2+3+4+5+6+7-a-b-c-d-e-f;
}
```

## [P1860  母牛生小牛.cpp](./P1860  母牛生小牛.cpp):
```cpp
//Created in Fri Nov 11 13:59:41 2022
#include "iostream"

using namespace std;
int n, a[4], t;
int main(){
    cin >> n;
    a[0] = 1;
    for (int i=1; i < n; i++){
        a[3] += a[2];
        a[2] = a[1];
        a[1] = a[0];
        a[0] = a[3];
    }
    cout << a[3] + a[2] + a[1] + a[0];
}
```

## [P1058  排名.cpp](./P1058  排名.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
using namespace std;
int n, k, cnt, a[999999];
int main(){
	cin >> n >> k;
	for(int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n; i++){
		if (a[i] > a[k] && i != k){
			cnt += 1;
		}
	}
	cout << cnt;
}
```

## [P1602  小鱼的游泳时间.cpp](./P1602  小鱼的游泳时间.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
using namespace std;
int t,a,b,c,d,e,f;
int main(){
	cin>>a>>b>>c>>d;
	t = (c * 60 + d) - (a * 60 + b);
	e = t / 60;
	f = t - e * 60;
	cout<<e<<" "<<f;
}
```

## [P2221  三角形.cpp](./P2221  三角形.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include "iostream"
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b >> c;
    if (a + b <= c){
        cout << "no" << endl;
        return 0;
    }else if (a + c <= b){
        cout << "no" << endl;
        return 0;
    }else if (b + c <= a){
        cout << "no" << endl;
        return 0;
    }
    cout << "yes" << endl;
}
```

## [P3619  跑步.cpp](./P3619  跑步.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include "iostream"

using namespace std;
int m, t, u, f, d, in, sum, cnt;

int main() {
    cin >> m >> t >> u >> f >> d;
    for (int i = 1; i <= t; i++) {
        cin >> in;
        if (in == 1 && sum + u <= m) {
            sum += u;
            cnt += 1;
        } else if (in == 2 && sum + f <= m) {
            sum += f;
            cnt += 1;
        } else if (in == 3 && sum + d <= m) {
            sum += d;
            cnt += 1;
        } else{
            cout << cnt << endl;
            return 0;
        }
    }
}
```

## [P3703  备战奥运.cpp](./P3703  备战奥运.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"
using namespace std;
int n,xin,score;
int main(){
    cin >> n;
    for (int i=1; i <= n; i ++){
        cin >> xin;
        score += xin;
    }
    score /= n;
    score += 23;
    score %= 10;
    cout << score;
}
```

## [P3761  魔术卡片.cpp](./P3761  魔术卡片.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"

using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 >= a2 && b1 >= b2 || a1 >= b2 && b1 >= a2) cout << 1;
    else cout << 2;
}
```

## [P3763  出发能量.cpp](./P3763  出发能量.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include "iostream"
using namespace std;
int n, sum, in, min_;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        sum += in;
        if (min_ > sum){
            min_ = sum;
        }
    }
    cout << 0 - min_;
}
```

## [P2752  找第一个只出现一次的字符.cpp](./P2752  找第一个只出现一次的字符.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include "iostream"

using namespace std;
int minp = 9999, a[123];
string in;
int main(){
    cin >> in;
    for (int i: in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] == 1 && in.find(i) < minp){
            minp = in.find(i);
        }
    }
    if (in[minp] == 0) cout << "no";
    else cout << in[minp];
}
```

## [P3570  点点点.cpp](./P3570  点点点.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
using namespace std;
int n, a, b, xmax, xmin = 99999, ymax, ymin = 99999;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a >> b;
		if (a > xmax){
			xmax = a;
		}
		if (b > ymax){
			ymax = b;
		}
		if (b < ymin){
			ymin = b;
		}
		if (a < xmin){
			xmin = a;
		}
	}
	cout << max(xmax - xmin, ymax - ymin) * max(xmax - xmin, ymax - ymin);
}
```

## [P2218  金字塔.cpp](./P2218  金字塔.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
        for (int j = (n - i); j > 0; j--){
            cout<<" ";
        }
        for (int j=1; j < i; j++){
            cout<<j%10;
        }
        cout<<i%10;
        for (int j=i-1; j > 0; j--){
            cout<<j%10;
        }
        cout<<"\n";
    }
}
```

## [P1024  统计数字.cpp](./P1024  统计数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int sum, sum2;
int in, num, num2;
int main(){
	cin>>in;
	for (int i=in; i>0; i--){
		cin>>in;
		if (in>=0){
			num += 1;
			sum += in;
		}else{
			num2 += 1;
			sum2 += in;
		}
	}
	cout<<num<<" "<<sum<<endl;
	cout<<num2<<" "<<sum2<<endl;
}
```

## [P1900  津津的储蓄计划.cpp](./P1900  津津的储蓄计划.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include<iostream>
using namespace std;
int in, n, r;
int  main(){
	for (int i=1; i <= 12; i++){
		cin>>in;
		n += 300 - in;
		if (n < 0){
			cout<<-i;
			return 0;
		}
		r += n / 100;
		n -= n / 100 * 100;
	}
	cout<<r * 120 + n;
}
```

## [P3093  小新的楼梯.cpp](./P3093  小新的楼梯.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>

using namespace std;
int n, m;

int main() {
    cin >> n >> m;
    cout << m << endl;
    for (int i = 1; i < n; i++) cout << " ";
    cout << "X\n";
    n += 1;
    for (int i = m; i > 0; i--) {
        for (int j = 1; j < n - (n - i); j++) cout << " ";
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
```

## [P1022  表达式求值.cpp](./P1022  表达式求值.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int main(){
	int n;
	double ans=0;
	cin>>n;
	for (double i=2; i<=n; i+=2){
		ans += 1/(i-1) - 1/i;
	}
	printf("%.8lf", ans);
}
```

## [P1037  数字反转.cpp](./P1037  数字反转.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n;
int cnt;
int main(){
	cin>>n;
	if (n <= 0){
		cout<<"-";
		n = abs(n);
	}
	n *= 10;
	while(n > 1.0000000001){
		if (cnt == 0 || n / 10 <= 0){
			if (n / 10 % 10 != 0){
				cout<<n / 10 % 10;
				n /= 10;
				cnt++;
			}else{
				n /= 10;
				continue;
			}
		}else{
			cout<<n / 10 % 10;
			n /= 10;
			cnt++;
		}
		
	}
	return 0;
}
```

## [P3691  HIMの游戏.cpp](./P3691  HIMの游戏.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include "iostream"
#include "cstring"

using namespace std;
int n, m, in1, in2;
int main(){
    cin >> n >> m;
    int a[n + 1];
    for (int i=1; i <= n; i++){
        a[i] = m;
        cin >> in1 >> in2;
        a[i] += in1;
        a[i] -= in2;
    }
    for (int i=1; i <= n; i++){
        cout << a[i] << endl;
    }
}
```

## [P1631  直角三角形.cpp](./P1631  直角三角形.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
#include<cmath>
using namespace std;
int n,k;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		for(int t=i; t <= i*2-1; t++){
			k = t;
			if (k >= 10){
				cout<<(k-10) % 10;
				continue;
			}
			cout<<k;
		}
		for(int j=i*2-1; j > i; j--){
			k = j;
			// cout<<k<<endl;
			if (k >= 11){
				cout<<(abs(k-11)) % 10;
				continue;
			}
			cout<<(k-1)  % 10;
		}
		cout<<endl;
	}
}
```

## [P1059  单纯质因数.cpp](./P1059  单纯质因数.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n;

bool isNotPrime(int n){
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return true;
		}
	}
	return false;
}

bool hasPureFactor(int n){
	bool p[n + 1];
	memset(p, false, sizeof p);
	if (sqrt(n) == ceilf(sqrt(n))){
		return false;
	}
	while (n > 1.0000){
		for (int i=2; i <= n; i++){
			if (n % i == 0){
				// cout << i << endl;
				if (p[i]){
					return false;
				}else{
					n /= i;
					p[i] = true;
					break;
				}
			}
		}
	}
	return true;
}

int main(){
	scanf("%d", &n);
	for (int i=6; i <= n; i++){
		if (isNotPrime(i)){
			if (hasPureFactor(i)){
				printf("%d ", i);
			}
		}
	}
}
```

## [P1279  计算后缀表达式的值.cpp](./P1279  计算后缀表达式的值.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<stack>
using namespace std;
string str;
int x, y, n;
stack<int> s;
int main(){
	cin >> str;
	for (char in: str){
		if (in >= '0' && in <= '9'){
			n = n * 10 + (in - '0');
		}else if (in == '.'){
			s.push(n);
			n = 0;
		}else if (in == '+' || in == '-' || in == '*'){
			x = s.top();
			s.pop();
			y = s.top();
			s.pop();
			if (in == '+'){
				s.push(x + y);
			}else if (in == '-'){
				s.push(y - x);
			}else if (in == '*'){
				s.push(x * y);
			}
		}
	}
	cout << s.top();
}
```

## [P3941  恰饭 .cpp](./P3941  恰饭 .cpp):
```cpp
//Created in Fri Nov 11 14:00:00 2022
#include<iostream>
using namespace std;
int in, minA = 999999, minB = 999999;
int main(){
	for (int i=1; i <= 4; i++){
		cin >> in;
		minA = min(in, minA);
	}
	for (int i=1; i <= 3; i++){
		cin >> in;
		minB = min(in, minB);
	}
	cout << minA + minB;
}
```

## [P1157  青蛙跳荷叶.cpp](./P1157  青蛙跳荷叶.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
int n;
int main(){
	cin >> n;
	for(int i=1; i <= n / 2; i++){
		cout << i << " " << n - i + 1 << " ";
	}
	if(n & 1){
		cout<< n / 2 + 1;
	}
}
```

## [P1047  冬眠.cpp](./P1047  冬眠.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
using namespace std;
long long d,sum;
int n,cnt,i;
int main(){
	cin>>d>>n;
    short a[n];
	for (int i=0; i < n; i++){
		cin>>a[i];
		sum += a[i];
	}
	cnt += d / sum * n;
	d %= sum;
	while(d > 0){
		cnt ++;
		d -= a[i % n];
		i++;
	}
	cout<<cnt;
}
```

## [P3715  小 V 去面试.cpp](./P3715  小 V 去面试.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"
#include "cmath"

using namespace std;
double n, money;

int main() {
    cin >> n;
    n = ceilf(n);
    if (n >= 3) {
        money += 10;
        if (n - 3 > 4) {
            money += 4 * 1.5;
            if (n >= 7) {
                money += (n - 7) * 2.4;
            }
        } else {
            money += (n - 3) * 1.5;
        }
    } else {
        cout << 10;
        return 0;
    }
    cout << money << endl;
}
```

## [P3497  报数.cpp](./P3497  报数.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include "iostream"

using namespace std;
int n, a = 1, b = 1, c = 1;

int main() {
    cin >> n;
    for (int i = 1; i < n - 1; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
}
```

## [P1026  摘李子.cpp](./P1026  摘李子.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
#include<cmath>
using namespace std;
long long a[100854],n,m;
int main(){
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long k=floor((double)sum/(double)n);
	long long g=sum-k*n;
	if(g<k){
		k--;
		g+=n;
	}
	cout<<k<<endl<<g;
	return 0;
}
```

## [P3582  求和.cpp](./P3582  求和.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
using namespace std;
int n,x,y,in,sum,max_=-999999,min_=999999;
int main(){
	cin>>x>>y>>n;
	int a[n];
	for (int i=0; i < n; i++){
		cin>>in;
		if (in < x || in > y) a[i] = 0;
		else {
			sum += in;
			a[i] = in;
		}
	}
	for (int i=0; i < n; i++){
		if (a[i] > max_ && a[i] != 0) max_ = a[i];
		if (a[i] < min_ && a[i] != 0) min_ = a[i];
		// cout<<sum<<"\t"<<max_<<"\t"<<min_<<endl;
	}
	for (int i=0; i < n; i++){
		if (a[i] == max_) sum -= a[i];
		else if (a[i] == min_) sum -= a[i];
	}
	// cout<<sum<<"\t"<<max_<<"\t"<<min_<<endl;
	cout<<sum<<endl;
}
```

## [P1277  银行取款.cpp](./P1277  银行取款.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<queue>
using namespace std;
long long n;
char ch;
queue<long long> q;
int main(){
	while (cin >> ch){
		if (ch == 'O'){
			if (q.empty()){
				cout << "None\n";
			}else{
				cout << q.front() << endl;
				q.pop();
			}
		}
		if (ch == 'I'){
			cin >> n;
			q.push(n);
		}
	}
}
```

## [P1954  高低位交换.cpp](./P1954  高低位交换.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include<iostream>
using namespace std;
unsigned int n, x, y;
int main(){
	cin >> n;
	x = n << 16;
	y = n >> 16;
	n = x + y;
	cout << n;
}
```

## [P1012  弗洛格.cpp](./P1012  弗洛格.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n > 27){
		cout<<30 - (n - 27)%30;
	}
	else{
		if (n == 27){
			cout<<1;
		}
		else{
			cout<<27 - n;
		}
	}
}
```

## [P3518  1+1=?.cpp](./P3518  1+1=?.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include "iostream"

using namespace std;
char n;
int a, b;
int main(){
    cin >> a >> n >> b;
    if (n == '-'){
        cout << a - b;
    }else if (n == '+'){
        cout << a + b;
    }
}
```

## [P3776  传染病.cpp](./P3776  传染病.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include "iostream"
using namespace std;
int n, sum = 1, cnt = 1;
int main(){
    cin >> n;
    while (sum <= n){
        sum *= 3;
        cnt += 1;
    }
    cout << cnt << endl;
}
```

## [P3504  数一数.cpp](./P3504  数一数.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include "iostream"

using namespace std;
int x, y, p;

int main() {
    cin >> x >> y;
    if (x % 2 == 1) {
        p += 1;
        x += 1;
    }
    if (y % 2 == 0) {
        p += 1;
        y -= 1;
    }
    p += (y - x + 1) / 2;
    cout << p << endl;
}
```

## [P1092  斜二进制数.cpp](./P1092  斜二进制数.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
#include<cmath>
using namespace std;
short cnt = 1;
long long ans;
string in;
int main(){
	cin >> in;
	while (in.length() > 0){
		ans += (in[in.length() - 1] - '0') * (pow(2, cnt) - 1);
		cnt += 1;
		in.erase(in.length()-1, 1);
	}
	if (ans > 2147483647 || ans <= 0){
		cout << "too long!";
	}else{
		cout << ans;
	}
}
```

## [P2466  ls采蘑菇：品质.cpp](./P2466  ls采蘑菇：品质.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include<iostream>
using namespace std;
int n, in, len;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (i == in){
			len += in;
		}
	}
	cout << len - 99;
}
```

## [P3755  吃西瓜.cpp](./P3755  吃西瓜.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"

using namespace std;
int w;
bool p;

int main() {
    cin >> w;
    if ((w != 2 )&& (w % 2 == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
```

## [P2204  家的范围.cpp](./P2204  家的范围.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
using namespace std;
int n, a[9999][9999], s[9999][9999], cnt[252];
char ch;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> ch;
			a[i][j] = ch - '0';
			s[i][j] = s[i - 1][j] + s[i][j - 1]
			- s[i - 1][j - 1] + a[i][j];
		}
	}
	for (int k=2; k <= n; k++){
		for (int i=1; i <= n - k + 1; i++){
			for (int j=1; j <= n - k + 1; j++){
//				cout << k << " " << i << " " << j;
				int ii = i + k - 1, jj = j + k - 1;
				if (k * k ==
				s[ii][jj] - s[i - 1][jj]
				- s[ii][j - 1] + s[i - 1][j - 1]){
					cnt[k] += 1;
//					cout << "  YES" << endl;
//					continue;
				}
//				cout << "  NO" << endl;
			}
		}
	}
	for (int i=2; i <= n; i++){
		if (cnt[i]){
			cout << i << " " << cnt[i] << endl;
		}
	}
}
```

## [P1008  小米.cpp](./P1008  小米.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>
using namespace std;
int main(){
	int father, mother, n;
	cin>>father>>mother>>n;
	if (n == 0){
		int a = (father + mother -13);
		if (a % 2 == 1){
			cout<<(a - 1) / 2;
		}
		else{
			cout<<a / 2;
		}
	}
	else{
		int a = (father + mother +13);
		if (a % 2 == 1){
			cout<<(a - 1) / 2;
		}
		else{
			cout<<a / 2;
		}
	}
}
```

## [P1561  最小公倍数.cpp](./P1561  最小公倍数.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include<iostream>
using namespace std;
long long a, b;
int main(){
	cin>>a>>b;
	for (int i=1; i <= min(a, b); i++){
		if (i * max(a,b) % min(a,b) == 0){
			cout<<i * max(a,b);
			return 0;
		}
	}
}
```

## [P1112  Fads.cpp](./P1112  Fads.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
#include<algorithm>
using namespace std;
long long a[100001];
int main(){
	long long n,i,l,k,cnt=0;
	cin>>n>>l>>k;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++){
		if(l>=a[i]){
			cnt++;
			l+=k;
		}else{
			break;
		}
	}
	cout<<cnt;
}
```

## [P1150  Fibonacci数列.cpp](./P1150  Fibonacci数列.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
#include<cstring>
#define sz 3
#define MOD 12
#define LL long long
using namespace std;
struct mat {
	long long a[sz][sz];

	inline mat() {
		memset(a, 0, sizeof a);
	}
	inline mat operator*(const mat& T) const {
		mat res;
		int r;
		for (int i = 0; i < sz; ++i)
			for (int k = 0; k < sz; ++k) {
				r = a[i][k];
				for (int j = 0; j < sz; ++j)
					res.a[i][j] += T.a[k][j] * r, res.a[i][j] %= MOD;
			}
		return res;
	}
};

mat qpow(mat n, int m) {
	mat ret = n;
	while (m > 0){
		if (m & 1){
			ret = ret * n;
		}
		n = n * n;
		m >>= 1;
	}
	return ret;
}

int n, in;
mat origin;
int main() {
	origin.a[1][1] = origin.a[1][2] = origin.a[2][1] = 1;
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in == 0){
			cout << 0 << endl;
			continue;
		}
		cout << qpow(origin, in - 1).a[1][2] << endl;
	}
}
```

## [P3458  高斯求和.cpp](./P3458  高斯求和.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include<iostream>
using namespace std;
long long x;
int main(){
	cin>>x;
	cout<<(1 + x) * x / 2;
}
```

## [P3628  判奇偶求和.cpp](./P3628  判奇偶求和.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include<iostream>
using namespace std;
int n,ans;
int main(){
	cin>>n;
	if (n % 2 == 0){
		for (int i=1; i <= n; i++){
			if (n % i == 0) ans += i;
		}
	}else{
		n -= 1;
		for (int i=2; i <= n; i+=2){
			ans += i;
		}
	}
	cout<<ans<<endl;
}
```

## [P1118  身份证.cpp](./P1118  身份证.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
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
```

## [P1997  心系南方灾区.cpp](./P1997  心系南方灾区.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include "iostream"

using namespace std;
int n, m;

int main() {
    cin >> m >> n;
    if (m % n == 0) {
        cout << m / n << endl;
    } else {
        cout << m / n + 1 << endl;
    }
}
```

## [P1039  分数的和.cpp](./P1039  分数的和.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
using namespace std;
int a, b, c, d, e, f;
int gbs, gys;
bool p;
int main(){
	cin>>a>>b>>c>>d;
	for (int i=min(d,b); i <= min(d, b); i++){
		if (i * max(d,b) % min(d,b) == 0){
			gbs = i * max(d,b);
		}
	}
	a *= gbs / b;
	c *= gbs / d;
	e = a + c;
	f = gbs;
	a,b,c,d,gbs = 0;
	for (int i=2; i <= min(e,f); i++){
		if (e % i == 0 && f % i == 0){
			gys = i;
			p = true;
		}else{
			continue;
		}
	}
	if (!p) cout<<e<<" "<<f;
	else cout<<e/gys<<" "<<f/gys;
}
```

## [P3767  分数减法.cpp](./P3767  分数减法.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include<iostream>
using namespace std;
int a, b, c, d, e, f;
int gbs, gys;
bool p;
int main(){
    cin>>a>>b>>c>>d;
    for (int i=min(d,b); i <= min(d, b); i++){
        if (i * max(d,b) % min(d,b) == 0){
            gbs = i * max(d,b);
        }
    }
    a *= gbs / b;
    c *= gbs / d;
    e = a - c;
    f = gbs;
    for (int i=2; i <= min(e,f); i++){
        if (e % i == 0 && f % i == 0){
            gys = i;
            p = true;
        }else{
            continue;
        }
    }
    if (!p) cout<<e<<" "<<f;
    else cout<<e/gys<<" "<<f/gys;
}
```

## [P1078  译码程序.cpp](./P1078  译码程序.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
using namespace std;
char str[257];
int main(){
	cin.getline(str, 255, '.');
	for (int i=0; i <= sizeof str - 1; i++){
		if (str[i] == ' '){
			cout << '#';
		}else if (str[i] >= 'a' && str[i] <= 'z'){
			cout << int(str[i]) - 96;
		}
	}
}
```

## [P1849  牛的RP.cpp](./P1849  牛的RP.cpp):
```cpp
//Created in Fri Nov 11 13:59:41 2022
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
```

## [P1596  网购.cpp](./P1596  网购.cpp):
```cpp
//Created in Fri Nov 11 13:59:35 2022
#include<iostream>
using namespace std;
int x,y,n,price,ans;
int main(){
	cin>>x>>y>>n;
	for (int i=1; i <= n; i++){
		cin>>price;
		if (price >= x && price <= y) ans += 1;
	}
	cout<<ans;
}
```

## [P1063  数字方阵.cpp](./P1063  数字方阵.cpp):
```cpp
//Created in Fri Nov 11 13:59:26 2022
#include<iostream>
using namespace std;
int n, m, k, cnt, maxn;
short a[2000][2000];
int main(){
	cin >> n >> m >> k;
	for (int i=1; i <= n ; i++){
		for (int j=1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= m; i++){
		// cout <<a[k][i] << "\t" << maxn << "\t" << cnt << endl;
		if (a[k][i] != 0){
			cnt += 1;
			if (cnt >= maxn){
				maxn = cnt;
			}
		}else{
			if (cnt >= maxn){
				maxn = cnt;
			}
			cnt = 0;
			// cout << a[k][i] << " " << maxn << endl;
			continue;
		}
	}
	cout << maxn;
}
```

## [P1708  小青蛙爬井.cpp](./P1708  小青蛙爬井.cpp):
```cpp
//Created in Fri Nov 11 13:59:38 2022
#include<iostream>
using namespace std;
int a,b,h,t,p;
int main(){
	cin>>a>>b>>h;
	while(p<h){
		p += a;
		if (p >= h){
			t++;
			break;
		}
		p -= b;
		t++;
	}
	cout<<t<<endl;
}
```

## [P1603  K 好数.cpp](./P1603  K 好数.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
#include<cmath>
using namespace std;
int n, k, cnt, s;
bool p = true;
int main(){
    cin>>n>>k;
    for (int i=1; i <= n; i++){
        s = i;
        for (int a=0; a <= 6; a++){
            int wei = s / (long long)pow(10,a) % 10;
            if (wei > k){
                p=false;
            }else{
                continue;
            }
        }
        if (p) cnt++;
        p = true;
    }
    cout<<cnt;
}
```

## [P1073  漏洞和补丁.cpp](./P1073  漏洞和补丁.cpp):
```cpp
//Created in Fri Nov 11 13:59:27 2022
#include <iostream>
#include <algorithm>
using namespace std;
bool p[102];
int n, m, cnt;
string bug[102], fix[102];
int main(){
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        cin >> bug[i];
        transform(bug[i].begin(), bug[i].end(), bug[i].begin(), ::tolower);
    }
    for (int i=1; i <= m; i++){
        cin >> fix[i];
        transform(fix[i].begin(), fix[i].end(), fix[i].begin(), ::tolower);
    }
    for (int i=1; i <= m; i++){
        for (int j=1; j <= n; j++){
            if (bug[j].find(fix[i]) != string::npos
            || fix[i].find(bug[j]) != string::npos){
                p[j] = true;
            }
        }
    }
    for (int i=0; i <= 101; i++){
        if (p[i]){
            cnt += 1;
        }
    }
    cout << cnt;
}
```

## [P2251  汉诺4塔.cpp](./P2251  汉诺4塔.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
#define ll long long
using namespace std;
ll n, hanoi3[9999], hanoi4[9999];
ll hanoi(int n){
	if (n == 1){
		return 1;
	}
	if (hanoi4[n]){
		return hanoi4[n];
	}
	hanoi4[n] = hanoi3[n];
	for (int i=1; i < n; i++){
		hanoi4[n] = min(hanoi4[n], 2 * hanoi(i) + hanoi3[n - i]);
	}
	return hanoi4[n];
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		hanoi3[i] = 2 * hanoi3[i - 1] + 1;
	}
	cout << hanoi(n);
}
```

## [P3609  点球大战.cpp](./P3609  点球大战.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include<iostream>
using namespace std;
long long a,b;
int main(){
	cin>>a>>b;
	if (a == b){
		cout<<"No"<<endl;
		return 0;
	}
	if (b > a) swap(a,b);
    if(a<=5){
        if((a-b)-(5-a)>2)cout<<"No";
        else cout<<"Yes";
    }else{
        if(a==b+1)cout<<"Yes";
        else cout<<"No";
    }
}
```

## [P2220  Chen.Jr与卡片.cpp](./P2220  Chen.Jr与卡片.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
using namespace std;
int n, n0, n5;
char in;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in == '5'){
			n5 += 1;
		}else if (in == '0'){
			n0 += 1;
		}
	}
	if (n0 == 0){
		cout << -1;
		return 0;
	}
	if (n5 >= 9){
		for (int i=1; i <= n5 / 9 * 9; i++){
			cout << 5;
		}
		for (int i=1; i <= n0; i++){
			cout << 0;
		}
		return 0;
	}
	cout << 0;
}
```

## [P3584  可怜的小明.cpp](./P3584  可怜的小明.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include<iostream>
using namespace std;
unsigned long long n, p, ans = 0, jc = 1;
int main(){
	scanf("%lld %lld", &n, &p);
	if (n > p){
		n = p;
	}
	for (int i=1; i <= n; i++){
		jc *= i;
		jc %= p;
		ans += jc;
		ans %= p;
	}
	printf("%lld", ans);
}
```

## [P3783  WPS地址.cpp](./P3783  WPS地址.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include<iostream>
#define ll long long
using namespace std;
string turn(ll n){
	string str;
	while (n > 0){
		if (n % 26 == 0){
			str = 'Z' + str;
			n -= 1;
		}else {
			str = char ((n % 26) - 1 + 'A') + str;
		}
		n /= 26;
	}
	return str;
}
ll n;
int main(){
	cin >> n;
	cout << turn(n);
}
```

## [P1848  牛棚回声.cpp](./P1848  牛棚回声.cpp):
```cpp
//Created in Fri Nov 11 13:59:41 2022
#include<iostream>
using namespace std;
int ans;
string str, stri;
int main(){
	cin >> str >> stri;
	if (str.length() > stri.length()){
		ans = stri.length() - 1;
	}else{
		ans = str.length() - 1;
	}
	while(str.substr(0, ans) != stri.substr(stri.length() - ans, ans) 
	&& stri.substr(0, ans) != str.substr(str.length() - ans, ans)){
		ans -= 1;
	}
	cout << ans ;
}
```

## [P1144  混合奶牛.cpp](./P1144  混合奶牛.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include <iostream>
#include <algorithm>
using namespace std;
long long n, m, p, ans;
struct cow{
	long long price, a;
} a[2000001];
bool cmp(cow a, cow b){
	return a.price < b.price;
}
int main(){
	cin >> m >> n;
	if (m == 0 && n == 0){
		return 0;
	}
	for (int i=1; i <= n; i++){
		cin >> a[i].price >> a[i].a;
	}
	sort(a + 1, a + n + 1, cmp);
//	cout << "--------------\n";
//	for (int i=1; i <= n; i++){
//		cout << a[i].price << " " << a[i].a << endl;
//	}
//	cout << "--------------\n";
	int p = 1;
	while (m > 0){
		 if (a[p].a <= m){
		 	ans += a[p].price * a[p].a;
		 	m -= a[p].a;
		 }else {
		 	ans += a[p].price * m;
		 	m = 0;
		 }
		 p++;
	}
	cout << ans;
}
```

## [P3759  折纸.cpp](./P3759  折纸.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include<iostream>
using namespace std;
long long cnt, a, b;
int main(){
	cin >> a >> b;
	while (a != 0 && b != 0){
		if (a > b){
			cnt += a / b;
			a %= b;
		}else if (a < b){
			cnt += b / a;
			b %= a;
		}
	}
	cout << cnt;
}
```

## [P3543  购物优惠.cpp](./P3543  购物优惠.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
using namespace std;
int n=0,in=0;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>in;
		if (in > 0 && in < 50) cout<<in<<endl;
		else if (in >= 50 && in < 100) cout<<in-10<<endl;
		else if (in >= 100 && in < 200) cout<<in - 20<<endl;
		else if (in >= 200) cout<<in-40<<endl;
	}
}
```

## [P2271  括号匹配.cpp](./P2271  括号匹配.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
#include<stack>
using namespace std;
stack<char> list;
char in;
int ans;
int main(){
	while(cin >> in){
		if (in == '('){
			list.push('(');
		}
		if (in == ')'){
			if (list.empty()){
				list.push('(');
				ans += 1;
			}else {
				list.pop();
			}
		}
	}
	if (!list.empty()){
		ans += list.size() / 2;
	}
	cout << ans;
}
```

## [P4056  考试成绩.cpp](./P4056  考试成绩.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include<iostream>
#include<iomanip>
using namespace std;
float n,min_ = 999999999,max_,sun,ave;
int main(){
    for (int i=1; i <= 5; i++){
        cin>>n;
        sun += n;
        ave = sun / i;
        if (n > max_) max_ = n;
        if (n < min_) min_ = n;
    }
    cout<<"MAX:"<<max_<<endl;
    cout<<"MIN:"<<min_<<endl;
    cout<<"SUM:"<<sun<<endl;
    cout<<setprecision(1)<<fixed<<"AVE:"<<ave<<endl;
}
```

## [P2340  数列异或和.cpp](./P2340  数列异或和.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
using namespace std;
unsigned long long n, ans;
int main(){
	cin >> n;
	if (n % 4 == 1){
		ans = 1;
	}else if (n % 4 == 2){
		ans = n + 1;
	}else if (n % 4 == 3){
		ans = 0;
	}else if (n % 4 == 0){
		ans = n;
	}
	cout << ans;
}
```

## [P1108  奖学金.cpp](./P1108  奖学金.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
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
```

## [P3498  圣诞树.cpp](./P3498  圣诞树.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= ((n * 2 - 1) - (i * 2 - 1)) / 2; j++) cout<<" ";
		for (int j=1; j <= (i * 2) - 1; j++) cout<<"*";
		cout<<endl;
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= ((n - 1) * 2 + 1 - 1) / 2; j++) cout<<" ";
		cout<<"*";
		for (int j=1; j <= (n - 1) / 2; j++) cout<<" ";
		cout<<"\n";
	}
}
```

## [P3608  跑步.cpp](./P3608  跑步.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include "iostream"

using namespace std;
int a, b, c;

int main() {
    cin >> a >> b >> c;
    if (c > 0) {
        if (b - a == c) {
            cout << 0;
            return 0;
        } else if (b - a > 0) {
            cout << c / (b - a);
            return 0;
        } else if (b - a < 0) {
            cout << -1;
            return 0;
        } else if (b - a == 0) {
            cout << -1;
            return 0;
        }
    } else {
        cout << 0;
        return 0;
    }
}
```

## [P3881  优秀的拆分.cpp](./P3881  优秀的拆分.cpp):
```cpp
//Created in Fri Nov 11 14:00:00 2022
#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;
string to2(int n){
	string ans;
	while (n > 0){
		ans = char ((n % 2) + '0') + ans;
		n /= 2;
	}
	return ans;
}
int n, p, power = 1, ans[9999999];
string n2;
stringstream ss;
int main(){
	cin >> n;
	if (n % 2 == 1){
		cout << -1;
		return 0;
	}
	n2 = to2(n);
	while(n2.length() > 0){
		if (n2[n2.length() - 1] == '1'){
			ans[++p] = power;
		}
		power *= 2;
		n2.erase(n2.length() - 1, 1);
	}
	for (int i=9999998; i >= 1; i--){
		if (ans[i] != 0){
			cout << ans[i] << " ";
		} 
	}
}
```

## [P1025  网络信号.cpp](./P1025  网络信号.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
#include<cmath>
using namespace std;
int r,n,a[202],p,ans;
using namespace std;
int main(){
	cin>>r>>n;
	for (int i=n; n>0; n--){
		cin>>a[i];
		p+=a[i];
		if (abs(p) <= r){
			ans += 1;
		}
	}
	cout<<ans;
}
```

## [P1148  兔子繁殖.cpp](./P1148  兔子繁殖.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
long long a=1,b=1,c=1,in;
int main(){
	cin>>in;
	for (int i=1; i < in - 1; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}
```

## [P2108  飞驰人生.cpp](./P2108  飞驰人生.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
#include<cmath>
using namespace std;
int n, k, ptr;
bool p[9999999];
int main(){
	cin >> n;
	k = ptr = n;
	p[2] = false;
	p[0] = p[1] = true;
	for (int i=2; i <= ceil(sqrt(2 * n)); i++){
		if (!p[i]){
			for (int j=2; i * j <= 2 * n; j++){
				p[i * j] = true;
			}
		}
	}
	while (p[k]){
		k += 1;
	}
	while (p[ptr]){
		ptr -= 1;
	}
	k -= ptr;
//	for (int i=1; i <= 2 * n; i++){
//		if (!p[i]) cout << i << endl;
//	}
	cout << k;
}
```

## [P5001  愤怒的数学老师.cpp](./P5001  愤怒的数学老师.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include "iostream"
#include "cstring"

using namespace std;
string a, b;

int main() {
    cin >> a >> b;
    cout << max(a, b) << min(a, b);
}
```

## [P2043  羊羊吃草.cpp](./P2043  羊羊吃草.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include<iostream>
using namespace std;
long long n, t, s[9999999], a[9999999], ans[3], maxn;
int main(){
	cin >> n >> t;
	for (int i=1; i <= n; i++){
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	for (int i=1; i <= n - 1; i++){
		for (int j=i + maxn; j <= n; j++){
			// cout << i << " " << j << " " << s[j] << " " << s[i - 1] << " " << s[j] - s[i - 1] << endl;
			if (s[j] - s[i - 1] <= t){
				if (j - i > maxn){
					maxn = j - i;
					ans[1] = i;
					ans[2] = j;
				}
			}else{
				break;
			}
		}
	}
	cout << ans[1] << " " << ans[2];
}
```

## [P1125  抽签.cpp](./P1125  抽签.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include "iostream"
#include "cstring"

using namespace std;
int n, m;
int main(){
    cin >> n >> m;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            for (int t=0; t < n; t++){
                for (int k=0; k < n; k++){
                    if (a[i] + a[j] + a[t] + a[k] == m){
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
}
```

## [P1044  运动会.cpp](./P1044  运动会.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
using namespace std;
int n, in, in2, gcd;

int _gcd(int n, int m){
    int gcd=0;
    for (int i=1; i<=min(n,m); i++){
        if (n % i == 0 && m % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    cin>>n;
    cin>>in;
    for (int i=1; i < n; i++){
        cin>>in2;
        gcd = _gcd(in, in2);
        in = gcd;
    }
    cout<<gcd;
}
```

## [P2177  海港.cpp](./P2177  海港.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
#include<queue>
#define int long long
using namespace std;
struct passenger {
	int t, x;
};
int n, ti, k, cnt;
int country[99999999];
queue<passenger> q;
signed main() {
	cin >> n;
	for (int i=1; i <= n; i++) {
		cin >> ti >> k;
		for (int j=1; j <= k; j++) {
			passenger p;
			p.t = p.x = 0;
			p.t = ti;
			cin >> p.x;
			q.push(p);
//			cout << q.back().x << endl;
			country[q.back().x] += 1;
			if (country[q.back().x] == 1) {
				cnt += 1;
			}
		}
		while (q.back().t - q.front().t >= 86400) {
			if (country[q.front().x] == 1) cnt -= 1;
			country[q.front().x] -= 1;
			q.pop();
		}
		cout << cnt << endl;
	}
}
```

## [P1721  整数处理.cpp](./P1721  整数处理.cpp):
```cpp
//Created in Fri Nov 11 13:59:39 2022
#include<iostream>
using namespace std;
int n;
int cnt;
int main(){
	cin>>n;
	if (n % 10 == 5){
		while(n % 5 == 0){
			cnt++;
			n /= 5;
		}
	}else{
		while(n >= 0.1){
			if (n % 10 == 0){
				cnt ++;
				n /= 10;
			}else{
				n /= 10;
			}
		}
	}
	cout<<cnt<<endl;
}
```

## [P3552  IP地址.cpp](./P3552  IP地址.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
#include<sstream>
using namespace std;
string raw, ans;

string to2(string n){
	int pow = 1;
	int anss = 0;
	stringstream ss;
	while(n.length() > 0){
		anss += (n[n.length() - 1] - '0') * pow;
		pow *= 2;
		n.erase(n.length() - 1, 1);
	}
	string ans;
	ss.clear();
	ss << anss;
	ss >> ans;
	return ans;
}

int main(){
	cin >> raw;
	cout << to2(raw.substr(0, 8)) << '.';
	cout << to2(raw.substr(8, 8)) << '.';
	cout << to2(raw.substr(16, 8)) << '.';
	cout << to2(raw.substr(24, 8));
}
```

## [P2001  纯粹素数.cpp](./P2001  纯粹素数.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include <iostream>
#include <cmath>

using namespace std;
int n;
bool isPrime(int x){
    if (x < 2){
        return false;
    }
    for (int i=2; i <= ceilf(sqrt(x)); i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

bool isPurePrime(int x){
    if (x == 2){
        return true;
    }
    int len = 0, y = x;
    while (y > 0){
        y /= 10;
        len += 1;
    }
    while(x > 0){
        if (!isPrime(x)){
            return false;
        }
        x %= (long long)(pow(10, --len));
    }
    return true;
}

int main(){
    cin >> n;
    for (int i=2; i <= n; i++){
        if (isPurePrime(i)){
            cout << i << " ";
        }
    }
}
```

## [P1794  统计数字.cpp](./P1794  统计数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:39 2022
#include<iostream>
using namespace std;
int n,m,cnt;
int main(){
	cin>>n;
	int a[n];
	for (int i=0; i < n; i++){
		cin>>a[i];
	}
	cin>>m;
	for (int i=0; i < n; i++){
		if (a[i] == m) cnt++;
		else continue;
	}
	cout<<cnt;
}
```

## [P2109  时钟.cpp](./P2109  时钟.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;
bool isPrime(int n){
	if (n % 2 == 0 && n > 2){
		return false;
	}
	if (n == 2){
		return true;
	}
	if (n < 2){
		return false;
	}
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

string toN(int n, int k){
	string ans;
	int tmp = 0;
	while (n > 0){
		tmp = n % k;
		// cout << tmp << endl;
		if (tmp >= 10){
			ans = char (tmp - 10 + 'A') + ans;
		}else{
			ans = char (tmp + '0') + ans;
		}
		n /= k;
	}
	return ans;
}

int to10(string n, int k){
	int ans, pow = 1;
	while (n.length() > 0){
		ans += (n[n.length() - 1] - '0') * pow;
		pow *= k;
		n.erase(n.length() - 1, 1);
	}
	return ans;
}

stringstream sstr;
int h, m, s;
string in, hs, ms, ss, ansV, ansH;
int main(){
	cin >> in;
	sstr.clear();
	sstr << in.substr(0, 2);
	sstr >> h;
	in.erase(0, 3);
	sstr.clear();
	sstr << in.substr(0, 2);
	sstr >> m;
	sstr.clear();
	in.erase(0, 3);
	sstr << in;
	sstr >> s;
//	cout << h << " " << m << " " << s << endl;
	hs = toN(h, 2);
	ms = toN(m, 2);
	ss = toN(s, 2);
	while (hs.length() < 6){
		hs = "0" + hs;
	}
	while (ms.length() < 6){
		ms = "0" + ms;
	}
	while (ss.length() < 6){
		ss = "0" + ss;
	}
	for (int i=0; i <= 5; i++){
		ansV = ansV + hs[i] + ms[i] + ss[i];
	}
	ansH = hs + ms + ss;
	cout << ansV << " " << ansH;
//  cout << toN(0, 2).length();
}
```

## [P3702  数学.cpp](./P3702  数学.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"

using namespace std;
unsigned long long a, b, ans;

int main() {
    cin >> a >> b;
    ans = ((a % 10) * ((a * a + b) % 10)) % 10;
    cout << ans << endl;
}
```

## [P3690  HIMの无聊.cpp](./P3690  HIMの无聊.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include "iostream"

using namespace std;
int n, sum, sum1, sum2;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
        if (i % 2 == 0) {
            sum2 += i;
        } else {
            sum1 += i;
        }
    }
    cout << sum1 << " " << sum2;
}
```

## [P1038  划分土地.cpp](./P1038  划分土地.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
using namespace std;
int n, m, a;
int main(){
	cin>>n>>m;
	for (int i=1; i <= m; i++){
		if (m % i == 0 && n % i == 0 && i > a){
			a = i;
		}
	}
	cout<<a;
}
```

## [P1030  明明的幸运数.cpp](./P1030  明明的幸运数.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    cout<<(n - n%3) / 3;
}
```

## [P1386  二叉树的遍历.cpp](./P1386  二叉树的遍历.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
using namespace std;
string f(string a, string b){
	if (a.empty() || b.empty()){
		return "";
	}
	char g = a[0];
	string b1 = b.substr(0, b.find(g));
	string b2 = b.substr(b.find(g) + 1);
//	cout << b1 << " " << b2;
	string a1 = a.substr(1, b1.length());
	string a2 = a.substr(b1.length() + 1, b2.length());
//	cout << a1 << " " << a2; 
	return f(a1, b1) + f(a2, b2) + g;
}
string a, b;
int main(){
	while (cin >> a >> b){
		cout << f(a, b) << endl;
	}
}
```

## [P1020  小明找衣服.cpp](./P1020  小明找衣服.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int main(){
	long long  n, m, k;
	cin>>n>>m>>k;
	for (int i=k; i<=n; i+=m){
		cout<<i<<" ";
	}
}
```

## [P3493  种玉米.cpp](./P3493  种玉米.cpp):
```cpp
//Created in Fri Nov 11 13:59:51 2022
#include "iostream"

using namespace std;
int n, m, in, maxn, minn = 99999;
int main(){
    cin >> m >> n;
    for (int i=1; i <= m; i++){
        for (int j=1; j <= n; j++){
            cin >> in;
            if (in > maxn){
                maxn = in;
            }
            if (in < minn){
                minn = in;
            }
        }
    }
    cout << maxn - minn;
}
```

## [P4145  chxulong的极域.cpp](./P4145  chxulong的极域.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	cout<<n*32;
}
```

## [P1051  枪声问题.cpp](./P1051  枪声问题.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>

using namespace std;
int n, t1, t2, p1 = 1, p2 = 1, cnt;
bool a[100001];

int main() {
    cin >> n >> t1 >> t2;
    a[1] = true;
    for (int i = 2; i <= n; i++) {
        p1 += t1 + 1;
        p2 += t2 + 1;
        a[p1] = true;
        a[p2] = true;
    }
    for (int i = 1; i <= 100000; i++) {
        if (a[i]) cnt++;
    }
    cout << cnt;
}
```

## [P1082  最长单词.cpp](./P1082  最长单词.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
using namespace std;
int maxl;
string in, ans;
int main(){
	while(cin >> in){
		if (in[in.length()-1] == '.'){
			in.erase(in.length()-1, in.length()-1);
			if (in.find('a') != in.npos && in.length() > maxl){
				maxl = in.length();
				ans = in;
			}
			break;
		}else{
			if (in.find('a') != in.npos && in.length() > maxl){
				maxl = in.length();
				ans = in;
			}
		}
	}
	cout << ans;
}
```

## [P2572  学生人数.cpp](./P2572  学生人数.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include "iostream"
using namespace std;
int n,sum,in;
int main() {
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        sum += in;
    }
    cout << sum << endl;
}
```

## [P1124  三角形.cpp](./P1124  三角形.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include "iostream"
#include "cstring"

using namespace std;

bool isTre(int a, int b, int c){
    if (a + b > c && a + c > b && b + c > a){
        return true;
    } else{
        return false;
    }
}

int n, maxlen;
int main(){
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            for (int t=0; t < n; t++){
                if (isTre(a[i], a[j], a[t])
                && a[i] + a[j] + a[t] > maxlen
                && i != j && j != t && i != t){
                    maxlen = a[i] + a[j] + a[t];
                }
            }
        }
    }
    cout << maxlen;
}
```

## [P2583  最频繁的字母.cpp](./P2583  最频繁的字母.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include "iostream"

using namespace std;
int maxn, a[123];
string in;
int main(){
    cin >> in;
    for (char i:in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] > maxn) maxn = a[i];
    }
    for (int i=97; i <= 122; i++){
        if (a[i] == maxn){
            putchar(i);
        }
    }
}
```

## [P3138  找张三.cpp](./P3138  找张三.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include "iostream"
using namespace  std;
int n, ans, i1 = 1, i2 = 2, i3;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        i3 = (i2 % 3) + i1 + 1;
        i1 = i2;
        i2 = i3;
        if (i3 % 7 == 0){
            ans += 1;
        }
    }
    cout << ans << endl;
}
```

## [P1002  面积.cpp](./P1002  面积.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>

using namespace std;

int main(){
    int s, a, b, c;
    cin>>a>>b>>c;
    s = (a + a + 2 * c) * b / 2;
    cout<<s;
}
```

## [P1133  危险的实验 .cpp](./P1133  危险的实验 .cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
using namespace std;
long long n, a[9999999], ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=2; i <= n; i++){
		ans += max(a[i], a[i - 1]);
	}
	cout << ans;
}
```

## [P1509  陶陶摘苹果.cpp](./P1509  陶陶摘苹果.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
using namespace std;
int a[10],in,cnt;
int main(){
	for (int i=0; i < 10; i++){
		cin>>a[i];
	}
	cin>>in;
	for (int i=0; i < 10; i++){
		if (a[i] <= in + 30) cnt++;
		else continue;
	}
	cout<<cnt;
}
```

## [P1089  回文数.cpp](./P1089  回文数.cpp):
```cpp
//Created in Fri Nov 11 13:55:55 2022
#include<iostream>
#include<sstream>
using namespace std;
bool p;
string n;

bool isHWS(string str){
	string tmp = "";
	for (int i=str.length() - 1; i >= 0; i--){
		if (str[i] != ' '){
			tmp += str[i];
		}
	}
	// cout << str << "\n" << tmp << endl;
	if (str == tmp){
		return true;
	}
	return false;
}

string toN(string str, int b){
	int tmp;
	string ans;
	stringstream ss;
	ss.clear();
	ss << str;
	ss >> tmp;
	ss.clear();
	while(tmp){
		if (tmp % b >= 10){
			ss << char ('A' + tmp % b - 10);
		}else{
			ss << tmp % b;
		}
		tmp /= b;
	}
	ss >> ans;
	// cout << b << " " << ans << endl;
	ss.clear();
	return ans;
}

int main(){
	while(cin >> n){
		p = false;
		if (n == "0"){
			return 0;
		}
		for (int i=2; i <= 16; i++){
			if (isHWS(toN(n, i))){
				if (!p){
					cout << "Number " << n << " is palindrom in basis " << i << " ";
					p = true;
				}else if (p){
					cout << i << " ";
				}
			}
		}
		if (!p){
			cout << "Number " << n << " is not a palindrom" << endl;
		}else{
			cout << endl;
		}
	}
//	cout << toN("15", 16);
}
```

## [P1115  学生代表.cpp](./P1115  学生代表.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, a[102][102], b[102];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> a[i][j];
		}
		sort (a[i], a[i] + n + 1);
		b[i] = a[i][n / 2 + 1];
	}
	sort (b, b+ n + 1);
	cout << b[n / 2 + 1];
}
```

## [P3571  小李打台球.cpp](./P3571  小李打台球.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
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
```

## [P1136  活动人数.cpp](./P1136  活动人数.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, l, k, cnt, a[9999999];
int main(){
	cin >> n >> l >> k;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i] <= l){
			cnt += 1;
			l += k;
		}
	}
	cout << cnt;
}
```

## [P1590  自创乘法.cpp](./P1590  自创乘法.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include<iostream>
#include<cmath>
using namespace std;
int a,b,ans,t;
int main(){
    cin>>a>>b;
    for (int i=0; i <= 10; i++){
        t = a / (long long)pow(10, i) % 10;
        for (int ii=0; ii <= 10; ii++){
              ans += t * (b / (long long)pow(10, ii) % 10);
        }
    }
    cout<<ans;
}
```

## [P1040  分解质因数.cpp](./P1040  分解质因数.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
#include<cmath>
using namespace std;
int n;
bool p = true;
int main(){
    cin>>n;
    cout<<n<<"=";
    for (int i=2; i <= n; i++){
        while (n % i == 0)
        {
            if (p) cout<<i;
            else cout<<"*"<<i;
            n /= i;    
            p = false;        
        }
        
    }
}
```

## [P1053  合照.cpp](./P1053  合照.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, s, cnt;

struct child{
	long long a, b;
};

child a[1001];
int main(){
	cin >> n >> s;
	for (int i=1; i <= n; i++){
		cin >> a[i].a >> a[i].b;
	}
	for (int i=1; i <= n - 1; i++){
		for (int j=i+1; j <= n; j++){
			if (a[j].b == a[i].b && a[j].a >= a[i].a){
				swap(a[j], a[i]);
			}else if(a[j].b < a[i].b){
				swap(a[j], a[i]);
			}else {
				continue;
			}
		}
	}
	for (int i=1; i <= n; i++){
		if (s >= a[i].b && a[i].b > 0){
			a[i].b = 0;
			s += a[i].a;
			cnt += 1;
		}
	}
	cout << cnt;
}
```

## [P1609  温度转换.cpp](./P1609  温度转换.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f, c;
	//   f=9/5*c+32
	cin>>c;
	f = 1.8*c+32;
	cout<<setprecision(2)<<fixed<<f;
}
```

## [P2460  这是一个最无聊的题目.cpp](./P2460  这是一个最无聊的题目.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include <iostream>
#include <cmath>
using namespace std;
int n;

string isprime(int x){
	if (x == 2){
		return "YES";
	}
	if (x <= 1){
		return "NO";
	}
	for (int i=2; i <= ceil(sqrt(x)); i++){
		if (x % i == 0){
			return "NO";
		}
	}
	return "YES";
}

int count(string str){
	int cnt = 0;
	for (char i: str){
		if (i == 'a' || i == 'e' || i == 'o' 
		|| i == 'u' || i == 'i' || i == 'y'){
			cnt += 1;
		}
	}
	return cnt;
}

string touper(string str){
	for (int i=0; i <= str.length() - 1; i++){
		str[i] = toupper(str[i]);
	}
	return str;
}

int count(int x){
	int cnt = 0;
	while (x > 0){
		cnt += x % 2;
		x /= 2;
	}
	return cnt;
}

int main(){
    while (cin >> n){
        if (n == 1){
        	string str;
        	cin >> str;
        	cout << str.length() << endl;
		}else if (n == 2){
			string str;
			cin >> str;
			cout << count(str) << endl;
		}else if (n == 3){
			int in;
			cin >> in;
			cout << isprime(in) << endl;
		}else if (n == 4){
			string str;
			cin >> str;
			if (touper(str) != str){
				cout << "NO" << endl;
			}else {
				cout << "YES" << endl;
			}
		}else if (n == 5){
			int in;
			cin >> in;
			cout << count(in) << endl;
		}
    }
}
```

## [P1010  阿基米德特性.cpp](./P1010  阿基米德特性.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if (b & a == 0){
		cout<<b/a;
	}
	else{
		cout<<b/a +1;
	}
}
```

## [P1095  密码.cpp](./P1095  密码.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
using namespace std;
string ain, bin;
int a[300], b[300], ans[300];
void str2int(int x[], string n){
	int p = 1;
	for (int i = n.size() - 1; i >= 0; i--){
		x[p++] = n[i] - '0';
	}
}
int main(){
	cin >> ain >> bin;
	str2int(a, ain);
	str2int(b, bin);
	for (int i = 0; i < 300; ++i) {
    	ans[i] += a[i] + b[i];
    	if (ans[i] >= 10) {
      		ans[i + 1] += 1;
      		ans[i] -= 10;
    	}
  }
	bool p = false;
	for (int i=300; i >= 1; i--){
		if (ans[i] != 0 && !p){
			p = true;
		}
		if (p){
			cout << ans[i];
		}
	}
}
```

## [P2710  成绩.cpp](./P2710  成绩.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
using namespace std;
int main(){
	int homework,test,exam;
	cin>>homework>>test>>exam;
	cout<<homework*0.2 + test*0.3 + exam*0.5;
}
```

## [P1165  2的幂次方.cpp](./P1165  2的幂次方.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n;
string f(long long n){
	string ans;
	for (int i=63; i >= 0; i--){
		if (pow(2, i) <= n){
			if (i == 1){
				ans += "2";
			}else if (i == 0){
				ans += "2(0)";
			}else {
				ans += "2(" + f(i) + ")";
			}
			n -= pow(2, i);
			if (n != 0){
				ans += "+";
			}
		}
	}
	return ans;
}
int main(){
	cin >> n;
	cout << f(n);
}
```

## [P2051  拼不出的数.cpp](./P2051  拼不出的数.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include<iostream>
#include<algorithm>
using namespace std;
long long n,num,a[1000010];
int main() {
	cin>>n;
	for(long long  i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(long long i=-1; i<=n; i++) {
		if(a[i]>num+1) {
			cout<<num+1;
			return 0;
		}
		num+=a[i];
	}
	cout<<num+1;
	return 0;
}
```

## [P1021  小明数木块.cpp](./P1021  小明数木块.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int main(){
	int input, ans = 0;
	cin>>input;
	for (int i=input; i>0; i--){
		ans += (1 + i)*i/2;
	}
	cout<<ans;
}
```

## [P1164  移梵塔.cpp](./P1164  移梵塔.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
int n, s;
void f(int n,char a,char b,char c){
	if (n == 1){
		s += 1;
		cout << s << " " << a << "->" << c << endl;
		return;
	}
	f(n - 1, a, c, b);
	s += 1;
	cout << s << " " << a << "->" << c << endl;
	f(n - 1, b, a, c);
}
int main(){
	cin >> n;
	f(n, 'A', 'B', 'C');
}
```

## [P1113  数字积木.cpp](./P1113  数字积木.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(string a, string b){
	return a + b > b + a;
}

int n;
string a[999999];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	stable_sort(a + 1, a + 1 + n, cmp);
	for (int i=1; i <= n; i++){
		cout << a[i];
	}
}
```

## [P1009  时差.cpp](./P1009  时差.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	if (time - 12 >= 0){
		cout<<time - 12;
	}
	else{
		cout<<time + 12;
	}
}
```

## [P2565  最长变换长度.cpp](./P2565  最长变换长度.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
using namespace std;
int maxLength(int n){
	int ans = 1;
	while (n != 1){
		if (n % 2 == 0){
			n /= 2;
		}else {
			n = 3 * n + 1;
		}
		ans += 1;
	}
	return ans;
}
int x, y, ans;
int main(){
	cin >> x >> y;
	for (int i=x; i <= y; i++){
		ans = max(maxLength(i), ans);
	}
	cout << ans;
}
```

## [P3574  幸运数字.cpp](./P3574  幸运数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include "iostream"

using namespace std;
long long n, cnt4, cnt7;
int main(){
    cin >> n;
    while (n % 4 == 0 || n % 7 == 0){
        if (n % 4 == 0){
            cnt4 += 1;
            n /= 4;
        }
        if (n % 7 == 0){
            cnt7 += 1;
            n /= 7;
        }
    }
    cout << cnt4 << " " << cnt7;
}
```

## [P2184  佩奇过大年.cpp](./P2184  佩奇过大年.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, m, sum;
short a[9999][9999];

bool cmp(int a, int b){
	if (a > b){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			cin >> a[i][j];
		}
		sort(a[i] + 1, a[i] + m + 1, cmp);
		sum += a[i][1];
	}
	cout << sum;
}
```

## [P3537  聪明的小红.cpp](./P3537  聪明的小红.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include<iostream>
using namespace std;
int main(){
    long long a,b,x;
    cin>>a>>b;
    x=3*a+b;
    cout<<x;
}
```

## [P3604  求平均值.cpp](./P3604  求平均值.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include "iostream"
#include "iomanip"

using namespace std;
double ave;
int n, m, minn = 999999999, minx, miny, maxn, maxx, maxy, in;
int main(){
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        for (int j=1; j <= m; j++){
            cin >> in;
            ave += in;
            if (in < minn){
                minn = in;
                minx = i;
                miny = j;
            }
            if (in > maxn){
                maxn = in;
                maxx = i;
                maxy = j;
            }
        }
    }
    cout << maxn << " " << maxx << " " << maxy << endl;
    cout << minn << " " << minx << " " << miny << endl;
    cout << setprecision(2) << fixed << ave / (n * m) << endl;
}
```

## [P1194  ackerman函数.cpp](./P1194  ackerman函数.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include "iostream"

using namespace std;

int x, y, ans;

int ack(int m, int n){
    if (m == 0){
        return n += 1;
    }
    if (m > 0 && n == 0){
        return ack(m - 1, 1);
    }
    if (m > 0 && n > 0){
        return ack((m - 1), ack(m, n - 1));
    }
}

int main(){
    cin >> x >> y;
    ans = ack(x, y);
    cout << ans;
}
```

## [P3708  心中的跑步冠军.cpp](./P3708  心中的跑步冠军.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include<iostream>
using namespace std;
int m,t,u,f,d,in,time_,lengh;
int main(){
	cin>>m>>t>>u>>f>>d;
	for (int i=1; i <= t; i++){
		cin>>in;
		switch (in){
			case 1:{
				if ((time_ + u <= m)){
					time_ += u;
					lengh += 1;
				}
				break;
			}
			case 2:{
				if ((time_ + f <= m)){
					time_ += f;
					lengh += 1;
				}
				break;
			}
			case 3:{
				if ((time_ + d <= m)){
					time_ += d;
					lengh += 1;
				}
				break;
			}
		}
		// cout<<time_<<"	"<<lengh<<endl;
	}
	cout<<lengh<<endl;
}
```

## [P3633  摘彩球.cpp](./P3633  摘彩球.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, m, cnt, cont, h[99999], l[99999];
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		cin >> h[i];
	}
	for (int i=1; i <= m; i++){
		cin >> l[i];
	}
	sort(h + 1, h + n + 1);
	sort(l + 1, l + m + 1);
	for (int i=1; i <= m; i++){
		cont = 0;
		for (int j=1; j <= n; j++){
			if (l[i] >= h[j] && h[j] > -1){
				cont += 1;
				cnt += 1;
				// cout << l[i] <<  " " << h[i] << " " << cnt << endl;
				h[j] = -1;
				if (cont >= 2){
					break;
				}
			}
		}
	}
	cout << cnt;
}
```

## [P1604  切蛋糕.cpp](./P1604  切蛋糕.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
using namespace std;
unsigned long long n,m;
int main(){
	cin>>n>>m;
	cout<<n*m / 2;
}
```

## [P4046  Fibonacci.cpp](./P4046  Fibonacci.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include<iostream>
using namespace std;
long long t, n, a[120];

bool check(long long x){
	for (int i=1; i <= 118; i++){
		for (int j=2; j <= 119; j++){
			if (a[i] * a[j] == x){
				return true;
			}
		}
	}
	return false;
}

int main(){
	cin >> t;
	a[1] = a[2] = 1;
	for (int i=3; i <= 99; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 1; i <= t; i++){
		cin >> n;
		if (check(n)){
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
	}
}
```

## [P3718  小 V 的第二次面试.cpp](./P3718  小 V 的第二次面试.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"

using namespace std;
int n, a = 15, b = 25, c = 30, d;
int main(){
    cin >> n;
    if (n == 1){
        d = a;
    }else if (n == 2){
        d = b;
    }else if (n == 3){
        d = c;
    }else{
        for (int i=1; i <= n - 3; i++){
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
    }
    cout << d;
}
```

## [P1276  堆叠草堆.cpp](./P1276  堆叠草堆.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<algorithm>
using namespace std;
int a[9999999], c[9999999], n, k, ain, b;
int main(){
	cin >> n >> k;
	for (int i=1; i <= k; i++){
		cin >> ain >> b;
		c[ain] += 1;
		c[b + 1] -= 1;
	}
	for (int i=1; i <= n; i++){
		a[i] = a[i - 1] + c[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[n / 2 + 1];
}
```

## [P1019  猴子吃桃问题.cpp](./P1019  猴子吃桃问题.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int main(){
	int m,ans = 1;
	cin>>m;
	while(true){
		if (m!=1){
			ans = (ans+1) * 2;
			m-=1;
		}else{
			break;
		}
	}
	cout<<ans;
}
```

## [P2561  咪咪的智慧.cpp](./P2561  咪咪的智慧.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include "iostream"
using namespace std;
int n,cnt,h,in;
int main() {
    cin >> n >> h;
    for (int i=1; i <= n; i++){
        cin >> in;
        if (in < h){
            cnt += 1;
        }
    }
    cout << cnt << endl;
}
```

## [P1005  追及问题.cpp](./P1005  追及问题.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>

using namespace std;

int main(){
    const int tPerRange = 300 / (6 - 4);
    int range, tAnswer;
    cin>>range;
    tAnswer = tPerRange * range;
    cout<<tAnswer<<"\n";
}
```

## [P1881  犁田机器人.cpp](./P1881  犁田机器人.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include<iostream>
using namespace std;
int x, y, i, cnt, xll, xur, yll, yur;
bool p[241][241];
int main(){
	cin >> x >> y >> i;
	for (int n=1; n <= i; n++){
		cin >> xll >> yll >> xur >> yur;
		for (int j=xll; j <= xur; j++){
			for (int k=yll; k <= yur; k++){
				p[j][k] = true;
			}
		}
	}
	for (int j=0; j <= 240; j++){
		for (int k=0; k <= 240; k++){
			if (p[j][k]){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}
```

## [P1169  装信.cpp](./P1169  装信.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
using namespace std;
int n;
long long f(int n){
	if (n == 1) return 0;
	if (n == 2) return 1;
	return (n - 1) * (f(n - 1) + f(n - 2));
}
int main(){
	cin >> n;
	cout << f(n);
}
```

## [P1611  完美数.cpp](./P1611  完美数.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
using namespace std;
int n,m,sum;
int main(){
	cin>>m>>n;
	for (int i=m; i <= n; i++){
		if (i % 2 == 0){
			for (int j=3; j <= i; j++){
				if (i % j == 0 && j < i){
					sum += j;
				}
			} 
			sum += 2;
		}
		sum ++;
		if (sum == i){
			cout<<i<<endl;
		}
		sum = 0;
	}
}
```

## [P2573  进制转换.cpp](./P2573  进制转换.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>

using namespace std;
bool boolp = true;
int n, m, a[999999], p;

int main() {
    cin >> n >> m;
    while (n > 0){
        a[p] = n % m;
        n /= m;
        p += 1;
    }
    for (int i=999998; i >= 0; i--){
        if (a[i] == 0 && boolp){
            continue;
        } else if(a[i] != 0 || !boolp){
            cout << a[i];
            boolp = false;
        }
    }
}
```

## [P2594  康娜的糖果.cpp](./P2594  康娜的糖果.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
#include<cstring>
using namespace std;
int n,m,opt,in,x,cnt;
int main() {
	cin>>n>>m;
	int a[n+100];
	memset(a, 0, sizeof(a));
	for (int i=1; i <= n; i++) {
		cin>>in;
		a[in] += 1;
	}
	for (int i=0; i<m; i++) {
		cin>>opt>>x;
		cnt = 0;
		if (opt == 1) {
			if (x <= n) a[x] -= 1;
			else continue;
		} else if (opt == 2) {
			if (x <= n) {
				cout<<a[x]<<endl;
			} else cout<<0<<endl;
		}
	}
}
```

## [P1077  统计单词数.cpp](./P1077  统计单词数.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
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
```

## [P2356  丢失的筷子.cpp](./P2356  丢失的筷子.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
using namespace std;
int n, in, ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		ans ^= in;
	}
	cout << ans;
}
```

## [P4153  老冯看B站.cpp](./P4153  老冯看B站.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include<iostream>
#include<cmath>
using namespace std;
unsigned long long n, size;
int main(){
	cin>>n;
	size = n * 1048576 * 8 / 32;
	cout<<size;
}
```

## [P3578  平均值.cpp](./P3578  平均值.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
using namespace std;
#define int long long
void out(__int128 x){
    string str;
    while (x > 0){
        str = char ((x % 10) + '0') + str;
        x /= 10;
    }
    cout << str.substr(0, str.length() - 3) << '.' << str.substr(str.length() - 3, str.npos) << endl;
}
int n, m, x, y;
__int128 a[1000001];
signed main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> x;
        a[i] = x + a[i - 1];
    }
    cin >> m;
    for (int i=1; i <= m; i++){
        cin >> x >> y;
        if (x >= y){
            swap(x, y);
        }
        __int128 tmp = (a[y] - a[x - 1]) * 10000;
        tmp /= y - x + 1;
        if (tmp % 10 >= 5){
            tmp += 10;
        }
        tmp /= 10;
        out(tmp);
    }
}
```

## [P2430  溶液模拟器.cpp](./P2430  溶液模拟器.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
#include<stack>
#include<iomanip>
using namespace std;
int co, vo, n, v, c;
char ch;
stack<int> weight;
stack<double> cSta;
int main(){
	cin >> vo >> co >> n;
	cSta.push(double(co));
	weight.push(vo);
	for (int i=1; i <= n; i++){
		cin >> ch;
		if (ch == 'P'){
			cin >> v >> c;
			double tmp = weight.top() * cSta.top() + v * c;
			tmp /= weight.top() + v;
			cSta.push(tmp); 
			weight.push(weight.top() + v);
		}else if (ch == 'Z'){
			if (cSta.size() > 1){
				cSta.pop();
			}
			if (weight.size() > 1){
				weight.pop();
			}
		}
		cout << weight.top() << " ";
		cout << setprecision(5) << fixed << cSta.top() << endl;
	}
}
```

## [P1070  戴夫的信.cpp](./P1070  戴夫的信.cpp):
```cpp
//Created in Fri Nov 11 13:59:27 2022
#include<iostream>
using namespace std;
int n, inde;
string str, ans;
int main(){
	cin >> n;
	for (int i=0; i <= n; i++){
		getline(cin, str);
		str.erase(0, str.rfind('@') + 1);
		while(str.find('#') != str.npos){
			if (str.find('#') == 0){
				str.erase(0, 1);
			}else{
				str.erase(str.find('#')-1, 2);
			}
		}
		if (!str.empty()){
			ans += str + '\n';
		}
	}
	cout << ans;
}
```

## [P3648  正方形.cpp](./P3648  正方形.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include<iostream>
using namespace std;
int ans,n,m;
int main(){
	cin>>n>>m;
	for (int i=1; i<=min(n,m); i++){
		ans += (n - i + 1) * (m - i + 1);
	}
	cout<<ans<<endl;
}
```

## [P1599  评委打分.cpp](./P1599  评委打分.cpp):
```cpp
//Created in Fri Nov 11 13:59:35 2022
#include<iostream>
using namespace std;
int n,sum,max_,min_ = 999999;
int main(){
	for (int i=1; i <= 12; i++){
		cin>>n;
		if (n < min_) min_ = n;
		if (n > max_) max_ = n;
		sum += n;
	}
	cout<<(sum - max_ - min_) / 10;
}
```

## [P2378  最大的&运算.cpp](./P2378  最大的&运算.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
using namespace std;
int n, a[300001], maxn;
bool p[300001];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
		p[i] = true;
	}
	for (int i=31; i >= 0; i--){
		int tmp = 0;
		for (int j=1; j <= n; j++){
			if (a[j] & (1 << i) && p[j]){
				tmp += 1;
			}
		}
		if (tmp > 1){
			for (int j=1; j <= n; j++){
				if (!(a[j] & (1 << i))){
					p[j] = false;
				}
			}
			maxn += 1 << i;
		}
	}
	cout << maxn;
}
```

## [P1001  魔方.cpp](./P1001  魔方.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
n = int(input())
a = 8
b = (n - 2) * 12
c = (n - 2) ** 2 * 6
print(str(a) + "\n" + str(b) + "\n" + str(c))
```

## [P3768  逆序求和.cpp](./P3768  逆序求和.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include "iostream"
#include "cmath"

using namespace std;
int n, in, ans;

long long changeOp(long long x){
    int cnt = 0;
    long long y = 0, k = x;
    while(k > 0.0000000001){
        k /= 10;
        cnt += 1;
    }
    while(x > 0.0000000001){
        cnt -= 1;
        y += (x % 10) * pow(10, cnt);
        x /= 10;
    }
    return y;
}

int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        ans += changeOp(in);
    }
    cout << ans;
}
```

## [P3501  求y值.cpp](./P3501  求y值.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include<iostream>
using namespace std;
long long x,y,z;
int main(){
	cin>>x>>z;
	for (y=1; y <= 2147483647; y++){
		if (x * y % z == 0){
			cout<<y;
			return 0;
		}
	}
}
```

## [P1685  国王与麦子.cpp](./P1685  国王与麦子.cpp):
```cpp
//Created in Fri Nov 11 13:59:38 2022
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long ans=1;
	for (int i=n; i>1; i--){
		ans *= 2;
	}
	cout<<ans;
}
```

## [P1937  闪电风暴.cpp](./P1937  闪电风暴.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#include<iostream>
using namespace std;
int m, n, ans;
char a[10002][10002];

int getNum(int i, int j){
	int ret = 0;
	for (int ii = i; ii <= i + m - 1; ii++){
		for (int jj=j; jj <= j + m - 1; jj++){
			if (a[ii][jj] == '#'){
				ret += 1;
			}
		}
	}
	// cout << i << " " << j << " " << ret << endl;
	return ret;
}
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= n - (m - 1); i++){
		for (int j=1; j <= n - (m - 1); j++){
			ans = max(ans, getNum(i, j));
		}
	}
	cout << ans;
}
```

## [P1663  寻找质因数.cpp](./P1663  寻找质因数.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
	if (n == 2){
		return true;
	}
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int getFactor(int n){
	for (int i = n; i >= 1; i--){
		if (n % i == 0){
			if (isPrime(i)){
				return i;
			}
		}
	}
}
int n, in, ans, maxFact;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		int fact = getFactor(in);
		if (maxFact < fact){
			ans = in;
			maxFact = fact;
		}
	}
	cout << ans;
}
```

## [P1016  零花钱.cpp](./P1016  零花钱.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	int got, m1, m2, m3, m4, m5;
	cin>>got>>m1>>m2>>m3>>m4>>m5;
	cout<<(got-m1-m2-m3-m4-m5);
}
```

## [P3515  兰姐姐的愤怒.cpp](./P3515  兰姐姐的愤怒.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include<iostream>
using namespace std;
long long x,ans=1;
int main(){
    cin>>x;
    while (x>0)
    {
        x -= ans;
        ans *= 2;
    }
    cout<<ans;
}
```

## [P1158  SUME.cpp](./P1158  SUME.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#pragma GCC optimize(3)
#pragma GCC target("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC optimize(2)
#include<iostream>
using namespace std;
int n, s[1001][1001], a[1001];
int main(){
	cin >> n;
	ios::sync_with_stdio(false);
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> s[i][j]; // 输入 
		}
	}
	a[1] = (s[1][2] + s[1][3] + s[2][3]) / 2 - s[2][3]; // 计算a1 
	cout << a[1] << " "; // 输出算好的a1 
	for(int i=2;i<=n;i++){
		cout << s[i - 1][i] - a[1] << " "; // 输出算出来的ai 
		a[1] = s[i - 1][i] - a[1]; // 更新a1 
	}
}
```

## [P2059  乐乐爱科学.cpp](./P2059  乐乐爱科学.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
using namespace std;
int n, cnt;
string t, tmp;
int main(){
	cin >> n;
	cin >> tmp;
	for (int i=1; i < n; i++){
		cin >> t;
		if (t != tmp){
			cnt += 1;
		}
		tmp = t;
	}
	cout << cnt + 1;
}
```

## [P1938  合并数字.cpp](./P1938  合并数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include "iostream"

using namespace std;
int a, b, c;

int main() {
    cin >> a >> b;
    if (b < 10) {
        c = a * 10 + b;
    } else if (b < 100) {
        c = a * 100 + b;
    } else if (b < 1000) {
        c = a * 1000 + b;
    }
    cout << c << endl;
}
```

## [P1126  珠心算测验.cpp](./P1126  珠心算测验.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
using namespace std;
int n, a[9999999], cnt;
bool p[9999999];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			for (int k=1; k <= n; k++){
				if (i != j && j != k && !p[k]){
					if (a[i] + a[j] == a[k]){
						cnt += 1;
						p[k] = true;	
					}
				}
			}
		}
	}
	cout << cnt;
}
```

## [P2171  反向输出一个三位数.cpp](./P2171  反向输出一个三位数.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
using namespace std;
int main(){
	int input, ge, shi,bai;
	cin>>input;
	bai = input / 100;
	shi = input / 10 % 10;
	ge = input % 10;
	cout<<ge<<shi<<bai;
}
```

## [P1508  校门外的树.cpp](./P1508  校门外的树.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
using namespace std;
int l,m,in1,in2,cnt,sum;
bool a[10001];
int main(){
	cin>>l>>m;
	for (int i=1; i <= m; i++){
		cin>>in1>>in2;
		for (int j=in1; j <= in2; j++){
			// cout<<j<<endl;
			a[j] = true;
		}
	}
	for (int i=0; i <= l; i++){
		// cout<<a[i];
		if (a[i] == false) cnt ++;
	}
	cout<<cnt;
}
```

## [P2253  牛线.cpp](./P2253  牛线.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
#include<deque>
using namespace std;
int s, k, p;
deque<int> dq;
char activity, side;
int main(){
	cin >> s;
	for (int i=1; i <= s; i++){
		cin >> activity >> side;
		if (activity == 'A'){
			if (side == 'L'){
				dq.push_front(++p);
			}else if (side == 'R'){
				dq.push_back(++p);
			}
		}else if (activity == 'D'){
			cin >> k;
			if (side == 'L'){
				for (int j=1; j <= k; j++){
					dq.pop_front();
				}
			}else if (side == 'R'){
				for (int j=1; j <= k; j++){
					dq.pop_back();
				}
			}
		}
//		cout << dq.size() << endl;
	}
	while (!dq.empty()){
		cout << dq.front() << endl;
		dq.pop_front();
	}
}
```

## [P1033  子数整数.cpp](./P1033  子数整数.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
using namespace std;
int k;
int t;
int main(){
	cin>>k;
	for (int i = 10000; i <= 30000; i++){
		if (i / 100 % k == 0 && i / 10 % 1000 % k == 0 && 
		i % 1000 % k == 0){
			cout<<i<<endl;
			t+=1;
		}
	}
	if (t == 0){
		cout<<"No"<<endl;
	}
}
```

## [P2379  最大约数.cpp](./P2379  最大约数.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include "iostream"
#include "cmath"
using namespace std;
int n;
int main(){
    cin >> n;
    for (int i=2; i <= ceilf(sqrt(n)); i++){
        if (n % i == 0 && n / i > i){
            cout << n / i << endl;
            return 0;
        }else if (n % i == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}
```

## [P3693  HIMの爱好.cpp](./P3693  HIMの爱好.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include "iostream"
#include "cmath"

using namespace std;
int n,m;

bool isprime(int x){
    if (x == 2){
        return true;
    }else{
        for (int i=2; i <= ceilf(sqrt(x)); i++){
            if (x % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin >> n >> m;
    for (int i=min(n , m); i <= max(n, m); i++){
        if (isprime(i) && i > 1){
            cout << i << " ";
            break;
        }
    }
    for (int i=max(n , m); i >= min(n, m); i--){
        if (isprime(i)){
            cout << i;
            break;
        }
    }
}
```

## [P1013  生命之水.cpp](./P1013  生命之水.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double ton;
	cin>>ton;
	if (ton <= 40){
		cout<<setprecision(2)<<fixed<<ton*2.0;
		}
	else{
		cout<<setprecision(2)<<fixed<<40*2.0 + (ton - 40) * 2.4;
	}
}
```

## [P1847  排队打水.cpp](./P1847  排队打水.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, r, m, ans;
int a[99999999], b[99999999];
int main(){
	cin >> n >> r;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		sort(b + 1, b + r + 1);
		ans += a[i] + b[1];
		b[1] += a[i];
	}
	cout << ans;
}
```

## [P1007  判奇偶.cpp](./P1007  判奇偶.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if (a%2 == 0){
		cout<<a/2;
	}
	else{
		cout<<a*2;
	}
}
```

## [P1725  陶陶抢苹果.cpp](./P1725  陶陶抢苹果.cpp):
```cpp
//Created in Fri Nov 11 13:59:39 2022
//#include <iostream>
//
//using namespace std;
//int cnt;
//string str;
//int main(){
//    cin >> str;
//    for (char i: str){
//        if (i == '1'){
//            cnt += 1;
//        }
//    }
//    cout << cnt;
//}

//#include <iostream>
//
//using namespace std;
//int x, y, k, a, b, xi, yi;
//int main(){
//    cin >> x >> y >> k;
//    for (int i=1; i <= k; i++){
//        cin >> a >> xi >> b >> yi;
//        x += a * xi;
//        y += b * yi;
//        if (x <= 0) x = 0;
//        if (y <= 0) y = 0;
//        if (x == y){
//            cout << i << endl;
//            return 0;
//        }
//    }
//    if (x == y){
//        cout << k << endl;
//        return 0;
//    }
//    cout << -1;
//}

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//bool isprime(int n) {
//    if (n <= 1) return false;
//    if (n == 2) return true;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool is_pure_prime(int n) {
//    if (isprime(n)){
//        return false;
//    }
//    bool a[999999];
//    memset(a, false, sizeof a);
//    bool p = true;
//    while (p){
//        p = false;
//        for (int i=2; i * i <= n; i++){
//            if (n % i == 0){
//                p = true;
//                if (a[i]){
//                    return false;
//                }
//                a[i] = true;
//                n /= i;
//            }
//        }
//        if (a[n]){
//            return false;
//        }
//    }
////    cout << endl;
//    return true;
//}
//
//int n;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin >> n;
//    for (int i = 6; i <= n; i++) {
//        if (is_pure_prime(i)) {
//            cout << i << " ";
//        }
//    }
//}

#include <iostream>
#include <algorithm>

using namespace std;
struct tao{
    int height, sum, id;
} t[99999999];
bool cmp1(tao a, tao b){
    return a.height > b.height;
}
bool cmp2(int a, int b){
    return a > b;
}
bool cmp3(tao a, tao b){
    return a.id < b.id;
}
int n, m, a[99999999];
int main(){
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    for (int i=1; i <= m; i++){
        cin >> t[i].height;
        t[i].id = i;
    }
    sort(a + 1, a + n + 1, cmp2);
    sort(t + 1, t + m + 1, cmp1);
    int p = 1;
    for (int i=1; i <= n; i++){
        if (p > m){
            p = 1;
        }
        t[p++].sum += a[i];
    }
    sort(t + 1, t + m + 1, cmp3);
    for (int i=1; i <= m; i++){
        cout << t[i].sum << " ";
    }
}

//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int n, ans, maxn;
//int a[99999999];
//
//bool f(int lim) {
//    int cur = 1;
//    while (cur <= n) {
//        int pos = lower_bound(a + cur, a + n + 1, a[cur - 1] + lim) - a;
//        if (a[pos] != a[cur - 1] + lim) return false;
//        cur = pos + 1;
//    }
//    return true;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        maxn = max(maxn, a[i]);
//        a[i] += a[i - 1];
//    }
//    for (int i = 1; i <= n; ++i) {
//        if (a[n] % a[i] != 0 || a[i] < maxn){
//            continue;
//        }
//        if (f(a[i])) {
//            ans = a[i];
//            break;
//        }
//    }
//    cout << ans;
//}
```

## [P1607  骑车与走路.cpp](./P1607  骑车与走路.cpp):
```cpp
//Created in Fri Nov 11 13:56:56 2022
#include<iostream>
using namespace std;
int n, tb, tw;
int main(){
    cin>>n;
    tb = 27 + n / 3.0 + 23;
    tw = n / 1.2;
    if (tb == tw) cout<<"All"<<"\n"<<tw;
    else if (tb < tw) cout<<"Bike"<<"\n"<<tb;
    else if (tw < tb) cout<<"Walk"<<"\n"<<tw;
}
```

## [P3781  笨鸟先飞.cpp](./P3781  笨鸟先飞.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include "iostream"
using namespace std;
long long n,ans;
int main(){
    cin>>n;
    for (long long i=1; i <= n * 2; i += 2){
        ans += i;
    }
    cout<<ans<<endl;
}
```

## [P2459  国王的魔镜.cpp](./P2459  国王的魔镜.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
using namespace std;
string in;

string check(string str){
	string tmp;
	for (int i=0; i <= str.size() - 1; i++){
		tmp = str[i] + tmp;
	}
	if (tmp == str && tmp.size() % 2 == 0){
		return check(tmp.substr(0, tmp.size() / 2));
	}
	return str;
}
int main(){
	cin >> in;
	cout << check(in).length();
}
```

## [P1940  海岛寻宝.cpp](./P1940  海岛寻宝.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
bool p;
string str;
struct treasure{
	double x, y;
	string name;
	bool isTreasure(){
		if (name.find(str) != name.npos){
			return true;
		}
		return false;
	}
	double distance(){
		return sqrt(sqrt(x) + sqrt(y));
	}
} a[99999];
bool cmp(treasure a, treasure b){
	return a.distance() < b.distance();
}
int main(){
	cin >> str >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].x >> a[i].y >> a[i].name;
		if (a[i].isTreasure()){
			p = true;
		}
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; i <= n; i++){
		if (!p){
			cout << -1 << " " << -1;
			return 0;
		}else if (a[i].isTreasure()){
			cout << a[i].x << " " << a[i].y << "\n";
		}
	}
}
```

## [P1800  水王争霸.cpp](./P1800  水王争霸.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
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
```

## [P1562  SUME.cpp](./P1562  SUME.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include<iostream>
using namespace std;
int n, s[1001][1001], a[1001];
int main(){
	cin >> n;
	ios::sync_with_stdio(false);
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> s[i][j]; // 输入 
		}
	}
	a[1] = (s[1][2] + s[1][3] + s[2][3]) / 2 - s[2][3]; // 计算a1 
	cout << a[1] << " "; // 输出算好的a1 
	for(int i=2;i<=n;i++){
		cout << s[i - 1][i] - a[1] << " "; // 输出算出来的ai 
		a[1] = s[i - 1][i] - a[1]; // 更新a1 
	}
}
```

## [P1043  统计素数.cpp](./P1043  统计素数.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
#include<cmath>
using namespace std;
int l, r, cnt;
bool p[100000000];
int main(){
	cin >> l >> r;
	p[0] = p[1] = true;
	for (int i = 2; i <= ceilf(sqrt(r)); i++) {
		if (!p[i]){
			for (int j = 2; j * i <= r; j++) {
				p[j * i] = true;
			}
		}
	}
	for (int i=l; i <= r; i++){
		cnt += !p[i];
	}
	cout << cnt;
}
```

## [P3646  小明的新运算.cpp](./P3646  小明的新运算.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include<iostream>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<a*b*(b+1)/2;
}
```

## [P3641  排队.cpp](./P3641  排队.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include "iostream"
#include "algorithm"

using namespace std;
bool p;
int n, a[999999], m;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m;
    sort(a, a + n + 1);
    for (int i=0; i <= n; i++){
        if (a[i] == m && !p){
            cout << i << " ";
            p = true;
        } else if(a[i] > m && p){
            cout << i - 1;
            return 0;
        }
    }
}
```

## [P3901  优美的数.cpp](./P3901  优美的数.cpp):
```cpp
//Created in Fri Nov 11 14:00:00 2022
#include "iostream"

using namespace std;
int t, k, a[10000], p;

bool inSeven(long long n) {
    while (n > 0.0001) {
        if (n % 10 == 7) return true;
        n /= 10;
    }
    return false;
}

int main() {
    cin >> t;
    p++;
    for (int i = 7; i <= 2021 * 4; i++) {
        // cout<<p<<endl;
        // cout<<i % 7<<"\t"<<inSeven(i)<<endl;
        if (i % 7 == 0 || inSeven(i)) {
            a[p] = i;
            p++;
        }
    }
    for (int i = 1; i <= t; i++) {
        cin >> k;
        cout << a[k]<<endl;
    }
// cout<<inSeven(979999999999);
}
```

## [P3490  相邻数之和.cpp](./P3490  相邻数之和.cpp):
```cpp
//Created in Fri Nov 11 13:59:51 2022
#include <iostream>

using namespace std;
int h, l, c, r, sum, a[99][99];
int main(){
    cin >> h >> l >> c >> r;
    for (int i=1; i <= h; i++){
        for (int j=1; j <= l; j++){
            cin >> a[i][j];
        }
    }
    c += 1;
    r += 1;
    sum += a[c - 1][r - 1] + a[c - 1][r] + a[c - 1][r + 1];
    sum += a[c][r - 1] + a[c][r + 1];
    sum += a[c + 1][r - 1] + a[c + 1][r]  + a[c + 1][r + 1];
//    cout << a[c - 1][r - 1] << " " << a[c - 1][r] << " " << a[c - 1][r + 1] << endl;
//    cout << a[c][r - 1] << " " << a[c][r] << " " << a[c][r + 1] << endl;
//    cout << a[c + 1][r - 1] << " " << a[c + 1][r]  << " " << a[c + 1][r + 1] << endl;
    cout << sum;
}
```

## [P2464  恐龙先生救小熊.cpp](./P2464  恐龙先生救小熊.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include "iostream"
#include "cmath"

using namespace std;
int h, tim = 0, hei = 1;
int main(){
    cin >> h;
    while(abs(h - hei) > abs(h - 2 * hei)){
        tim += 1;
        hei *= 2;
    }
    cout << tim << "\n" << abs(h - hei);
}
```

## [P2562  扫描识别.cpp](./P2562  扫描识别.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include "iostream"

using namespace std;
string in, out;
int main(){
    cin >> in;
    out = in;
    for (int i=0; i < in.length(); i++){
        if (in[i] == 'O'){
            out[i] = '0';
        } else if(in[i] == 'l'){
            out[i] = '1';
        } else if(in[i] == 'Z'){
            out[i] = '2';
        } else if(in[i] == 'S'){
            out[i] = '5';
        } else if(in[i] == 'b'){
            out[i] = '6';
        } else if(in[i] == 'B'){
            out[i] = '8';
        } else if(in[i] == 'q'){
            out[i] = '9';
        }
    }
    cout << out;
}
```

## [P3487  Hello World.cpp](./P3487  Hello World.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World!";
}
```

## [P1055  卡片整理.cpp](./P1055  卡片整理.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include "iostream"
using namespace std;
int a[9999999];
int n, in;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        a[in] += 1;
    }
    for (int i=0; i <= 9999998; i++){
        if (a[i] > 0){
            cout << i << " " << a[i] << endl;
        }
    }
}
```

## [P2116  又见汉诺塔.cpp](./P2116  又见汉诺塔.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
#include<cmath>
using namespace std;
int n, a[999999], x;
int main(){
	cin >> n;
	/*
	1 : 1; -1 + 2;
	2 : 3; 1 + 2;
	3 : 7; 2 + 4;
	4 : 11; 7 + 4;
	5 : 17; 11 + 6
	*/
	a[1] = 1;
	x = 2;
	for (int i=2; i <= n; i++){
		a[i] = a[i - 1] + x;
		if (!(i & 1)){
			x += 2;
		}
		// cout << a[i] << endl;
	}
	cout << a[n];
}
```

## [P1067  ISBN号码.cpp](./P1067  ISBN号码.cpp):
```cpp
//Created in Fri Nov 11 13:59:26 2022
#include "iostream"

using namespace std;

int n, p = 1;
string in;
int main(){
    cin >> in;
    for (int i=0; i <= 11; i++){
        if (in[i] - '0' >= 0){
            n += (in[i] - '0') * p;
            p += 1;
        }
    }
    if ((int (in[12] - '0') == n % 11) || (n % 11 == 10 && in[12] == 'X')){
        cout << "Right" << endl;
        return 0;
    } else{
        for (int i = 0; i <= 11; i++){
            putchar(in[i]);
        }
        if (n % 11 == 10){
            cout << 'X';
        } else{
            cout << n % 11;
        }
    }
}
```

## [P3519  今天星期几.cpp](./P3519  今天星期几.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include "iostream"

using namespace std;
int yyyy, mm, dd;

int main() {
    cin >> yyyy >> mm >> dd;
    // w=y+[y/4]+[c/4]-2c+[26(m+1)/10]+d-1
    if (mm == 1) {
        mm = 13;
        yyyy -= 1;
    } else if (mm == 2) {
        mm = 14;
        yyyy -= 1;
    }
    int c = yyyy / 100;
    yyyy %= 100;
    int w = (yyyy + (yyyy / 4) + (c / 4) - 2 * c + (26 * (mm + 1) / 10) + dd - 1) % 7;
    if (w == 0) cout << "Sun.";
    else if (w == 1) cout << "Mon.";
    else if (w == 2) cout << "Tue.";
    else if (w == 3) cout << "Wed.";
    else if (w == 4) cout << "Thu.";
    else if (w == 5) cout << "Fri.";
    else if (w == 6) cout << "Sat.";
}
```

## [P1806  数素数.cpp](./P1806  数素数.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include<iostream>
#include<cmath>
using namespace std;
bool p[999999999];
long long n, maxr, l[999999], r[999999], a[99999999];
int main(){
	cin >> n;
	p[2] = false;
	p[0] = p[1] = true;
	for (int i=1; i <= n; i++){
		cin >> l[i] >> r[i];
		maxr = max(maxr, r[i]);
	}
	for (int i=2; i <= ceil(sqrt(maxr)); i++){
		if (!p[i]){
			for (int j=2; i * j <= maxr; j++){
				p[i * j] = true;
			}
		}
	}
	for (int i=1; i <= maxr; i++){
		a[i] = a[i - 1] + !p[i];
	}
	for (int i=1; i <= n; i++){
		cout << a[r[i]] - a[l[i] - 1] << endl;
	}
}
```

## [P1278  拉手游戏.cpp](./P1278  拉手游戏.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
using namespace std;
bool a[1001];
int n,m,r,p,cnt;
int main(){
	cin>>n>>m;
	r=n;
	while(r > 1){
		// cout<<"in "<<p<<endl;
		p++;
		// cout<<a[p]<<endl;
		if (p > n) p = 1;
		if (!a[p]){
			cnt++;
			if (cnt == m){
				a[p] = true;
				r--;
				cnt=0; //黑历史 
			}
		}
	}
	for (int i=1; i <= n; i++){
		if (a[i] == false) cout<<i;
	}
}
```

## [P1071  对称排序.cpp](./P1071  对称排序.cpp):
```cpp
//Created in Fri Nov 11 13:59:27 2022
#include <iostream>

using namespace std;

int n, cnt;
string a[9999];

int main(){
    cin >> n;
    while(n != 0){
        cnt += 1;
        for (int i=1; i <= n; i++){
            cin >> a[i];
        }
        cout << "SET " << cnt << endl;
        for (int i=1; i <= n; i++){
            if (i % 2 == 1){
                cout << a[i] << endl;
            }
        }
        for (int i=n; i >= 1; i--){
            if (i % 2 == 0){
                cout << a[i] << endl;
            }
        }
        cin >> n;
    }
}
```

## [P1014  托运收费.cpp](./P1014  托运收费.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double weight, cost;
	cin>>weight;
	if (weight<=10){
		cout<<setprecision(2)<<fixed<<2.5;
	}
	else{
		cout<<setprecision(2)<<fixed<<2.5 + (weight - 10) * 1.5;
	}
}
```

## [P1017  小明的阶乘.cpp](./P1017  小明的阶乘.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	int n, ans=1;
	cin>>n;
	if (n % 2 == 0){
		n-=1;
	}
	while(!(n <= 1)){
		ans *= n;
		n -= 2;
	}
	cout<<ans;
}
```

## [P1090  牛记数.cpp](./P1090  牛记数.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include <iostream>

using namespace std;
int s, t, ans;

int to2(int x){
    int cnt = 0;
    while(x > 0){
        if (cnt < 4){
            cnt += x % 2;
            x /= 2;
        }else{
            return -1;
        }
    }
    return cnt;
}

int main(){
    cin >> s >> t;
    if (s > t){
        swap(s, t);
    }
    for (int i=s; i <= t; i++){
        if (to2(i) != -1){
            ans += 1;
        }
    }
    cout << ans;
}
```

## [P3134  数列.cpp](./P3134  数列.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include "iostream"
#include "iomanip"

using namespace std;
int n;
double ans,gn,fn;

double g(int x){
    double sum = 0;
    for (int i=1; i <= x; i++){
        if (i % 2 == 1){
            sum += 1.0 / double(i);
        }
    }
    // cout << sum << endl;
    return sum;
}

double f(int x){
    double sum = 0;
    for (int i=1; i <= x; i++){
        if (i % 2 == 0){
            sum += 1.0 / double(i);
        }
    }
    // cout << sum << endl;
    return sum;
}

int main(){
    cin >> n;
    fn = f(n);
    gn = g(n);
    ans = gn - fn;
    cout << setprecision(8) << fixed << ans <<endl;
}
```

## [P3532  时间转换.cpp](./P3532  时间转换.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
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
```

## [P1606  航班管理.cpp](./P1606  航班管理.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n - 1;
}
```

## [P1933  正方形.cpp](./P1933  正方形.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include "iostream"

using namespace std;
long long n, ans;
int main(){
    cin >> n;
    for (int i=1; i <= n; i ++){
        ans += (n - i + 1) * (n - i + 1);
    }
    cout << ans;
}
```

## [P3620  号码牌.cpp](./P3620  号码牌.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include<iostream>
using namespace std;
int n, x, ans[10];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		x = i;
		while (x > 0){
			ans[x % 10] += 1;
			x /= 10;
		}
	}
	for (int i=0; i <= 9; i++){
		cout << ans[i] << " ";
	}
}
```

## [P1627  中国剩余定理.cpp](./P1627  中国剩余定理.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
using namespace std;
int k, cnt, ans;
int main(){
    cin>>k;
    for (int i=1; i <= 2147483647; i++){
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
            cnt+=1;
        }
        if (cnt == k){
            cout<<i;
            return 0;
        }
    }
}
```

## [P1041  哥德巴赫猜想.cpp](./P1041  哥德巴赫猜想.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
#include<cmath>

using namespace std;

int n;

bool isprime(long long n){
    bool p = true;
    for (int i=2; i <= n; i++){
        if (n % i == 0 && n != i){
            p = false;
        }
    }
    return p;
}

int main(){
    cin>>n;
    for (int i=2; i < n; i++){
        if (isprime(i) && isprime(n - i) && i <= n-i){
            cout<<n<<"="<<i<<"+"<<n - i<<endl;
        }
    }
}
```

## [P1004  小明买箱子.cpp](./P1004  小明买箱子.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>

using namespace std;

int main(){
    double cm, inch;
    cin>>cm;
    inch = cm / 2.54;
    printf("%.2f\n", inch);
}
```

## [P4146  jy123的比赛.cpp](./P4146  jy123的比赛.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include "iostream"
using namespace std;
int n, jg, yx, in;
int main(){
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> in;
        if (in >= 60){
            jg += 1;
        }
        if (in >= 85){
            yx += 1;
        }
    }
    cout << int (double (jg * 100) / n + 0.5) << "%" << "\n" << int (double (yx * 100) / n + 0.5) << "%" << endl;
}
```

## [P1990  单数？双数？.cpp](./P1990  单数？双数？.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include "iostream"

using namespace std;
int n;
string in;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        if ((in[in.length() - 1] - '0') % 2 == 0){
            cout << "even" << endl;
        } else{
            cout << "odd" << endl;
        }
    }
}
```

## [P1878  连续自然数和.cpp](./P1878  连续自然数和.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
    	int sum = i;
    	int j = i;
		while(sum < n){
			j ++;
			sum += j;
		}
		if (sum == n && i != n && j != n){
			printf("%d %d\n", i, j);
			continue;
		}
	}
}
```

## [P1134  硬币问题.cpp](./P1134  硬币问题.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
using namespace std;
long long cnt, n, c1, c5, c10, c50, c100, c500;
int main(){
	cin >> c1 >> c5 >> c10 >> c50 >> c100 >> c500 >> n;
	while(n > 0){
		if (n >= 500 && c500){
			n -= 500;
			c500 -= 1;
		}else if (n >= 100 && c100){
			n -= 100;
			c100 -= 1;
		}else if (n >= 50 && c50){
			n -= 50;
			c50 -= 1;
		}else if (n >= 10 && c10){
			n -= 10;
			c10 -= 1;
		}else if (n >= 5 && c5){
			n -= 5;
			c5 -= 1;
		}else if (n >= 1 && c1){
			n -= 1;
			c1 -= 1;
		}
		cnt += 1;
	}
	cout << cnt;
}
```

## [P3529  超级加倍.cpp](./P3529  超级加倍.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include<iostream>
using namespace std;
string f(int n){
	if (n == 1){
		return "A";
	}
	return f(n - 1) + char (n + 'A' - 1) + f(n - 1);
}
int n;
int main(){
	cin >> n;
	cout << f(n);
}
```

## [P2564  切割纸张.cpp](./P2564  切割纸张.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
using namespace std;
int n, cnt, m, in, a[101], b[101];
bool s[102][102];

int main(){
	cin >> m >> n;
	for (int i=1; i <= m; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n; i++){
		cin >> b[i];
	}
	for (int i=1; i <= m; i++){
		for (int j=1; j <= n; j++){
			s[max(a[i], b[j])][min(a[i], b[j])] = true;
		}
	}
	for (int i=1; i <= 101; i++){
		for (int j=1; j <= 101; j++){
			if (s[i][j]){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}
```

## [P1069  不明飞行物.cpp](./P1069  不明飞行物.cpp):
```cpp
//Created in Fri Nov 11 13:59:27 2022
#include "iostream"

using namespace std;
int n, m;
string a, b;
int main(){
    cin >> a >> b;
    for (int i=0; i <= a.length() - 1; i++){
        if (n == 0){
            n = a[i] - '@';
        } else{
            n *= a[i] - '@';
        }
        // putchar(a[i]);
        n %= 47;
    }
    // putchar('\n');
    for (int i=0; i <= b.length() - 1; i++){
        if (m == 0){
            m = b[i] - '@';
        } else{
            m *= b[i] - '@';
        }
        // putchar(b[i]);
        m %= 47;
    }
    // putchar('\n');
    // cout << n << " " << m << endl;
    if (n == m){
        cout << "GO\nr1=r2=" << n;
    } else{
        cout << "STAY\nr1=" << n << " r2=" << m;
    }
}
```

## [P3513  梯形面积.cpp](./P3513  梯形面积.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include<iostream>
using namespace std;
int main(){
	int a,b,h;
	cin>>a>>b>>h;
	cout<<(a+b)*h/2;
}
```

## [P1064  填字游戏.cpp](./P1064  填字游戏.cpp):
```cpp
//Created in Fri Nov 11 13:59:26 2022
#include<iostream>
#include<algorithm>
using namespace std;
long long p = 1, r, c;
string n[9999];
char in;

bool cmp(string a, string b){
	if (a.size() < b.size()){
		return true;
	}
	if (a.size() > b.size()){
		return false;
	}
	if (a.size() == b.size()){
		for (long long i=0; i <= a.size(); i++){
			if (a[i] < b[i]){
				return true;
			}else if (a[i] > b[i]){
				return false;
			}
		}
	}
}

int main(){
	cin >> r >> c;
	getchar();
	for (int i=1; i <= r; i++){
		for (int j=1; j <= c + 1; j++){
			in = getchar();
			if (in == '#' || in == '\n'){
				p += 1;
			}else {
				n[p] += in;
			}
		}
		getchar();
	}
	sort(n, n + 9998, cmp);
	for (int i=0; i <= 9998; i++){
		if (n[i] != ""){
			cout << n[i] << endl;
			return 0;
		}
	}
}
```

## [P3722  奥运列队.cpp](./P3722  奥运列队.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"

using namespace std;
int n, t;
int main(){
    cin >> n;
    for (int i=1; i <= n - 3; i++){
        for (int j=1; j < i; j++){
            putchar(' ');
        }
        for (int j=1; j <= 6; j++){
            putchar('*');
        }
        for (int j=1; j <= (n - 2) * 2 - (2 * i); j++){
            putchar(' ');
        }
        for (int j=1; j <= 6; j++){
            putchar('*');
        }
        putchar('\n');
        t = i;
    }
    for (int i=t; i < n; i++){
        for (int j=1; j <= i; j++){
            putchar(' ');
        }
        if (n - i == 3){
            printf("************\n");
        } else if(n - i == 2){
            printf("**********\n");
        } else if(n - i == 1){
            printf("********\n");
        }
    }
}


//输出样例1：
//******      ******
//******    ******
//******  ******
//************
//**********
//********
//输出样例2：
//******          ******
//******        ******
//******      ******
//******    ******
//******  ******
//************
//**********
//********
//输出样例3：
//******              ******
//******            ******
//******          ******
//******        ******
//******      ******
//******    ******
//******  ******
//************
//**********
//********

//******  ******
// ************
//  **********
//   ********
```

## [P1850  喝醉的狱卒.cpp](./P1850  喝醉的狱卒.cpp):
```cpp
//Created in Fri Nov 11 13:59:41 2022
#include<iostream>
#include<cstring>

using namespace std;
int m, n, cnt;

int main() {
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cnt = 0;
        cin >> n;
        if (n == 1) {
            cout<<1<<endl;
            continue;
        }
        bool a[n + 1];
        memset(a, true, sizeof(a));
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (k % j == 0) a[k] = !a[k];
            }
        }
        for (int j = 0; j <= n; j++) {
            // cout<<a[j];
            if (!a[j]) cnt++;
        }
        cout << cnt << endl;
    }
}
```

## [P3534  选择计算.cpp](./P3534  选择计算.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include "iostream"
#include "cmath"

using namespace std;
long long prime[99999];
long long x, y, z, p;

long long gcd(long long n, long long m) {
    for (long long i = min(n, m); i > 1; i--) {
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
    return 1;
}

long long lcm(long long n, long long m) {
    return n * m / gcd(n, m);
}

bool isprime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i <= ceilf(sqrt(n)); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> x >> y >> z;
    if (z == 1) {
        for (long long i = 1; i <= x; i++) {
            if (isprime(i)) {
                prime[p] = i;
                p += 1;
            }
        }
        if (y >= p + 1) cout << prime[p - 1];
        else cout << prime[y - 2];
    } else if (z == 2) {
        cout << gcd(x, y);
    } else if (z == 3) {
        cout << lcm(x, y);
    }
}
```

## [P1697  数字王国的二等公民.cpp](./P1697  数字王国的二等公民.cpp):
```cpp
//Created in Fri Nov 11 13:59:38 2022
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i = 2; i <= n; i++){
		if (n % i == 0 && n != i){
			cout<<"YES";
			return 0;
		}else{
			continue;
		}
	}
	cout<<"NO";
}
```

## [P2172  计算并联电阻的阻值.cpp](./P2172  计算并联电阻的阻值.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include "iostream"
#include "iomanip"

using namespace std;

int main() {
    double r1, r2, r;
    cin >> r1 >> r2;
    r = 1 / (1 / r1 + 1 / r2);
    cout << setprecision(3) << fixed << r << endl;
}
```

## [P3970  月相.cpp](./P3970  月相.cpp):
```cpp
//Created in Fri Nov 11 14:00:00 2022
#include "iostream"
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b;
    if (b == 15){
        cout << 14 << endl;
    }else if (b == 0){
        cout << 1 << endl;
    }else if (a - b == -1){
        cout << (b + 1) << endl;
    }else if (a - b == 1){
        cout << (b - 1) << endl;
    }
}
```

## [P1798  数学天才的难题.cpp](./P1798  数学天才的难题.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
//#include <iostream>
//
//using namespace std;
//int cnt;
//string str;
//int main(){
//    cin >> str;
//    for (char i: str){
//        if (i == '1'){
//            cnt += 1;
//        }
//    }
//    cout << cnt;
//}

//#include <iostream>
//
//using namespace std;
//int x, y, k, a, b, xi, yi;
//int main(){
//    cin >> x >> y >> k;
//    for (int i=1; i <= k; i++){
//        cin >> a >> xi >> b >> yi;
//        x += a * xi;
//        y += b * yi;
//        if (x <= 0) x = 0;
//        if (y <= 0) y = 0;
//        if (x == y){
//            cout << i << endl;
//            return 0;
//        }
//    }
//    if (x == y){
//        cout << k << endl;
//        return 0;
//    }
//    cout << -1;
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int n, a[999999999];
//int main(){
//    cin >> n;
//    for (int i=1; i <= n; i++){
//        cin >> a[i];
//    }
//
//}

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//bool isprime(int n) {
//    if (n <= 1) return false;
//    if (n == 2) return true;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool is_pure_prime(int n) {
//    bool a[999999];
//    memset(a, false, sizeof a);
//    while (n > 0){
//        for (int i = 2; i * i <= n; i++) {
//            if (n % i == 0){
//                if (!isprime(i) || a[i]){
//                    return false;
//                }else{
//                    a[i] = true;
//                    n /= i;
//                }
//            }
//        }
//    }
//    return true;
//}
//
//int n;
//
//int main() {
//    cin >> n;
//    for (int i = 6; i <= n; i++) {
//        if (is_pure_prime(i)) {
//            cout << i << " ";
//        }
//    }
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//struct tao{
//    int height, sum, id;
//} t[99999999];
//bool cmp1(tao a, tao b){
//    return a.height > b.height;
//}
//bool cmp2(int a, int b){
//    return a > b;
//}
//bool cmp3(tao a, tao b){
//    return a.id < b.id;
//}
//int n, m, a[99999999];
//int main(){
//    cin >> n >> m;
//    for (int i=1; i <= n; i++){
//        cin >> a[i];
//    }
//    for (int i=1; i <= m; i++){
//        cin >> t[i].height;
//        t[i].id = i;
//    }
//    sort(a + 1, a + n + 1, cmp2);
//    sort(t + 1, t + m + 1, cmp1);
//    int p = 1;
//    for (int i=1; i <= n; i++){
//        t[p++].sum += a[i];
//        p %= m + 1;
//    }
//    sort(t + 1, t + m + 1, cmp3);
//    for (int i=1; i <= m; i++){
//        cout << t[i].sum << " ";
//    }
//}

#include<iostream>
#include<algorithm>

using namespace std;
int n, ans, maxn;
int a[99999999];

bool f(int lim) {
    int cur = 1;
    while (cur <= n) {
        int pos = lower_bound(a + cur, a + n + 1, a[cur - 1] + lim) - a;
        if (a[pos] != a[cur - 1] + lim) return false;
        cur = pos + 1;
    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        maxn = max(maxn, a[i]);
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        if (a[n] % a[i] != 0 || a[i] < maxn){
            continue;
        }
        if (f(a[i])) {
            ans = a[i];
            break;
        }
    }
    cout << ans;
}
```

## [P2580  报数游戏.cpp](./P2580  报数游戏.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
using namespace std;
int n, a1, cnt, a2, b1, b2;
int main(){
	cin >> n >> a1 >> a2;
	for (int i=1; i <= n; i++){
		if (b1 == b2){
			cnt += 1;
		}
		b1 += 1;
		b1 %= a1;
		b2 += 1;
		b2 %= a2;
	}
	cout << cnt;
}
```

## [P3642  汉诺塔.cpp](./P3642  汉诺塔.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include "iostream"
#include "cmath"

using namespace std;
int n;
int main(){
    cin >> n;
    if (n < 64){
        cout << (long long) (pow(2, n) - 1);
    }else{
        cout << "18446744073709551615";
    }
}
```

## [P3698  救灾.cpp](./P3698  救灾.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"

using namespace std;
int n,m, ai, cnt;
int main(){
    cin >> n >> m;
    for(int i=1; i <= n ; i++){
        cin >> ai;
        if (ai < m){
            cnt += 1;
        }
    }
    cout << cnt;
}
```

## [P3139  计算机.cpp](./P3139  计算机.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include<iostream>

using namespace std;
__int128 n,ans,in,in1;

inline __int128 read()
{
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch>'9'){
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9'){
        x = (x << 1) + (x << 3) + (ch - '0');
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x){
    if (x < 0){
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main() {
    n = read();
    ans = read();
    for (int i=1; i <= n -1 ; i++){
        in = read();
        in1 = read();
        if (in1 == 1){
            ans += in;
        }else if (in1  == 2){
            ans -= in;
        }else if (in1 == 3){
            ans *= in;
        }
    }
    print(ans);
}
```

## [P3707  统计奖牌.cpp](./P3707  统计奖牌.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"

using namespace std;
int n,a,b,c,maxa,maxb,maxc,maxsum;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a >>b >>c;
        if (a + b + c > maxsum) maxsum = a +b +c;
        if (a > maxa) maxa = a;
        if (b > maxb) maxb = b;
        if (c > maxc) maxc = c;
    }
    cout << maxsum << " " <<  maxa << " " <<  maxb << " " <<  maxc;
}
```

## [P2016  博物馆的密码.cpp](./P2016  博物馆的密码.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include <iostream>
#include <sstream>

using namespace std;

string toN(long long x, int n){
    string ret;
    while (x > 0){
        if (x % n >= 10){
            ret = char ((x % n) - 10 + 'A') + ret;
        }else{
            ret = char ((x % n) + '0') + ret;
        }
        x /= n;
    }
    return ret;
}

int digitSum(string a){
    int n = 0;
    while (a.length() > 0){
        if (a[0] > '9'){
            n += int (a[0] - 'A' + 10);
        }else {
            n += int (a[0] - '0');
        }
        a.erase(0, 1);
    }
    return n;
}

long long pwd;
string strPwd, pwd12, pwd16;

int main(){
    cin >> pwd;
    pwd12 = toN(pwd, 12);
    pwd16 = toN(pwd, 16);
    stringstream ss;
    ss.clear();
    ss << pwd;
    ss >> strPwd;
    cout << digitSum(pwd16) << endl;
    // cout << digitSum(pwd12) << " " << digitSum(pwd16) << " " << digitSum(strPwd) << endl;
    if (int (digitSum(pwd12)) == int (digitSum(pwd16)) && int (digitSum(pwd16)) == int (digitSum(strPwd))){
        cout << "Right";
        return 0;
    }
    cout << "Wrong";
}
```

## [P3700  山洞.cpp](./P3700  山洞.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"
#include "cstring"
#include "algorithm"

using namespace std;
int n;
int main(){
    cin >> n;
    int a[n + 1], b[n + 1];
    memset(a, 0, sizeof (a));
    memset(b, 0, sizeof (b));
    for (int i=1 ;i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n + 1);
    cout << a[n] << endl;
    for (int i=1; i <= n; i++){
        if (b[i] == a[n]){
            cout << i << " ";
        }
    }
}
```

## [P1068  笨小猴.cpp](./P1068  笨小猴.cpp):
```cpp
//Created in Fri Nov 11 13:59:27 2022
#include "iostream"
#include "cmath"

using namespace std;
string in;
int a[123];
int maxn, minn = 9999;
int main(){
    cin >> in;
    for (char i: in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] > maxn) {
            maxn = a[i];
        } else if(a[i] < minn && a[i] != 0){
            minn = a[i];
        }
    }
    if (maxn - minn < 2){
        cout << "No Answer\n0";
        return 0;
    } else{
        for (int i=2; i <= ceilf(sqrt(maxn - minn)); i++){
            if ((maxn - minn) % i == 0 && i != maxn - minn){
                cout << "No Answer\n0";
                return 0;
            }
        }
        cout << "Lucky Word\n" << maxn - minn;
        return 0;
    }
}
```

## [P2749  纸条.cpp](./P2749  纸条.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
#include<cmath>
using namespace std;
long long  a,b,t;
int main(){
	cin>>a>>b;
	for (short i=0; i <= 9; i++){
		if (abs((10 * a + i + 1) - (b * 10)) <= 9){
			cout<<"Yes";
			return 0;
		}else{
			continue;
		}
	}
	cout<<"No";
}
```

## [P3463  求n值.cpp](./P3463  求n值.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include "iostream"

using namespace std;
long long s, n, sum;
int main(){
    cin >> s;
    while(sum < s){
        n += 1;
        sum += n;
    }
    cout << n;
}
```

## [P1605  流感.cpp](./P1605  流感.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
using namespace std;
int main(){
	long long x,n,ans=1;
	cin>>x>>n;
	for (int i=n; i>0; i--){
		ans += ans*x;
	}
	cout<<ans;
}
```

## [P1387  二叉树的性质.cpp](./P1387  二叉树的性质.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
using namespace std;
int n, x, y;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> x >> y;
		int l, r;
		l = r = 0;
		cout << "Scenario #" << i << ":" << endl;
		while (x != 1 || y != 1){
			// cout << x << " " << y << endl;
			if (x < y){
				r += y / x;
				y %= x;
				if (!y){
					y += 1;
					r -= 1;
				}
			}else if (x > y){
				l += x / y;
				x %= y;
				if (!x){
					x += 1;
					l -= 1;
				}
			}
		}
		cout << l << " " << r << endl;
	}
}
```

## [P1054  合唱队形.cpp](./P1054  合唱队形.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include "iostream"
#include "cstring"
#include "algorithm"

using namespace std;
int n;
int main(){
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i=0; i < n; i++){
        if (i % 2 == 0){
            cout << a[i] << " ";
        }
    }for (int i=n - 1; i >= 1; i--){
        if (i % 2 == 1){
            cout << a[i] << " ";
        }
    }
}
```

## [P1075  扫雷.cpp](./P1075  扫雷.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
using namespace std;
char a[102][102];
int n, m, t;
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			t = 0;
			if (a[i][j] == '.'){
				if(a[i][j+1] == '*'){
					t += 1;
				}
				if (a[i][j-1] == '*'){
					t += 1;
				}
				if (a[i+1][j] == '*'){
					t += 1;
				}
				if (a[i-1][j] == '*'){
					t += 1;
				}
				if (a[i-1][j-1] == '*'){
					t += 1;
				}
				if (a[i-1][j+1] == '*'){
					t += 1;
				}
				if (a[i+1][j-1] == '*'){
					t += 1;
				}
				if (a[i+1][j+1] == '*'){
					t += 1;
				}
				a[i][j] = char (t + '0');
			}
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
}
```

## [P1018  立方和.cpp](./P1018  立方和.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	n = (1 + n)*n/2;
	n *= n;
	cout<<n;
}
```

## [P1107  军事机密.cpp](./P1107  军事机密.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, k, a[30001], in;

bool cmp(int a, int b){
	if (a < b){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a, a + n + 1, cmp);
	cin >> k;
	for (int i=1; i <= k; i++){
		cin >> in;
		cout << a[in] << endl;
	}
}
```

## [P1048  优美序列.cpp](./P1048  优美序列.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include "iostream"
#include "cstring"
#include "cmath"

using namespace std;

int n, in1, in2, j=1, cnt;
bool a[1000000];

int main() {
    while (cin >> n) {
        j++;
        cnt = 0;
        memset(a, false, sizeof(a));
        a[1] = true;
        cin >> in1 >> in2;
        if (abs(in1 - in2) < n) a[abs(in1 - in2)] = true;
        for (int i = 3; i <= n; i++) {
            // cout << abs(in1 - in2) << endl;
            in1 = in2;
            cin >> in2;
            if (abs(in1 - in2) < n) a[abs(in1 - in2)] = true;
        }
        for (int i = 1; i < n; i++) {
            // cout << a[i] << endl;
            if (a[i]) {
                cnt++;
            }
        }
        if (cnt == n-1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
```

## [P1501  数字三角形.cpp](./P1501  数字三角形.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
using namespace std;
int n;
int num = 1;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
        for (int ii=1; ii <= i; ii++){
            if (num == 10){
                num = 0;
            }
            cout<<num;
            num ++;
        }
        cout<<"\n";
    }
}
```

## [P1023  换座位.cpp](./P1023  换座位.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int in, act, time123, ans;
int main(){
	cin>>time123;
	for (act=1; act<=time123; act++){
		cin>>in;
		if (in != act){
			ans += 1;
		}
	}
	cout<<ans;
}
```

## [P2586  幻方.cpp](./P2586  幻方.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
using namespace std;
int a[5][5], n, m;
int main(){
	for (int i=1; i<= 3; i++){
		for (int j=1; j <= 3; j++){
			cin>> a[i][j];
		}
	}
	for (int i=1; i<= 3; i++){
		for (int j=1; j <= 3; j++){
			if (a[i][j] == -1){
				for (int k=1; k <= 3; k++){
					if (a[i][k] != -1){
						m += a[i][k];
					}
				}
				if (i == 1){
					n = a[2][1] + a[2][2] + a[2][3] - m;
				}else if (i == 2 || i == 3){
					n = a[i-1][1] + a[i-1][2] + a[i-1][3] - m;
				}
				cout << n;
				return 0;
			}
		}
	}
}
```

## [P1153  蜜蜂路线.cpp](./P1153  蜜蜂路线.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
long long n, m, a=1, b=1, c=1;

int main(){
	cin>>n>>m;
	for (int i=1; i <= m - n - 1; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}
```

## [P1027  分木块.cpp](./P1027  分木块.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
using namespace std;
int n, all[10085];
int ans1, ans10, ans100;
int main(){
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>all[i];
        ans100 += (all[i] - all[i] % 100) / 100;
        ans10 += ((all[i] - (all[i] - all[i] % 100)) - (all[i] - (all[i] - all[i] % 100)) % 10) / 10;
        ans1 += (all[i] - (all[i] - all[i] % 100) - ((all[i] - (all[i] - all[i] % 100)) - (all[i] - 
        (all[i] - all[i] % 100)) % 10)) - ((all[i] - (all[i] - all[i] % 100)) - (all[i] - (all[i] - all[i] % 100)) % 10) % 1 / 1;
    }
    cout<<ans100<<"\n"<<ans10<<"\n"<<ans1<<endl;
}
```

## [P2339  分岔路口.cpp](./P2339  分岔路口.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
using namespace std;
long long n, k;
long long f(int x){
	if (x <= k){
		return 1;
	}else if ((x - k) % 2 == 0){
		return (f((x + k) / 2) + f((x - k) / 2));
	}
	return 1;
}
int main(){
	cin >> n >> k;
	cout << f(n);
}
```

## [P1595  写作业.cpp](./P1595  写作业.cpp):
```cpp
//Created in Fri Nov 11 13:59:35 2022
#include "iostream"
using namespace std;
int n,x,y;
int main(){
    cin>>n>>x>>y;
    if (y % x == 0){
        cout << n - (y / x);
    }else {
        cout << n - (y / x) - 1;
    }
}
```

## [P3709  膜拜大神.cpp](./P3709  膜拜大神.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include<iostream>
using namespace std;
int x, a[9999], b[9999], n;
int main(){
	cin >> x;
	for (int i=1; i <= x; i++){
		cin >> a[i] >> b[i];
	}
	cin >> n;
	for (int i=1; i <= x; i++){
		if (a[i] >= b[i]){
			cout <<  "done\n";
		}else if (b[i] - a[i] > n){
			cout << "-1\n";
		}else{
			cout << b[i] - a[i] << endl;
		}
	}
}
```

## [P2469  ls采蘑菇：能力炸裂.cpp](./P2469  ls采蘑菇：能力炸裂.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include<iostream>
using namespace std;
int n, cnt, a[99999];

bool johc(int x, int y){
	if (x % 2 != y % 2){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
		if (johc(a[i - 1], a[i])){
			cout << i << " ";
			cnt += 1;
		}
	}
	cout << "\n" << cnt;
}
```

## [P2576  精挑细选.cpp](./P2576  精挑细选.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
#include<algorithm>
using namespace std;
struct pipe{
	unsigned long long length, thin, code;
} a[99999];

bool cmp(pipe a, pipe b){
	if (a.length < b.length){
		return false;
	}else if (a.length > b.length){
		return true;
	}else {
		if (a.thin > b.thin){
			return false;
		}else if (a.thin < b.thin){
			return true;
		}else {
			if (a.code < b.code){
				return false;
			}
			return true;
		}
	}
}
int n;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].length >> a[i].thin >> a[i].code;
	}
	sort(a + 1, a + n + 1, cmp);
	cout << a[1].code;
}
```

## [P3120  质因数分解.cpp](./P3120  质因数分解.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
#include<cmath>

using namespace std;
long long n;
int main(){
    cin >> n;
    for (long long i=2; i <= ceilf(sqrt(n)); i++){
        if (n % i == 0){
            cout << n / i;
            return 0;
        }
    }
}
```

## [P3526  选数.cpp](./P3526  选数.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
	if (n == 2){
		return true;
	}
	if (n % 2 == 0 || n < 2){
		return false;
	}
	for (int i=2; i <= ceil(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int n, a[2000], cnt;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n - 2; i++){
		for (int j=i; j <= n - 1; j++){
			for (int k=j; k <= n; k++){
				if (i != j && j != k){
					cnt += isprime(a[i] + a[j] + a[k]);
				}
			}
		}
	}
	cout << cnt;
}
```

## [P2330  数的计算.cpp](./P2330  数的计算.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
using namespace std;
int n, a[99999];
int count(int n){
	if (a[n]){
		return a[n];
	}
	if (n == 0){
		return 0;
	}
	int cnt = 0;
	for (int i = 0; i <= n / 2; i++){
		cnt += count(i);
	}
	cnt += 1;
	a[n] = cnt;
	return cnt;
}
int main(){
	cin >> n;
	cout << count(n);
}
```

## [P3496  田径赛.cpp](./P3496  田径赛.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include "iostream"

using namespace std;
double a, b, c;

int main() {
    cin >> a >> b >> c;
    if ((a + b + c) / 3 <= 8.3) {
        cout << "YES" << endl;
        return 0;
    } else cout << "NO" << endl;
}
```

## [P3701  商店.cpp](./P3701  商店.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"

using namespace std;
int n, m, danjia;

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        cin >> danjia;
        cout << n / danjia << endl;
    }
}
```

## [P1696  守形数.cpp](./P1696  守形数.cpp):
```cpp
//Created in Fri Nov 11 13:59:38 2022
#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for (int i=2; i <= n; i++){
		if (i*i % 10 == i 
		|| i*i / 10 % 10 * 10 + i*i % 10 == i
		|| i * i /100 % 10 * 100 + i*i / 10 % 10 * 10 + i*i % 10 == i){
			cout<<i<<" ";
		}
	}
}
```

## [P3688  摘苹果.cpp](./P3688  摘苹果.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include "iostream"

using namespace std;
int n,t,in,sum;
int main(){
    cin >> n >>t;
    for(int i=1; i <= n; i++){
        cin >> in;
        if (in > t){
            sum += in - t;
        }else {
            continue;
        }
    }
    cout << sum;
}
```

## [P1949  购物.cpp](./P1949  购物.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include "iostream"
#include "iomanip"
using namespace std;
double n;
int main(){
    cin >> n;
    if (n > 100){
        cout << setprecision(2) << fixed << 90 + (n - 100) * 0.6 << endl;
    } else{
        cout << setprecision(2) << fixed << n * 0.9 << endl;
    }
}
```

## [P3545  排队接水.cpp](./P3545  排队接水.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, a[999999], sum;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a, a + n + 1);
	for (int i=1; i <= n; i++){
		sum += a[i] * (n - i);
	}
	cout << sum;
}
```

## [P1804  数字序列.cpp](./P1804  数字序列.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include "iostream"

using namespace std;
int n, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i < 10) ans += 1;
        else if (i < 100) ans += 2;
        else if (i < 1000) ans += 3;
        else if (i < 10000) ans += 4;
        else if (i < 100000) ans += 5;
        else if (i < 1000000) ans += 6;
        else if (i < 10000000) ans += 7;
        else if (i < 100000000) ans += 8;
        else if (i < 1000000000) ans += 9;
    }
    cout << ans << endl;
}
```

## [P1120  机器人.cpp](./P1120  机器人.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
using namespace std;
int t, x, y, cnt;
string command;
int main(){
	cin >> command >> t;
	if (t > command.length()){
		while(cnt < command.length()){
			switch (command[cnt]){
			case 'E':{
					x = x;
				y += 1;
					break;
				}
				case 'S':{
				x -= 1;
					y = y;
					break;
				}
				case 'N':{
					x += 1;
					y = y;
					break;
				}
				case 'W':{
					x = x;
					y -= 1;
					break;
				}
			}
			cnt += 1;
		}	
		cnt = 0;
	}
	x *= t / command.length();
	y *= t / command.length();
	t %= command.length();
	while(cnt < t){
		// cout << command[cnt % command.length()];
		switch (command[cnt % command.length()]){
			case 'E':{
				x = x;
				y += 1;
				break;
			}
			case 'S':{
				x -= 1;
				y = y;
				break;
			}
			case 'N':{
				x += 1;
				y = y;
				break;
			}
			case 'W':{
				x = x;
				y -= 1;
				break;
			}
		}
		cnt += 1;
	}
	cout << y << " " << x;
}
```

## [P1145  汽车加油.cpp](./P1145  汽车加油.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
int n, k, tmp, cnt, a;
int main(){
	cin >> n >> k;
	for (int i=1; i <= k + 1; i++){
		cin >> a;
		if (tmp > n){
			cout << "No Solution\n";
			return 0;
		}
		if (tmp + a > n){
			cnt += 1;
			tmp = 0;
		}
		tmp += a;
	}
	cout << cnt;
}
```

## [P3514  程序判断.cpp](./P3514  程序判断.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include<iostream>
using namespace std;
int n,score,target,timein,rtime;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>score>>target>>timein>>rtime;
		while(score > target){
			score /= 10;
		}
		if (rtime > timein) cout<<"Time Limit Exceeded"<<endl;
		else if (score < target) cout<<"Wrong Answer"<<endl;
		else if (score == target) cout<<"Accepted"<<endl;
	}
}
```

## [P3509  选裙子.cpp](./P3509  选裙子.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include "iostream"
using namespace  std;
int n, m, t, ans;
int main(){
    cin >> n >> m >> t;
    ans = m + t - 1;
    if (ans > n && ans % n != 0){
        cout << ans % n << endl;
    }else if (ans % n == 0){
        cout << n << endl;
    }else cout << ans << endl;
}
```

## [P3795  红色.cpp](./P3795  红色.cpp):
```cpp
//Created in Fri Nov 11 14:00:00 2022
#include<iostream>
using namespace std;
int a,b;

unsigned long long gcd(unsigned long long n, unsigned long long m){
    for (unsigned long long i=min(n, m); i > 0; i--){
		if (n % i == 0 && m % i == 0){
            return i;
        }
	}
}

unsigned long long lcm(unsigned long long n, unsigned long long m){
    return n * m / gcd(n , m) ;
}

int main(){
    cin>>a>>b;
    unsigned long long _gcd = gcd(a, b);
    unsigned long long _lcm = lcm(a, b);
    unsigned long long ans = _gcd ^ _lcm;
    cout<<ans;
}
```

## [P1003  小明的时间.cpp](./P1003  小明的时间.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>

using namespace std;

int main(){
    int a, h, m, s;
    cin>>h>>m>>s;
    a = (h * 60 *60) + (m * 60) + s;
    cout<<a;
}
```

## [P1057  排队.cpp](./P1057  排队.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
using namespace std;
int n, a[121], in, cnt;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cnt = 0;
		cin >> in;
		a[in] += 1;
		for (int j=in + 1; j <= 120; j++){
			cnt += a[j];
		}
		cout << cnt << " ";
	}
}
```

## [P3464  求n值2.cpp](./P3464  求n值2.cpp):
```cpp
//Created in Fri Nov 11 13:59:51 2022
#include "iostream"

using namespace std;
int s, n, sum;
int main(){
    cin >> s;
    while(sum < s){
        n += 2;
        sum += n * n;
    }
    cout << n - 2;
}
```

## [P1837  敲七.cpp](./P1837  敲七.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include<iostream>
#include<cmath>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i=7; i <= n; i++){
        if (i % 7 == 0)
        {
            cout<<i<<"\n";
        }else{
            for (int ii=0; ii<=9; ii++){
                if (i / (long long)pow(10, ii) % 10 == 7){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
        
    }
}
```

## [P3133  数列总和.cpp](./P3133  数列总和.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
using namespace std;
long long a,b,k,w,ans;
int main(){
    cin>>a>>b>>k;
    ans += a+b;
    for (int i=1; i <= k - 2; i++){
        w = a+b;
        // cout<<w<<endl;
        a = b;
        b = w;
        ans += w;
    }
    cout<<ans<<endl;
}
```

## [P2757  数字游戏.cpp](./P2757  数字游戏.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include <iostream>

using namespace std;
int cnt;
string str;
int main(){
    cin >> str;
    for (char i: str){
        if (i == '1'){
            cnt += 1;
        }
    }
    cout << cnt;
}
```

## [P3704  乔本的训练考核.cpp](./P3704  乔本的训练考核.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"

using namespace std;
int score;

int main() {
    cin >> score;
    if (score >= 90) cout << "PERFECT" << endl;
    else if (score >= 80) cout << "EXCELLENT" << endl;
    else if (score >= 70) cout << "GOOD" << endl;
    else if (score >= 60) cout << "PASS" << endl;
    else cout << "FAIL" << endl;
}
```

## [P1500  机器翻译.cpp](./P1500  机器翻译.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
#include<deque>
using namespace std;
int n, m, x, cnt;
deque<int> dq;
int main(){
	cin >> m >> n;
	for (int i=1; i <= n; i++){
		cin >> x;
		bool p = false;
		for (int i=0; i < dq.size(); i++){
			if (dq.at(i) == x){
				p = true;
				break;
			}
		}
		if (!p){
			cnt += 1;
			if (dq.size() >= m){
				dq.pop_front();
			}
			dq.push_back(x);
		}
	}
	cout << cnt;
}
```

## [P1166  分形.cpp](./P1166  分形.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
bool a[9999][9999];
void fractal(int k, int x, int y){
	int t;
	if(k == 1){
		a[x][y] = true;
		return;
	}
	t = pow(3, k - 2);
	fractal(k - 1, x, y);
	fractal(k - 1, x + 2 * t, y);
	fractal(k - 1, x + t, y + t);
	fractal(k - 1, x, y + 2 * t);
	fractal(k - 1, x + 2 * t, y + 2 * t);
	return;
}
int n;
int main(){
	while (true){
		cin >> n;
		if(n == -1){
			return 0;
		}
		memset(a, 0, sizeof a);
		fractal(n, 1, 1);
		for(int i=1; i <= pow(3, n - 1); i++){
			for(int j=1; j <= pow(3, n - 1); j++){
				if(a[i][j]){
					cout << "X" ;
				}else{
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << "-" << endl;
	}
}
```

## [P2563  细分线条.cpp](./P2563  细分线条.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include "iostream"
using namespace std;
bool p;
int n, max_, ans;
int a[10000000];
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a[i];
        if (a[i] > max_) max_ = a[i];
    }
    for (int i=1; i <= max_; i++){
        p = true;
        for (int j=1; j <= n; j++){
            if (a[j] % i != 0){
                p = false;
            }
        }
        if (p){
            ans = i;
        }
    }
    cout << ans << endl;
}
```

## [P1155  铺地砖.cpp](./P1155  铺地砖.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
long long n, a[999999];
int main(){
	cin >> n;
	a[1] = 1;
	a[2] = 3;
	for (int i=3; i <= n; i++){
		a[i] = a[i - 1] + a[i - 2] * 2;
	}
	cout << a[n];
}
```

## [P2569  求数位上的数字.cpp](./P2569  求数位上的数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
using namespace std;
int n,k,power=1;
int main(){
    cin>>n>>k;
    for (int i=0; i < k; i++){
        power *= n;
        power %= 100;
    }
    cout<<power/10%10<<" "<<power%10;
}
```

## [P2468  ls采蘑菇：均衡.cpp](./P2468  ls采蘑菇：均衡.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include<iostream>
using namespace std;
int n, l, r, in;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in % 2 == 0){
			r += in;
		}else{
			l += in;
		}
	}
	cout << l << " " << r;
}
```

## [P1597  圣经数.cpp](./P1597  圣经数.cpp):
```cpp
//Created in Fri Nov 11 13:59:35 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n, tmp, ans;
int main(){
	cin>>n;
	while(n != 153){
		for (int i=0; i < 5; i++){
			tmp += (long long)pow(n / (long long)pow(10, i) 
			% 10, 3);
		}
		n = tmp;
		tmp = 0;
		ans += 1;
	}
	cout<<ans;
}
```

## [P1052  巧妙填数.cpp](./P1052  巧妙填数.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
#include<cstring>

using namespace std;
int a[10], b, c, d, x;
bool e[10], p;

int main() {
    for (int i = 123; i < 333; i++) {
        p = true;
        b = i;
        c = i * 2;
        d = i * 3;
        memset(e, false, sizeof(e));
        a[1] = b % 10;
        a[2] = b / 10 % 10;
        a[3] = b / 100;
        a[4] = c % 10;
        a[5] = c / 10 % 10;
        a[6] = c / 100;
        a[7] = d % 10;
        a[8] = d / 10 % 10;
        a[9] = d / 100;
        for (int j = 1; j <= 9; j++) {
            e[a[j]] = true;
        }
        for (int j = 1; j <= 9; j++) {
            if (!e[j]) p=false;
        }
        if (p) cout << b << " " << c << " " << d << endl;
    }
}
```

## [P2463  F2拉力赛.cpp](./P2463  F2拉力赛.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include "iostream"
using namespace std;
bool p,t;
int n,a[99999],b[99999],cnt,suma,sumb;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        suma = a[i];
        sumb = b[i];
    }
    for (int i=1; i < n; i++){
        if (a[i] < b[i]){
            p = false;
        }else{
            p=true;
        }
        if (a[i+1] < b[i+1]){
            t = false;
        }else{
            t=true;
        }
        if (p != t) cnt += 1;
    }
    if (suma > sumb) {
        cout << "peiqi" << endl;
    } else if (sumb > suma) {
        cout << "aimili" << endl;
    }
    cout << cnt << endl;
}
```

## [P3527  幂.cpp](./P3527  幂.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include<iostream>
using namespace std;
int n;
int pow(int a, int b){
	if (b == 0){
		return 1;
	}
	register int ans = 1;
	for (int i=1; i <= b; i++){
		ans *= a;
	}
	return ans;
}
int main(){
	cin >> n;
	while (n > 0){
		for (int i=16; i >= 0; i--){
			register int tmp = pow(2, i);
			if (tmp <= n){
				n -= tmp;
				cout << "2 " << i << endl;
			}
		}
	}
}
```

## [P1031  玫瑰花数.cpp](./P1031  玫瑰花数.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
using namespace std;
int main(){
	for (int i=1000; i<10000; i++){
		if ((i/1000%10)*(i/1000%10)*(i/1000%10)*(i/1000%10)+(i/100%10)*(i/100%10)*(i/100%10)*(i/100%10) + (i/10%10)*(i/10%10)*(i/10%10)*(i/10%10) + (i/1%10)*(i/1%10)*(i/1%10)*(i/1%10) == i){
			cout<<i<<endl;
		}
	}
}
```

## [P2579  乘车费用.cpp](./P2579  乘车费用.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include "iostream"
#include "iomanip"

using namespace std;
double n, m, ans;

int main() {
    cin >> n >> m;
    if (n > 0) {
        if (n <= 2) {
            ans = 6;
        } else if (n >= 10) {
            ans = 6 + 8 * 1.8 + (n - 10) * 1.8 * 1.5;
        } else {
            ans = 6 + (n - 2) * 1.8;
        }
        if (m >= 3) {
            ans += int(m) / 3;
        }
        cout << setprecision(1) << fixed << ans << endl;
    } else cout << setprecision(1) << fixed << double (0) << endl;

}
```

## [P1626  中间数.cpp](./P1626  中间数.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include "iostream"
#include "algorithm"

using namespace std;
int n, a[30001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    if (n % 2 == 0) {
        cout << (a[n / 2] + a[n / 2 + 1]) / 2;
    } else {
        cout << a[n / 2 + 1];
    }
}
```

## [P1105  明明的随机数.cpp](./P1105  明明的随机数.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include "iostream"
#include "cstring"

using namespace std;
int n, in, cnt;
bool a[1001];
int main(){
    cin >> n;
    int b[n];
    memset(b, 0, sizeof b);
    for (int i=1; i <= n; i++){
        cin >> in;
        a[in] = true;
    }
    for (int i=1; i <= 1000; i++){
        if (a[i]){
            cnt += 1;
        }
    }
    cout << cnt << endl;
    for (int i=1; i <= 1000; i++){
        if (a[i]){
            cout << i << " ";
        }
    }
}
```

## [P1600  数1的个数.cpp](./P1600  数1的个数.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
using namespace std;
int n,t,cnt;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		t = i;
		while (t > 0){
			if (t % 10 == 1){
				cnt ++;
			}
			t /= 10;
		}
	}
	cout<<cnt;
}
```

## [P3568  三角形.cpp](./P3568  三角形.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include<iostream>
using namespace std;
long long n,ans,ans1;
int main(){
	cin>>n;
	ans = 1;
	ans1 = 3;
	for (int i=2; i <= n; i++){
		ans += i * 2 - 1;
		ans1 += i * 3;
	}
	cout<<ans<<"\n"<<ans1<<endl;
}
```

## [P1084  数字的根.cpp](./P1084  数字的根.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
#include<sstream>
using namespace std;
string in;
int root(string str){
	int p = 0, sum = 0;
	string arg;
	while (p < str.length()){
		sum += str[p++] - '0';
	}
	if (sum / 10 == 0){
		return sum;
	}
	stringstream ss;
	ss.clear();
	ss << sum;
	ss >> arg;
	return root(arg);
}
int main(){
	cin >> in;
	while(in != "0"){
		cout << root(in) << endl;
		cin >>in; 
	}
}
```

## [P1006  找零钱.cpp](./P1006  找零钱.cpp):
```cpp
//Created in Fri Nov 11 13:59:20 2022
#include<iostream>

using namespace std;

int main(){
    int origin, got;
    cin>>got>>origin;
    if (got >= origin){
        cout<<(got - origin)<<"\n";
    }
    else{
        cout<<"Not Enough!"<<"\n";
    }
}
```

## [P1035  寻找2的幂.cpp](./P1035  寻找2的幂.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n;
long long tmp = 9999999999999999;
long long ans;
int main(){
	cin>>n;
	for (int i=0; i <= (int)sqrt(n) + 1; i++){
		if (abs(n - pow(2, i)) < tmp){
			tmp = abs(n - pow(2, i));
			ans = pow(2, i);
		}
	}
	cout<<ans;
}
```

## [P3777  好数组.cpp](./P3777  好数组.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
#include<iostream>
#include<algorithm>
using namespace std;

bool isGood(int a[], int n){
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i + 1] - a[i] > 1){
			return false;
		}
	}
	return true;
}

int t, n, a[100];
int main(){
	cin >> t;
	for (int i=1; i <= t; i++){
		cin >> n;
		for (int j=1; j <= n; j++){
			cin >> a[j];
		}
		if (isGood(a, n)){
			cout << "YES\n";
		}else {
			cout << "NO\n";
		}
	}
}
```

## [P3595  蒙氏数学难题.cpp](./P3595  蒙氏数学难题.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include "iostream"
using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    cout<<n+m;
}
```

## [P3567  立方和.cpp](./P3567  立方和.cpp):
```cpp
//Created in Fri Nov 11 13:59:54 2022
#include "iostream"
#include "cmath"

using namespace std;
int n, ans, t;
int main(){
    cin >> n;
    ans = int (pow(n % 10, 3)
               + pow(n / 10 % 10, 3)
               + pow(n / 100 % 10, 3));
    for(int i=1; i <= 100000; i++){
        t = ans;
        ans = int (pow(ans % 10, 3)
                   + pow(ans / 10 % 10, 3)
                   + pow(ans / 100 % 10, 3));
        if (ans == t){
            cout << t;
            return 0;
        }
    }
    cout << "error" << endl;
}
```

## [P2702  正方形.cpp](./P2702  正方形.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int n,m;
double a,mf,g;

double lengh(int n, int m){
    double lengh_ = m;
    for (int i=1; i < ceilf(n / 4.0); i ++){
        lengh_ = sqrt(2 * pow(lengh_ / 2.0, 2));
    }
    return lengh_;
}

int main(){
    cin>>n>>m;
    for (int i=1; i <= 4 * m; i+=1){
        if (i % 3 == 0){
            g += lengh(i, n);
        }else if (i % 3 == 1){
            a += lengh(i, n);
        }else if(i % 3 == 2){
            mf += lengh(i, n);
        }
    }
    cout<<setprecision(3)<<fixed<<a<<" "<<mf<<" "<<g<<endl;
}
```

## [P3716  小 V 排队.cpp](./P3716  小 V 排队.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"

using namespace std;
int n, in, sum, tmpsum;
int main(){
    cin >> n;
    for(int i=1; i <= n ; i++){
        cin >> in;
        sum += in;
        tmpsum += in;
        if (tmpsum >= 30){
            sum += 10;
            tmpsum -= 30;
        }
    }
    cout << sum;
}
```

## [P1612  选裙子.cpp](./P1612  选裙子.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
using namespace std;
int n,m,sum;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>m;
		sum += m;
	}
	if (sum % n == 0) cout<<n<<endl;
	else cout<<sum % n<<endl;
}
```

## [P1119  黑色星期五.cpp](./P1119  黑色星期五.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
using namespace std;
int n, ans[8], days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, day = 0;
int main(){
	cin >> n;
	for (int i=1900; i <= 1900 + n - 1; i++){
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			days[2] = 29;
		}else {
			days[2] = 28;
		}
		for (int j=1; j <= 12; j++){
			for (int t=1; t <= days[j]; t++){
				day += 1;
				if (day > 7){
					day = 1;
				}
				if (t == 13) ans[day] += 1;
			}
		}
	}
	cout << ans[6] << " " << ans[7] << " ";
	for (int i=1; i <= 5; i++){
		cout << ans[i] << " ";
	}
}
```

## [P1709  加法器.cpp](./P1709  加法器.cpp):
```cpp
//Created in Fri Nov 11 13:59:38 2022
#include<iostream>
using namespace std;
int exp, exp1;
int main(){
	while(true){
		cin>>exp>>exp1;
		if (exp == 0 && exp1 == 0){
			break;
		}else{
			cout<<exp+exp1<<endl;
		}
	}
}
```

## [P1081  字母统计.cpp](./P1081  字母统计.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include "iostream"

using namespace std;
int n;
string in;

string read(){
    char a;
    string ret = "";
    while (true){
        a = getchar();
        if (a == '#'){
            return ret;
        } else{
            ret += a;
        }
    }
}

int main(){
    in = read();
    for (char i: in){
        if (i == 'b' || i == 'B' || i == 'm' || i == 'M'){
            n += 1;
        }
    }
    cout << n;
}
```

## [P1091  完全数.cpp](./P1091  完全数.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include <iostream>
#include <cmath>

using namespace std;
int x, y;
bool p;

void out16(int n) {
    int temp;
    string out = "";
    while (n > 0) {
        temp = n % 16;
        if (temp < 10) {
            out = char(temp + '0') + out;
        } else {
            out = char(temp + '7') + out;
        }
        n /= 16;
    }
    cout << out << " ";
}

bool isPerfectNum(int n) {
    int sum = 0, m = n;
    for (int i=2; i <= floor(sqrt(n)); i++){
        if (n % i == 0){
            sum += i;
            sum += n / i;
            continue;
        }
    }
    if (sum + 1 == m){
        return true;
    } else{
        return false;
    }
}

int main() {
    cin >> x >> y;
    if (x > y) {
        swap(x, y);
    }
    for (int i = x; i <= y; i++) {
        if (isPerfectNum(i)) {
            out16(i);
            p = true;
        } else {
            continue;
        }
    }
    if (!p){
        cout << "no" << endl;
    }
}
```

## [P3492  宇宙速度.cpp](./P3492  宇宙速度.cpp):
```cpp
//Created in Fri Nov 11 13:59:51 2022
#include "iostream"

using namespace std;
long long v;

int main() {
    cin >> v;
    if (v >= 2000000) {
        cout << v << " " << 12345 << endl;
        return 0;
    } else if (v >= 115000) {
        cout << v << " " << 1234 << endl;
        return 0;
    } else if (v >= 16700) {
        cout << v << " " << 123 << endl;
        return 0;
    } else if (v >= 11200) {
        cout << v << " " << 12 << endl;
        return 0;
    } else if (v >= 7960) {
        cout << v << " " << 1 << endl;
        return 0;
    } else{
        cout << v << " " << 0 << endl;
        return 0;
    }
}
```

## [P1049  游戏.cpp](./P1049  游戏.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include "iostream"

using namespace std;
int n, m, k, a[101], cntplcm, b[101], cnt;

int lcm(int x, int y){
    for (int i=min(x, y); i <= x * y; i++){
        if (i % x == 0 && i % y == 0){
            return i;
        }
    }
    return 0;
}

int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i=0; i < m; i++){
        cin >> b[i];
    }
//    for (int i=0; i < n + m; i++){
//        cout << a[i] << " ";
//    }
//    cout << endl;
    int lcm_ = lcm(n, m);
    for (int i = 0; i < lcm_; i++) {
        if (((a[i % n] == 1 && b[i % m] == 2)
             || (a[i % n] == 2 && b[i % m] == 3)
             || (a[i % n] == 3 && b[i % m] == 1))
            && a[i % n] != 0 && b[i % m] != 0) {
            cntplcm += 1;
        }
        // cout << a[i % n] << "\t" << b[i % m] << "\t" << i + 1 << endl;
    }
    cnt = (k - k % lcm_) / lcm_ * cntplcm;
    for (int i=0; i < k % lcm_; i++){
        if (((a[i % n] == 1 && b[i % m] == 2)
             || (a[i % n] == 2 && b[i % m] == 3)
             || (a[i % n] == 3 && b[i % m] == 1))
            && a[i % n] != 0 && b[i % m] != 0) {
            cnt += 1;
        }
    }
    cout << cnt << endl;
}

//
//#include "iostream"
//
//using namespace std;
//int n, m, k, a[101], cnt, b[101];
//
//int main() {
//    cin >> n >> m >> k;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for (int i=0; i < m; i++){
//        cin >> b[i];
//    }
////    for (int i=0; i < n + m; i++){
////        cout << a[i] << " ";
////    }
////    cout << endl;
//    for (long long i = 0; i < k; i++) {
//        if (((a[i % n] == 1 && b[i % m] == 2)
//             || (a[i % n] == 2 && b[i % m] == 3)
//             || (a[i % n] == 3 && b[i % m] == 1))
//            && a[i % n] != 0 && b[i % m] != 0) {
//            cnt += 1;
//        }
//        // cout << a[i % n] << "\t" << b[i % m] << "\t" << i + 1 << endl;
//    }
//    cout << cnt << endl;
//}
```

## [P2570  for语句的考验.cpp](./P2570  for语句的考验.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
using namespace std;
int n,sum;
int main(){
	cin>>n;
	if (n % 2 == 1){
		for (int i = n-1; i > 0; i-=2){
			sum += i;
		}
	}else{
		for (int i=1; i <= n; i++){
			if (n % i == 0){
				sum += i;
			}
		}
	}
	cout<<sum;
}
```

## [P1866  密室寻宝.cpp](./P1866  密室寻宝.cpp):
```cpp
//Created in Fri Nov 11 13:59:41 2022
#include<iostream>
using namespace std;
unsigned short p, q, n, cnt;
int main(){
	cin >> p >> q;
	n = p & q;
	for (int i=1; i <= 8; i++){
		if (n & 1){
			cout << i << " ";
			cnt += 1;
		}
		n >>= 1;
	}
	if (cnt >= 2){
		cout << endl << "Yes";
	}else if (cnt == 1){
		cout << endl << "NO";
	}else{
		cout << "0" << endl << "NO";
	}
}
```

## [P3717  小 V 的第一次面试.cpp](./P3717  小 V 的第一次面试.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include<iostream>
using namespace std;
int main(){
	long long a, b;
	cin>>a>>b;
	cout<<a*b-a+b;
}
```

## [P1062  排座位.cpp](./P1062  排座位.cpp):
```cpp
//Created in Fri Nov 11 13:59:26 2022
#include<iostream>
using namespace std;
int r, c, n, in, a[102][102], cnt = 1;
int main(){
	cin >> r >> c >> n;
	for (int i=1; i <= r; i++){
		if (i % 2 == 1){
			for (int j=1; j <= c; j++){
				a[i][j] = cnt;
				cnt += 1;
			}
		}else{
			for (int j=c; j >= 1; j--){
				a[i][j] = cnt;
				cnt += 1;
			}
		}
	}
//	for (int i=1; i <= r; i++){
//		for (int j=1; j <= c; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
	for (int i=1; i <= n; i++){
		cin >> in;
		for (int j=1; j <= r; j++){
			for (int k=1; k <= c; k++){
				if (a[j][k] == in){
					cout << j << " " << k << endl;
					break;
				}
			}
		}
	}
}
```

## [P2381  序列.cpp](./P2381  序列.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include<iostream>
#include<deque>
using namespace std;
int n, a;
bool p;
deque<int> dq;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a;
		if (p){
			dq.push_back(a);
		}else{
			dq.push_front(a);
		}
		p = !p;
	}
	if (p){
		while (!dq.empty()){
			cout << dq.front() << " ";
			dq.pop_front();
		}
	}else {
		while (!dq.empty()){
			cout << dq.back() << " ";
			dq.pop_back();
		}
	}
}
```

## [P1131  分数拆分.cpp](./P1131  分数拆分.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include <iostream>
using namespace std;
int k, n, t;
int main(){
	cin >> k;
	for(int i = k + 1; i <= 2 * k; i++){
		t = 0;
		if(k * i % (i - k) == 0){
			n = k * i / (i - k);
			t = 1;
			cout<< "1/" << k << "=" << "1/" << i << "+1/" << n << endl;
		} 
	}
}
```

## [P1795  十进制转二进制.cpp](./P1795  十进制转二进制.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include<iostream>
using namespace std;
bool p=false;
int n,i,a[1000];
int main(){
	cin>>n;
	while (n > 0){
		a[i] = n % 2;
		i ++;
		n /= 2;
	}
	for (int i=999; i >= 0; i--){
		// cout<<p<<endl;
		if (a[i] == 0 && !p) continue;
		else p = true;
		if (p) cout<<a[i];
	}
}
```

## [P1654  验证数独.cpp](./P1654  验证数独.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include <iostream>
#include <cstring>

using namespace std;
int a[11][11], n;

bool check() {
    bool l[10];
    memset(l, 0, sizeof l);
    for (int i = 1; i <= 9; i++) {
        memset(l, 0, sizeof l);
        for (int j = 1; j <= 9; j++) {
            if (l[a[i][j]]) {
                return false;
            } else {
                l[a[i][j]] = true;
            }
        }
    }
    for (int i = 1; i <= 9; i++) {
        memset(l, 0, sizeof l);
        for (int j = 1; j <= 9; j++) {
            if (l[a[j][i]]) {
                return false;
            } else {
                l[a[j][i]] = true;
            }
        }
    }
    memset(l, 0, sizeof l);
    for (int i = 1; i <= 1; i += 3) {
        memset(l, 0, sizeof l);
        for (int j = i; j <= i + 2; j++) {
            for (int k = i; k <= i + 2; k++) {
                // cout << l[a[j][k]] << endl;
                if (l[a[j][k]]){
                    // cout << j << " " << k << " " << a[j][k] << " " << i << endl;
                    return false;
                }else{
                    l[a[j][k]] = true;
                    continue;
                }
            }
        }
    }
    return true;
}

void getData() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        getData();
        if (check()) {
            cout << "Right\n";
        } else {
            cout << "Wrong\n";
        }
    }
}
//
//#include "iostream"
//int main(){
//    int n = 10 xor 10;
//    std::cout << n;
//}
```

## [P3137  拍掌.cpp](./P3137  拍掌.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include<iostream>
using namespace std;
unsigned long long n, ans;
int main(){
	cin>>n;
	ans = (n / 2.0) * (n - 3);
	cout<<ans;
}
```

## [P1724  特别的十进制数.cpp](./P1724  特别的十进制数.cpp):
```cpp
//Created in Fri Nov 11 13:59:39 2022
#include<iostream>
using namespace std;
long long in;

int dSum10(int n){
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int dSum16(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 16;
		n /= 16;
	}
	return sum;
}

int main(){
	cin >> in;
	cout << dSum16(in) << endl;
	if (dSum10(in) == dSum16(in)){
		cout << "Yes";
	}else{
		cout << "No";
	}
}
```

## [P1963  公鸡打鸣.cpp](./P1963  公鸡打鸣.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include <iostream>
using namespace std;
int x, y, k, a, b, xi, yi;
int main(){
    cin >> x >> y >> k;
    if(x == y){
        cout<< 0 <<endl;
        return 0;
    }
    for (int i=1; i <= k; i++){
        cin >> a >> xi >> b >> yi;
        x += a * xi;
        y += b * yi;
        if (x <= 0) x = 0;
        if (y <= 0) y = 0;
        if (x == y){            
            cout << i << endl;            
            return 0;       
        }
    }
    cout << -1;
}
```

## [P1139  纪念品分组.cpp](./P1139  纪念品分组.cpp):
```cpp
//Created in Fri Nov 11 13:59:30 2022
#include<iostream>
#include<algorithm>
using namespace std;
bool p[100000000];
int w, n, cnt, pi[100000000], leftP, rightP;
int main(){
	cin >> w >> n;
	leftP = 1;
	rightP = n;
	for (int i=1; i <= n; i++){
		cin >> pi[i];
	}
	sort(pi + 1, pi + n + 1);
	while(leftP <= rightP){
		cnt += 1;
		if(pi[leftP] + pi[rightP] <= w){
			leftP += 1;
			rightP -= 1; 
		}else{
			rightP -= 1;	
		}
	}
	cout << cnt;
}
```

## [P2467  ls采蘑菇：灵兽.cpp](./P2467  ls采蘑菇：灵兽.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include<iostream>
using namespace std;
int x, y, cnt;
int main(){
	cin >> x >> y;
	while(x <= y){
		cnt += 1;
		x *= 2;
	}
	cout << cnt + 1;
}
```

## [P1288  时间旅行.cpp](./P1288  时间旅行.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<stack>
using namespace std;
stack<int> s[80002];
long long n;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		char c;
		long long x;
		cin >> c;
		if (c == 's'){
			s[i] = s[i - 1];
			s[i].pop();
			if (s[i].empty()){
				cout << -1 << endl;
			}else {
				cout << s[i].top() << endl;
			}
		}else if (c == 't'){
			cin >> x;
			s[i] = s[x - 1];
			if (s[i].empty()){
				cout << -1 << endl;
			}else {
				cout << s[i].top() << endl;
			}
		}else if (c == 'a'){
			s[i] = s[i - 1];
			cin >> x;
			s[i].push(x);
			if (s[i].empty()){
				cout << -1 << endl;
			}else {
				cout << s[i].top() << endl;
			}
		}
	}
}
```

## [P1814  穿越.cpp](./P1814  穿越.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include "iostream"

using namespace std;

bool isrennian(int n) {
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        return true;
    }
    return false;
}

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int y, m, d, yy, mm, dd;

int main() {
    cin >> y >> m >> d;
    yy = y;
    mm = m;
    dd = d;
    for (int i = 1; i <= 10000; i++) {
        // cout << yy << "-" << mm << "-" << dd << endl;
        if (mm < 12){
            if (dd >= month[mm]) {
                if (isrennian(yy)) month[2] = 29;
                else month[2] = 28;
                mm += 1;
                dd = 1;
            } else{
                dd += 1;
            }
        }else{
            if (dd >= month[mm]) {
                if (isrennian(yy)) month[2] = 29;
                else month[2] = 28;
                mm = 1;
                yy += 1;
                dd = 1;
            }else{
                dd += 1;
            }
        }
    }
    cout << yy << "-" << mm << "-" << dd;
}
```

## [P2385  骰子.cpp](./P2385  骰子.cpp):
```cpp
//Created in Fri Nov 11 13:59:34 2022
#include<iostream>
using namespace std;
int n[7] = {0, 1, 2, 3, 4, 5, 6};
int t, sum = 1;
string in;

void north(){
	int tmp = 0;
	tmp = n[1];
	n[1] = n[2];
	n[2] = n[6];
	n[6] = n[5];
	n[5] = tmp;
}
void east(){
	int tmp = 0;
	tmp = n[1];
	n[1] = n[4];
	n[4] = n[6];
	n[6] = n[3];
	n[3] = tmp;
}
void west(){
	int tmp = 0;
	tmp = n[1];
	n[1] = n[3];
	n[3] = n[6];
	n[6] = n[4];
	n[4] = tmp;
}
void south(){
	int tmp = n[1];
	n[1] = n[5];
	n[5] = n[6];
	n[6] = n[2];
	n[2] = tmp;
}
void right(){
	int tmp = n[2];
	n[2] = n[3];
	n[3] = n[5];
	n[5] = n[4];
	n[4] = tmp;
}
void left(){
	int tmp = n[2];
	n[2] = n[4];
	n[4] = n[5];
	n[5] = n[3];
	n[3] = tmp;
}
int main(){
	cin >> t;
	for (int i=1; i <= t; i++){
		cin >> in;
		if (in == "North"){
			north();
		}else if (in == "South"){
			south();
		}else if (in == "East"){
			east();
		}else if (in == "West"){
			west();
		}else if (in == "Right"){
			right();
		}else if (in == "Left"){
			left();
		}
		sum += n[1];
	}
	cout << sum;
}
```

## [P1087  Niven数.cpp](./P1087  Niven数.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
#include<sstream>
using namespace std;

string bin, nin;
int str2int(string n){
	int ans = 0;
	stringstream ss;
	ss.clear();
	ss << n;
	ss >> ans;
	return ans;
}

int dSum(string n){
	int sum = 0;
	for (int i=0; i <= n.length() - 1; i++){
		sum += n[i] - '0';
	}
	return sum;
}
int main(){
	while(cin >> bin){
		if (bin != "0"){
			cin >> nin;
			//cout << str2int(nin) << " " << dSum(nin) << endl;
			if (str2int(nin) % dSum(nin) == 0){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}else{
			return 0;
		}
	}
}
```

## [P2465  ls采蘑菇：丰收.cpp](./P2465  ls采蘑菇：丰收.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
using namespace std;
long long n, in, x, y, cnt;
int main(){
	cin >> n >> x >> y;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in >= x && in <= y){
			cnt += 1;
		}
	}
	cout << cnt;
}
```

## [P1065  杨辉三角.cpp](./P1065  杨辉三角.cpp):
```cpp
//Created in Fri Nov 11 13:59:26 2022
#include<iostream>
#include<iomanip>
using namespace std;
int n, yh[35][35];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		yh[i][1] = 1;
	}
	yh[2][2] =  1;
	for (int i=3; i <= n; i++){
		for (int j=2; j <= n; j++){
			yh[i][j] = yh[i-1][j] + yh[i-1][j-1];
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			if (yh[i][j] != 0){
				cout << yh[i][j] << " ";
			}
		}
		cout << '\n';
	}
}
```

## [P4044  数列.cpp](./P4044  数列.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include<iostream>
using namespace std;
int n, a[999999], b[999999];

int sum(int x){
	int sum = 0;
	for (int i=0; i <= x; i++){
		sum += a[i];
	}
	return sum;
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> b[i];
		a[i] = b[i] * i - sum(i - 1);
	}
	for (int i=1; i <= n; i++){
		cout << a[i] << " ";
	}
}
```

## [P1011  小明装行李.cpp](./P1011  小明装行李.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	long long m,n;
	cin>>m>>n;
	if (m % n == 0){
		cout<<m/n;
	}
	else{
		cout<<(m - m%n) / n +1;
	}
}
```

## [P7004  积器息.cpp](./P7004  积器息.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#include<iostream>
#include<algorithm>
using namespace std;
long long n, a[100000000];
int main(){
	cin >> n;
	for (long long i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	if (a[n] * a[n - 1] < a[1] * a[2]){
		cout << a[1] * a[2];
	}else {
		cout << a[n] * a[n - 1];
	}
}
```

## [P2706  标题统计.cpp](./P2706  标题统计.cpp):
```cpp
//Created in Fri Nov 11 13:59:49 2022
#include "iostream"

using namespace std;

string getstr(){
    char a;
    string out;
    while(cin.get(a)){
        if (a != '\n'){
            out += a;
        } else{
            return out;
        }
    }
}

int n;
string in;
int main(){
    in = getstr();
    for (char i: in){
        if (i != ' ' && i != '\n'){
            n += 1;
        }
    }
    cout << n;
}
```

## [P1694  文件名排序.cpp](./P1694  文件名排序.cpp):
```cpp
//Created in Fri Nov 11 13:59:38 2022
#include<iostream>
#include<algorithm>
using namespace std;
struct file{
	int num;
	string filename, basename, extraname;
	void init(){
		int idx = filename.find('.');
		if (idx != filename.npos){
			basename = filename.substr(0, idx);
			extraname = filename.substr(idx + 1);
		}else {
			basename = filename;
		}
		// cout << filename << " " << basename << " " << extraname << endl;
	}
} a[101];

bool cmp(file a, file b){
	if (a.extraname == "" || b.extraname == ""){
		if (a.extraname != ""){
			return true;
		}
		if (b.extraname != ""){
			return false;
		}
		return a.basename < b.basename;
	}
	if (a.extraname != b.extraname){
		return a.extraname < b.extraname;
	}
	return a.basename < b.basename;
}

int n;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].filename;
		a[i].init();
		a[i].num = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; i <= n; i++){
		// cout << a[i].filename << " ";
		cout << a[i].num << endl;
	}
}
```

## [P1060  宝藏迷宫.cpp](./P1060  宝藏迷宫.cpp):
```cpp
//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
using namespace std;
int n, m, a[1000][1000];
int main(){
	cin >> m >> n;
	for (int i=1; i <= m; i++){
		for (int j=1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= m; i++){
		for (int j=1; j <= n; j++){
			a[i][j] = a[i][j] + max(a[i][j - 1], a[i - 1][j]);
		}
	}
	cout << a[m][n];
}
```

## [P3525  苹果.cpp](./P3525  苹果.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	cout<<a+b+c+d+e;
}
```

## [P1061  覆盖.cpp](./P1061  覆盖.cpp):
```cpp
//Created in Fri Nov 11 13:59:26 2022
#include<iostream>
using namespace std;
int b, g, x, y, n, m, cnt, xl[5002], yl[5002]; 
bool a[5002][5002];
int main(){
	cin >> n >> m >> b >> g; 
	for (int i=1; i <= b; i++){
		cin >> x >> y;
		for (int j=x; j <= y; j++){
			if (xl[j]){
				continue;
			}else{
				xl[j] = true;
				for (int k=1; k <= m; k++){
					a[j][k] = true;
				}	
			}
		}
	}
	for (int i=1; i <= g; i++){
		cin >> x >> y;
		for (int j=x; j <= y; j++){
			if (yl[j]){
				continue;
			}else{
				yl[j] = true;
				for (int k=1; k <= n; k++){
					a[k][j] = true;
				}	
			}
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			if (a[i][j]){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}
```

## [P2175  N以内质数个数及求和.cpp](./P2175  N以内质数个数及求和.cpp):
```cpp
//Created in Fri Nov 11 13:59:44 2022
#include<iostream>
#include<cmath>
using namespace std;
int n,sum,cnt;
bool isprime(int n){
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
	cin>>n;
	sum++;
	for (int i=1; i <= n; i ++)	{
		if (isprime(i)){
			sum += i;
			cnt ++;
		}
	}
	cout<<cnt<<" "<<sum;
}
```

## [P1163  递归函数.cpp](./P1163  递归函数.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
bool p[101][101][101];
long long ans[101][101][101];
long long w(int a, int b, int c){
	if (a <= 0 || b <= 0 || c <= 0){
		return 1;
	}else if (a > 20 || b > 20 || c > 20){
		if (!p[20][20][20]){
			ans[20][20][20] = w(20, 20, 20);
			p[20][20][20] = true;
		}
		return ans[20][20][20];
	}else if (a < b && b < c){
		if (!p[a][b][c]){
			ans[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
			p[a][b][c] = true;
		}
		return ans[a][b][c];
	}else{
		if (!p[a][b][c]){
			ans[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a-1, b - 1, c - 1);
			p[a][b][c] = true;
		}
		return ans[a][b][c];
	}
}
long long a, b, c;
int main(){
	while(!cin.eof()){
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1){
			return 0;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
	}
}
```

## [P2574  回文数.cpp](./P2574  回文数.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include <iostream>
#include <cmath>

using namespace std;
long long m, n;

long long changeOp(long long x){
    int cnt = 0;
    long long y = 0, k = x;
    while(k > 0.0000000001){
        k /= 10;
        cnt += 1;
    }
    while(x > 0.0000000001){
        cnt -= 1;
        y += (x % 10) * pow(10, cnt);
        x /= 10;
    }
    return y;
}

int main(){
    cin >> m;
    for (int i=0; i <= 30; i++){
        if (m == changeOp(m)){
            cout << i;
            return 0;
        }else{
            n = changeOp(m);
            m += n;
        }
    }
    cout << -1;
}
```

## [P1601  青蛙跳荷叶.cpp](./P1601  青蛙跳荷叶.cpp):
```cpp
//Created in Fri Nov 11 13:59:36 2022
#include<iostream>
using namespace std;
int main(){
	int n, m, index;
	cin>>n>>m;
	index = (n + 1)*m % 8;
	cout<<index; 
}
```

## [P3506  旅游.cpp](./P3506  旅游.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include<iostream>
using namespace std;
int n, k, in, sum, maxn;
int main(){
	cin >> n >> k;
	for (int i=1; i <= n; i++){
		cin >> in;
		// cout << sum << endl;
		if (in <= k){
			sum += 1;
		}else{
			sum = 0;
		}
		if (sum > maxn){
			maxn = sum;
		}
	}
	cout << maxn;
}
```

## [P1757  素数.cpp](./P1757  素数.cpp):
```cpp
//Created in Fri Nov 11 13:59:39 2022
#include<iostream>
#include<cmath>
#pragma GCC optimize(2)//火车头
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
using namespace std;
int x, cnt;
bool p[100000000];
int main(){
	cin >> x;
	p[0] = p[1] = true;
	for (int i = 2; i <= ceilf(sqrt(x)); i++) {
		if (!p[i]){
			for (int j = 2; j * i <= x; j++) {
				p[j * i] = true;
			}
		}
	}
	for (int i=2; i <= x; i++){
		cnt += !p[i];
	}
	cout << cnt;
}
```

## [P2429  阶乘.cpp](./P2429  阶乘.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include "iostream"
using namespace std;
int n, ans = 1;
int main(){
    cin >> n;
    for (int i=2; i <= n; i++){
        ans *= i;
    }
    cout << ans << endl;
}
```

## [P1281  天使之城.cpp](./P1281  天使之城.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int> tmp;
vector<int> v;
int n, num = 1;
string in;
int main(){
	cin >> n >> in;
	for (char i: in){
		if (i == 'A'){
			v.push_back(num++);
		}else if (i == 'B'){
			if (tmp.size() >= 5){
				cout << "No";
				return 0;
			}
			tmp.push(num++);
		}else if (i == 'C'){
			if (tmp.empty()){
				cout << "No";
				return 0;
			}
			v.push_back(tmp.top());
			tmp.pop();
		}
	}
	cout << "Yes" << endl;
	for (int i=0; i <= v.size() - 1; i++){
		cout << v[i] << endl;
	}
}
```

## [P1995  创智空间.cpp](./P1995  创智空间.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include "iostream"
using namespace std;
int n,minn,maxn;
int main(){
    cin >> n;
    if (n % 2 == 0){
        if (n % 4 == 0){
            minn = n / 4;
        }else if ((n - 2) % 4 == 0){
            minn = n / 4 + 1;
        }
        if (n % 2 == 0){
            maxn = n / 2;
        }else if ((n - 1) % 2 == 0){
            maxn = n / 2 + 1;
        }
    }
    cout << minn << " "  << maxn << endl;
}
```

## [P1388  FBI树.cpp](./P1388  FBI树.cpp):
```cpp
//Created in Fri Nov 11 13:59:33 2022
#include<iostream>
using namespace std;int n;string str;string tree(string s){string ans;if(s.length()<=1){if(s.find('0')!=s.npos&&s.find('1')!=s.npos){ans+='F';}else if(s.find('0')!=s.npos){ans+='B';}else if(s.find('1')!=s.npos){ans+='I';}}else{ans+=tree(s.substr(0,s.length()/2));ans+=tree(s.substr(s.length()/2,s.npos));if(s.find('0')!=s.npos&&s.find('1')!=s.npos){ans+='F';}else if(s.find('0')!=s.npos){ans+='B';}else if(s.find('1')!=s.npos){ans+='I';}}return ans;}int main(){cin>>n>>str;cout<<tree(str);}
```

## [P3775  房间数.cpp](./P3775  房间数.cpp):
```cpp
//Created in Fri Nov 11 13:59:59 2022
n = int(input())
if n % 3 == 0:
    print(n // 3)
else:
    print(n // 3 + 1)
```

## [P3610  最大因数.cpp](./P3610  最大因数.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include "iostream"
#include "cmath"

using namespace std;
int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
long long n;

//bool isprime(int n){
//    for (int i=2; i <= ceilf(sqrt(n)); i++){
//        if (n % i == 0 && n != i){
//            return false;
//        }
//    }
//    return true;
//}

int main(){
    cin >> n;
//    for(int i=2; i<=999; i++){
//        if (isprime(i)){
//            printf("%d, ", i);
//        }
//    }
    for (int i=0; i <= 167; i++){
        if (n % a[i] == 0){
            cout << n / a[i];
            return 0;
        }
    }
}
```

## [P3528  中国星跳跃.cpp](./P3528  中国星跳跃.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
#include "iostream"

using namespace std;
int in, maxn, minn = 99999, sum;
int main(){
    for (int i=1; i <= 5; i ++){
        cin >> in;
        sum += in;
        if (in > maxn){
            maxn = in;
        }
        if (in < minn){
            minn = in;
        }
    }
    cout << sum - minn - maxn;
}
```

## [P1076  手机.cpp](./P1076  手机.cpp):
```cpp
//Created in Fri Nov 11 13:59:28 2022
#include<iostream>
using namespace std;

int sum;
char ch;
int n[26] = {1, 2, 3, 1, 2, 3, 
	1, 2, 3, 1, 2, 3, 1, 2, 3,
	1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int main(){
	while (cin.get(ch)){
		if (ch == ' '){
			sum += 1;
		}else if (ch >= 'a' && ch <= 'z'){
			sum += n[ch - 'a'];
		}else{
			sum += 0;
		}
	}
	cout << sum;
}
```

## [P1000  A+B Problem.cpp](./P1000  A+B Problem.cpp):
```cpp
//Created in Fri Nov 11 13:59:19 2022
#include<iostream>

using namespace std;

int main(){
    short a,b,c;
    cin>>a>>b;
    c=a+b;
    a = 0;
    b = 0;
    cout<<c;
    return 0;
}
```

## [P1170  装箱问题.cpp](./P1170  装箱问题.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
using namespace std;
int v, n, a[99999999];
int f(int n, int v){
	if (n == 0){
		return 0;
	}else if (v < a[n]){
		return f(n - 1, v);
	}
	return max(f(n - 1, v), f(n - 1, v - a[n]) + a[n]);
}
int main(){
	cin >> v >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	cout << v - f(n, v) << endl;
}
```

## [P1109  统计数字.cpp](./P1109  统计数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
#include<algorithm>
using namespace std;
long long n, a[2000000], cnt;
int main(){
	scanf("%lld", &n);
	for (int i=1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	sort(a, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i] != a[i + 1]){
			cout << a[i] << " " << cnt + 1 << endl;
			cnt = 0;
		}else{
			cnt += 1;
		}
	}
}
```

## [P2461  算术.cpp](./P2461  算术.cpp):
```cpp
//Created in Fri Nov 11 13:59:46 2022
#include<iostream>
using namespace std;
int n, m, a[99999], opt, l, r, add;
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= m; i++){
		cin >> opt;
		if (opt == 1){
			cin >> l >> r >> add;
			for (int j=l; j <= r; j++){
				a[j] += add;
			}
		}else if (opt == 2){
			int sum = 0;
			cin >> l >> r;
			for (int j=l; j <= r; j++){
				sum += a[j];
			}
			cout << sum << endl;
		}else if (opt == 3){
			int maxn = 0;
			cin >> l >> r;
			for (int j=l; j <= r; j++){
				maxn = max(maxn, a[j]);
			}
			cout << maxn << endl;
		}
	}
}
```

## [P1046  变形虫.cpp](./P1046  变形虫.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
using namespace std;
int a, n, w;
int main(){
	cin>>a>>n;
	for (int i=1; i <= n; i++){
		cin>>w;
		if (w == a){
			a *= 2;
		}else{
			continue;
		}
	}
	cout<<a;
}
```

## [P3706  伊藤M诚の伤.cpp](./P3706  伊藤M诚の伤.cpp):
```cpp
//Created in Fri Nov 11 13:59:57 2022
#include "iostream"

using namespace std;
int n,x,cnt,t;
int main(){
    cin >> n >> x;
    for (int i=1; i <= n; i++){
        t = i;
        while(t > 0){
            if (t % 10 == x) cnt += 1;
            t /= 10;
        }
    }
    cout << cnt;
}
```

## [P2559  排名榜.cpp](./P2559  排名榜.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include<iostream>
using namespace std;
int n, in, a[101], m, ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		a[i] += in;
	}
	cin >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n - 1; j++){
			if (a[j] < a[j + 1]){
				swap(a[j], a[j+1]);
			}
		}
	}
	for (int i=1; i <= 100; i++){
		if (a[i] == m){
			cout << i;
			return 0;
		}
	}
}
```

## [P1598  大象喝水.cpp](./P1598  大象喝水.cpp):
```cpp
//Created in Fri Nov 11 13:59:35 2022
#include<iostream>
using namespace std;
int main(){
	int h, r, vi;
	double v;
	cin>>h>>r;
	v = 3.14159*h*r*r / 1000;
	vi = 20 / v + 1;
	cout<<vi;
}
```

## [P1028  亲密数.cpp](./P1028  亲密数.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include<iostream>
#include<cmath>
using namespace std;
int num;
int tmp = 999999;
int cpnum1, cpnum2;
int n[201];
int main(){
    cin>>num;
    for (int i = 1; i <= num; i++){
        cin>>n[i];
    }
    for (int i = 2; i <= num; i++){
        if (abs(n[i - 1] - n[i]) < tmp){
            cpnum1 = n[i - 1];
            cpnum2 = n[i];
            tmp = abs(n[i - 1] - n[i]);
            continue;
        }
    }
    cout<<cpnum1<<" "<<cpnum2<<endl;
}
```

## [P3382  哥德巴赫猜想.cpp](./P3382  哥德巴赫猜想.cpp):
```cpp
//Created in Fri Nov 11 13:59:50 2022
#include<iostream>
#include<cmath>
using namespace std;
bool p=false;
long long n;

bool isprime(long long n){
	if (n % 2 == 0 || n == 1) return false;
	for (int i=3; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	while(cin>>n){
		if (n == 0) return 0;
		for (int i=2; i < n; i++){
			if (isprime(i) && isprime(n - i)){
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				break;
			}
		}
	}
}
```

## [P1116  拯救花园.cpp](./P1116  拯救花园.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include<iostream>
#include<algorithm>

using namespace std;

struct Rabbit {
    int t, d;
};

bool cmp(Rabbit a, Rabbit b) {
    return a.t * b.d < b.t * a.d;
}

int n, sum, dsum;
Rabbit a[200];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].t >> a[i].d;
        dsum += a[i].d;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        dsum -= a[i].d;
        sum += dsum * a[i].t * 2;
    }
    cout << sum;
}
```

## [P1036  验证角谷猜想.cpp](./P1036  验证角谷猜想.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
using namespace std;
long long n;
int cnt;
int main(){
	cin>>n;
	while(true){
		if (n == 1){
			break;
		}else{
			if (n % 2 == 1){
				cout<<n<<" ";
				n = n*3 + 1;
				cnt++;
			}else{
				n = n/2.0;
			}
		}
	}
	if (cnt == 0){
		cout<<"No number can be output!"<<endl;
	}
}
```

## [P3500  统计成绩.cpp](./P3500  统计成绩.cpp):
```cpp
//Created in Fri Nov 11 13:59:52 2022
#include "iostream"
#include "algorithm"

using namespace std;
int n, all[9999], a[9999], b[9999], c[9999];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        all[i] = a[i] + b[i] + c[i];
    }
    sort(a, a + n + 1);
    sort(b, b + n + 1);
    sort(c, c + n + 1);
    sort(all, all + n + 1);
    cout << all[n] << " " << a[n] << " " << b[n] << " " << c[n];
}
```

## [P3710  D 站的表情包.cpp](./P3710  D 站的表情包.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include<iostream>
#include<algorithm>
using namespace std;
int sum(int n){
	int ret = 0;
	for (int i=1; i <= n; i++){
		if (n % i == 0 && i % 3 != 0){
			ret += i;
		}
	}
	return ret;
}
int n, a[999999], in;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		a[i] = sum(in);
	}
	stable_sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		cout << a[i] << " ";
	}
}
```

## [P1174  取余运算.cpp](./P1174  取余运算.cpp):
```cpp
//Created in Fri Nov 11 13:59:32 2022
#include<iostream>
using namespace std;

long long qpow(int b, int p, int k){
	if (p == 0){
		return 1;
	}
	long long tmp = qpow(b, p / 2, k) % k;
	if (p % 2 == 0){
		return tmp * tmp % k;
	}
	return tmp * tmp * b % k;
}

int b, p, k;
int main(){
	cin >> b >> p >> k;
	cout << b << "^" << p << " mod " << k << "=" << qpow(b, p , k);
}
```

## [P1029  阅读训练.cpp](./P1029  阅读训练.cpp):
```cpp
//Created in Fri Nov 11 13:59:22 2022
#include "iostream"

using namespace std;
int n, q, inN, inQ, t, sum = 0;
int a[10001];

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> inN;
        for (int j = sum; j < sum + inN; j++) {
            a[j] = i;
        }
        // for (int i = 1; i <= 1001; i++) cout << a[i] << " ";
        cout << endl;
        sum += inN;
    }

    for (int i = 1; i <= q; i++) {
        cin >> inQ;
        cout << a[inQ] << endl;
    }
}
```

## [P1643  圆环套圆环.cpp](./P1643  圆环套圆环.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
using namespace std;
int g(int n){
	if (n == 0){
		return 0;
	}
	return n - g(g(n - 1));
}

int main(){
	int n;
	cin >> n;
	cout << g(n);
}
```

## [P1032  趣味填空.cpp](./P1032  趣味填空.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
#include<cmath>
long long l, r;
using namespace std;
int main(){
	cin>>l>>r;
	for (int i=1 ; i<=4; i++){
		if (l / (long long)pow(10, i) + l % (long long)pow(10, i) == r){
			cout<<l / (long long)pow(10, i)<<"+"<<l % (long long)pow(10, i)<<"="<<r;
			return 0;
		}else{
			continue;
		}
	}
	cout<<"Impossible!"<<endl;
}
```

## [P2219  PS4.cpp](./P2219  PS4.cpp):
```cpp
//Created in Fri Nov 11 13:59:45 2022
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double sum_;
	int a,b;
	cin>>a>>b;
	sum_ += (a + b / 10.0);
	//cout<<sum_<<endl;
	cout<<(int)floor(sum_ / 11.10);
}
```

## [P1623  周期串.cpp](./P1623  周期串.cpp):
```cpp
//Created in Fri Nov 11 13:59:37 2022
#include<iostream>
using namespace std;
string str;


string times(string a, int b){
	string ans;
	for (int i=1; i <= b; i++){
		ans += a;
	}
	return ans;
}

int main(){
	cin >> str;
	for (int i=1; i <= 100; i++){
		for (int j=1; j <= 100; j++){
			if (str == times(str.substr(0, i), j)){
				cout << i;
				return 0;
			}
		}
	}
}
```

## [P2558  解方程.cpp](./P2558  解方程.cpp):
```cpp
//Created in Fri Nov 11 13:59:47 2022
#include "iostream"
#include "cmath"

using namespace std;
long long n, cnt;
int main(){
    cin >> n;
    for (long long i=0; i <= (long long)(ceilf(sqrt(float (n)))); i++){
        if (sqrt(n - i * i) == (long long)(sqrt(n - i * i))){
            cnt += 1;
        }
    }
    cout << cnt;
}
```

## [P3618  乘车.cpp](./P3618  乘车.cpp):
```cpp
//Created in Fri Nov 11 13:59:55 2022
#include<iostream>
#include<iomanip>
using namespace std;
int n,m;
double sum;
int main(){
	cin>>n>>m;
	if (n < 2.5) sum += 6.0;
	else sum += 6.0 + (n - 2.5) * 1.2;
	if (m >= 5) sum += m / 5; 
	cout<<setprecision(1)<<fixed<<sum<<endl;
}
```

## [P1106  车厢重组.cpp](./P1106  车厢重组.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include "iostream"
#include "cstring"

using namespace std;
int a[10001];
int n, cnt, t;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    for (int i=1; i <= n; i++){
        for (int j=1; j <= n; j++){
            if (a[j] > a[j+1] && a[j] != 0 && a[j + 1] != 0){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                cnt += 1;
            } else{
                continue;
            }
        }
    }
//    for (int i=1; i <= n; i++){
//        cout << a[i] << " ";
//    }
    cout << cnt;
}
```

## [P3533  帐号解禁.cpp](./P3533  帐号解禁.cpp):
```cpp
//Created in Fri Nov 11 13:59:53 2022
// 代码如下
#include<iostream>
using namespace std;
int k;
int h,m,s;
int main(){
	cin>>k;
	h = k / 3600;
	m = k % 3600 / 60;
	s = k - h * 3600 - m * 60;
	if (h < 10) cout<<0<<h<<":";
	else cout<<h<<":";
	if (m < 10) cout<<0<<m<<":";
	else cout<<m<<":";
	if (s < 10) cout<<0<<s;
	else cout<<s<<endl;
}
```

## [P1015  小明坐车.cpp](./P1015  小明坐车.cpp):
```cpp
//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	double s;
	cin>>s;
	if (s<=2.5){
		cout<<10;
	}
	else{
		cout<<(int)(10 + (s - 2.5) * 2.6 + 0.5);
	}
}
```

## [P1917  级数求和.cpp](./P1917  级数求和.cpp):
```cpp
//Created in Fri Nov 11 13:59:42 2022
#include "iostream"
using namespace std;
int m, sum, cnt;
int main(){
    cin >> m;
    for (int i=1; i <= m; i++){
        if (sum + (1 + i) * i / 2 < m){
            sum += (1 + i) * i / 2;
            cnt += 1;
        }else{
            cout << cnt << " " << sum << endl;
            return 0;
        }
    }
}
```

## [P1042  统计数字.cpp](./P1042  统计数字.cpp):
```cpp
//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
#include<cmath>
using namespace std;
int l,r,n,cnt;
int main(){
    cin>>l>>r;
    for (int i=l; i <= r; i++){
        n = i;
        for (int ii=0; ii <= 5; ii++){
            if (n / (long long)pow(10, ii) % 10 == 2){
                cnt ++;
            }
        }
    }
    cout<<cnt;
}
```

## [P3636  奶牛塔.cpp](./P3636  奶牛塔.cpp):
```cpp
//Created in Fri Nov 11 13:59:56 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, b, sum, cnt, a[9999999];

bool cmp(int a, int b){
	return a > b;
}

int main(){
	cin >> n >> b;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; sum < b; i++){
		sum += a[i];
		cnt += 1;
	}
	cout << cnt;
}
```

## [P1149  母猪的故事.cpp](./P1149  母猪的故事.cpp):
```cpp
//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
int n,a=1,b=1,c=1;
int main(){
	cin>>n;
	for (int i=1; i < n; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}
```

## [P3731  躲避水滴.cpp](./P3731  躲避水滴.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;
double s, l;
int main(){
    cin >> s;
    l = sqrt(s / 3.14);
    cout << setprecision(2) << fixed << l;
}
```

## [P4150  理纱与凯撒加密.cpp](./P4150  理纱与凯撒加密.cpp):
```cpp
//Created in Fri Nov 11 14:00:01 2022
#include "iostream"

using namespace std;
int n, tgp=7, dzp=9;
string str;
string a = "abcdefghijklmnopqrstuvwxyz";
int main(){
    cin >> str;
    for (char & i : str){
        i = a[(a.find(i) + 3) % 26];
    }
    cout << str << endl;
}
```

## [P1034  可口可乐.cpp](./P1034  可口可乐.cpp):
```cpp
//Created in Fri Nov 11 13:59:23 2022
#include<iostream>
using namespace std;
int n;
int ans;
int main(){
	cin>>n;
	ans += n;
	while (n > 2){
		ans += n / 3;
		n = n / 3 + n % 3;
	}
	cout<<ans;
}
```

## [P3275  牛牛的密码.cpp](./P3275  牛牛的密码.cpp):
```cpp
//Created in Fri Nov 11 13:59:29 2022
#include "iostream"

using namespace std;
bool ab, AB, __, Num;
string in, abc, ABC, _, num;
int main(){
    cin >> in;
    for (char i: in){
        if (i >= 48 && i <= 57){
            Num = true;
            num += i;
        } else if (i >= 65 && i <= 90){
            AB = true;
            ABC += i;
        } else if (i >= 97 && i <= 122){
            ab = true;
            abc += i;
        } else if (i >= 32){
            __ = true;
            _ += i;
        }
    }
    cout << "password level:" << ab + AB + __ + Num << endl;
    if (!ab){
        cout << "(Null)" << endl;
    } else{
        cout << abc << endl;
    }
    if (!AB){
        cout << "(Null)" << endl;
    } else{
        cout << ABC << endl;
    }
    if (!Num){
        cout << "(Null)" << endl;
    } else{
        cout << num << endl;
    }
    if (!__){
        cout << "(Null)" << endl;
    } else{
        cout << _ << endl;
    }
}
```

## [P2008  成绩分级.cpp](./P2008  成绩分级.cpp):
```cpp
//Created in Fri Nov 11 13:59:43 2022
#include<iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	if (90<=m&&m<=100) cout<<"A";
	else{
		if (80<=m&&m<90) cout<<"B";
		else{
			if (70<=m&&m<80) cout<<"C";
			else{
				if (60<=m&&m<70) cout<<"D";
				else{
					if (m<60) cout<<"E";
				}
			}
		}
	}	
}
```

## [P3719  小 V 查排名.cpp](./P3719  小 V 查排名.cpp):
```cpp
//Created in Fri Nov 11 13:59:58 2022
#include "iostream"

using namespace std;
int n,k,in,cnt;
int main(){
    cin >> n >> k;
    for (int i=1; i <= n; i++){
        cin >> in;
        if(in > k){
            cnt += 1;
        }
    }
    cout << cnt;
}
```

## [P2566  小木棍.cpp](./P2566  小木棍.cpp):
```cpp
//Created in Fri Nov 11 13:59:48 2022
#include "iostream"

using namespace std;
bool n[1000];
int a, b, c, n1, n2, n3, n4, n5, n6, t;

int main() {
    cin >> a >> b >> c;
    n[a * 100 + b * 10 + c] = true;
    n[a * 100 + c * 10 + b] = true;
    n[b * 100 + a * 10 + c] = true;
    n[b * 100 + c * 10 + a] = true;
    n[c * 100 + b * 10 + a] = true;
    n[c * 100 + a * 10 + b] = true;
    for (int i=100; i < 1000; i++){
        if (n[i]){
            cout << i << endl;
        }
    }
}
```

## [P1831  求天数.cpp](./P1831  求天数.cpp):
```cpp
//Created in Fri Nov 11 13:59:40 2022
#include<iostream>
using namespace std;
int main(){
	int yyyy,mm;
	cin>>yyyy>>mm;
	if ((yyyy%4==0&&yyyy%100!=0)||yyyy%400==0){
		if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12) {
		cout<<31;
		return 0;
		}
		if(mm==2){
			cout<<29;
		}else{
			cout<<30;
		}
	}else{
		if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12) {
		cout<<31;
		return 0;
	}
			if(mm==2){
			cout<<28;
		}else{
			cout<<30;
		}
	}
}
```
