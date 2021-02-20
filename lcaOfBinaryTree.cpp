#include<bits/stdc++.h>

using namespace std;

struct node
{
    int val;
    node *left, *right;
    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int level[20], parent[20];

void dfs(node* root, int index)
{
    assert(root != NULL);

    level[root->val] = index;

    if(root->left != NULL) {
        parent[root->left->val] = root->val;
        dfs(root->left, index + 1);
    }

    if(root->right != NULL) {
        parent[root->right->val] = root->val;
        dfs(root->right, index + 1);
    }
}

void swaping(int& a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int lca(node* root, int a, int b)
{
    if(level[a] > level[b]) swaping(a, b);

    int diff = level[b] - level[a];

    while(diff--) {
        b = parent[b];
    }

    assert(level[a] == level[b]);

    if(a == b) return a;

    while(parent[a] != parent[b]) {
        a = parent[a];
        b = parent[b];
    }

    assert(parent[a] == parent[b]);

    return parent[a];
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->left = new node(8);
    root->right->left->left->right = new node(10);
    root->right->left->left->left = new node(9);
    root->right->left->left->left->left = new node(11);

    dfs(root, 1);

    cout << lca(root, 3, 11);
}

