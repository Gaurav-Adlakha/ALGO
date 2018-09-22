/*

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <deque>
#include <queue>
#include <map>
#include <stack>
using namespace std;


struct Node
{
	int key;
	Node *left, *right;
};



// A utility function to create a new node 
Node* newNode(int key)
{
	Node* node = new Node;
	node->key = key;
	node->left = node->right = NULL;
	return node;
}


void preOrderTraversal(Node *root) {

	if (root == NULL) return;
	stack<Node*> s1;
	s1.push(root);

	while (!s1.empty()) {
		Node *top = s1.top();
		s1.pop();
		cout << top->key << endl;
		if (top->right != NULL) {
			s1.push(top->right);
		}
		if (top->left != NULL) {
			s1.push(top->left);
		}
	}
}



// Driver code
int main()
{
	vector<int> ans;
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->right->left->right = newNode(8);
	root->right->right->right = newNode(9);
	root->right->right->left = newNode(10);
	root->right->right->left->right = newNode(11);
	root->right->right->left->right->right = newNode(12);

	preOrderTraversal(root);
	return 0;
}

*/