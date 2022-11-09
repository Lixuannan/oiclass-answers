# All the answer I write from [oiclass](http://oiclass.com)
# [Oiclass](http://oiclass.com)上的所有我写的题解

## [P1056  愧疚指数.cpp](./P1056  愧疚指数.cpp):
```cpp
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
//					cout << "  YES\n";
//					continue;
				}
//				cout << "  NO\n";
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
