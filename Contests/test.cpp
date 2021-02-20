#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define si(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)
#define loop(i, x, y, z) for(int i=(x); i<(y); i+=(z))
#define loopr(i, x, y, z) for(int i=(x); i>=(y); i-=(z))

#define deb(...) cerr << "\n[ " << #__VA_ARGS__ << " : ";debug(__VA_ARGS__);cerr << "]\n";

template<class A> void debug(const A&);
template<class A> void debug(const vector<A>&);
template<class T> void debug(const unordered_set<T>&);
template<class A, class B> void debug(const map<A, B>&);
template<class A, class B> void debug(const unordered_map<A, B>&);
template<class A, class... B> void debug(const A&, const B&...);

template<class T> void read(T&);
template<class A> void read(vector<A>&);
template<class H, class... T> void read(H&, T&...);

template<class T> void write(const T&);
template<class A> void write(const vector<A>&);
template<class H, class... T> void write(const H&, const T&...);


//------------------------------ Templates Definition -------------------------------- //

template<typename T>
void debug(const T& t) {
	cerr << t;
}

template<class T>
void debug(const vector<T>& a) {
	cerr << "[";
	int n = a.size();
	for(int i = 0; i < n; ++i) {
		cerr << a[i];
		if(i != n-1) cerr << " ";
	}
	cerr << "]";
}

template<class T>
void debug(const unordered_set<T>& a) {
	cerr << "[";
	for(T i: a) cerr << i << ' ';
	cerr << "]";
}

template<class A, class B>
void debug(const map<A, B>& m) {
	for(auto v: m) {
		cerr << "[ " << v.first << " : " << v.second << " ] ";
	}
}

template<class A, class B>
void debug(const unordered_map<A, B>& m) {
	for(auto v: m) {
		cerr << "[ " << v.first << " : " << v.second << " ] ";
	}
}

template<class H, class... T>
void debug(const H& h, const T&... t) {
	debug(h);
	if(sizeof...(t)) {
		cerr << ", ";
		debug(t...);
	}
}

template<class T>
void read(T& x) {
	cin >> x;
}

template<class A>
void read(vector<A>& v) {
	for(auto &x: v) read(x);
}

template<class H, class... T>
void read(H& h, T&... t) {
	read(h);
	read(t...);
}

template<class T>
void write(const T& x) {
	cout << x;
}

template<class A>
void write(const vector<A>& v) {
	for(auto x: v) {
		cout << x << ' ';
	}
	//cout << '\n';
}

template<class H, class... T>
void write(const H& h, const T&... t) {
	write(h);
	write(t...);
}

// --------------------- End Of Templates -------------------------------------- //

void testcase()
{
	
}

int main()
{
	int t;
	si(t);
	while(t--) {
		testcase();
	}
}
