
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


void levelOrderTraversal (Node *root){

	if (root == NULL) return;
	queue<Node*> que;
	que.push(root);

	while (!que.empty()) {
		Node *pop = que.front();

		if (pop->left != NULL) que.push(pop->left);
		if (pop->right != NULL) que.push(pop->right);

		cout << pop->key << endl;
		que.pop();
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

	levelOrderTraversal(root);
	return 0;
}
*/