//it was hard to write
//so it should be hard to read
#include <bits/stdc++.h>
#define sz size
#define pb push_back
#define ll long long
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define last(x) (x).size() - 1
#define mp make_pair

using namespace std;
  
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef double ld;
  
const int MAXN = 1e5 + 5;
const ll INF = 1e18 + 7;
const int inf = 1e9 + 7;
const double EPS = 1e-9;

int n;
bool prime[MAXN];

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);                          
    cout.precision(9);
    cout << fixed;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		p[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		if (p[i]) {
			for (int j = i * i; j <= n; j += i) {
				p[j] = 0;
			}
		}
	}
	return 0;   
}