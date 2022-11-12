//Created in Sat Nov 12 09:25:29 2022
 //System: Darwin 22.1.0
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