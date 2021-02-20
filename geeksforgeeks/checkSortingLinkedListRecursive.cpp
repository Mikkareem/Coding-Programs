#include<bits/stdc++.h>
using namespace std;

bool checkAsc(Node* head)
{
	if(head->next == NULL) return true;
	
	// Check for first 2 numbers, if true, recursively check next 2.
	return (head->data < head->next->data) && checkAsc(a, index + 1);
}

int main()
{
	//vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
	Node* head;
	cout << checkAsc(head);
}

