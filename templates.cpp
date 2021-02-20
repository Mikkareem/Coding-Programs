#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define imie(a) cerr<<"["<<#a<<": ";debug(a);cerr<<"]\n"
#define REP(a, b, c) for(int a = (b); a < (c); a++)
template<class T>
void debug(T a){for(auto i: a)cerr<<i<<' ';}
struct Matrix {
	int n, m;
	vector<vector<int>> a;
	Matrix(int row, int col) {
		n = row, m = col;
		a.resize(n, vector<int>(m));
	}
	Matrix operator+(const Matrix& B) {
		Matrix C(n, m);
		REP(i, 0, n) REP(j, 0, m) C.a[i][j] = a[i][j] + B.a[i][j];
		return C;
	}
	Matrix operator*(const int scale) {
		Matrix C(n, m);
		REP(i, 0, n) REP(j, 0, m) C.a[i][j] = scale*a[i][j];
		return C;
	}
	Matrix operator*(const Matrix& B) {
		Matrix C(n, B.m);
		auto dot = [&](int row, int col) {
			int dot_product = 0;
			REP(i, 0, m) {
				dot_product += a[row][i] * B.a[i][col];
			}
			return dot_product;
		};
		REP(i, 0, n) REP(j, 0, B.m) C.a[i][j] = dot(i, j);
		return C;
	}
	void show() {
		REP(i, 0, n) {
			REP(j, 0, m) {
				cout << a[i][j] << ' ';
			}
			cout << '\n';
		}
	}
};
Matrix identity_matrix(int n) {
	Matrix C(n, n);
	REP(i, 0, n) C.a[i][i] = 1;
	return C;
}

#define IOS ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);

#define TICK() clock_t start=clock();
#define TOCK() cerr<<(double)(clock()-start)/CLOCKS_PER_SEC << " secs\n";


template<class T> void read(T&);
template<class H, class... T> void read(H&, T&...);
template<class A> void read(vector<A>&);
template<class T> void write(T);
template<class H, class... T> void write(H, T...);
template<class A> void write(vector<A>);
template<class A, class B> void debug(map<A, B>);
template<class A, class B> void debug(unordered_map<A, B>);
template<class A> void debug(vector<A>);

//------------------------------ Templates Definition -------------------------------- //

template<class A, class B>
void debug(map<A, B> m) {
	for(auto v: m) {
		cerr << "[ " << v.first << " : " << v.second << " ] ";
	}
}

template<class A, class B>
void debug(unordered_map<A, B> m) {
	for(auto v: m) {
		cerr << "[ " << v.first << " : " << v.second << " ] ";
	}
}

template<class A>
void debug(vector<A> m) {
	for(auto v: m) {
		cerr << v << ' ';
	}
}

template<typename T>
void debug(T t) {
	cerr << t;
}

template<class T>
void read(T& x) {
	cin >> x;
}

template<class H, class... T>
void read(H& h, T&... t) {
	read(h);
	read(t...);
}

template<class A>
void read(vector<A>& v) {
	for(auto &x: v) read(x);
}

template<class T>
void write(T x) {
	cout << x << '\n';
}

template<class H, class... T>
void write(H h, T... t) {
	write(h);
	write(t...);
}

template<class A>
void write(vector<A> v) {
	for(auto x: v) {
		cout << x << '\n';
	}
	cout << '\n';
}
