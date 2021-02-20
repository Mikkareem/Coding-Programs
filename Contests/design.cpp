#include<bits/stdc++.h>
using namespace std;

class BrowserHistory
{
	vector<string> history;
	int current, size;
	
	void forwardDeleteAndAdd(const string& url) {
		size = ++current + 1;
		history[current] = url;
	}
	
	void addLast(const string& url) {
		history.push_back(url);
		size++;
		current++;
	}
public:
	BrowserHistory(string homepage) : current(-1), size(0) {
		visit(homepage);
	}
	
	void visit(string url) {
		if(current + 1 != size) {
			forwardDeleteAndAdd(url);
		} else {
			addLast(url);
		}
	}
	
	string back(int steps) {
		current = max(0, current-steps);
		return history[current];
	}
	
	string forward(int steps) {
		current = min(size-1, current+steps);
		return history[current];
	}
};

int main()
{
	BrowserHistory* bH = new BrowserHistory("leetcode.com");
	bH->visit("google.com");
	bH->visit("facebook.com");
	bH->visit("youtube.com");
	cout << bH->back(1) << '\n';
	cout << bH->back(1) << '\n';
	cout << bH->forward(1) << '\n';
	bH->visit("linkedin.com");
	cout << bH->forward(2) << '\n';
	cout << bH->back(2) << '\n';
	cout << bH->back(7) << '\n';
}
