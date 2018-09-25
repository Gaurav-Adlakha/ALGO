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


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// A utility function to create a new node 
Node* newNode(int key)
{
	Node* node = new Node;
	node->key = key;
	node->left = node->right = NULL;
	return node;
}

bool isLeaf(Node *node) {
	return (node->left == NULL && node->right == NULL);
}




void levelOrderTraversal(Node *root) {
	queue<Node*> q1, q2;
	q1.push(root);

	while (!q1.empty() || !q2.empty()) {
		while (!q1.empty()) {
			Node *current = q1.front();
			if (current->left != NULL) {
				q2.push(current->left);
			}
			if (current->right != NULL) {
				q2.push(current->right);
			}
			cout << current->key << endl;
			q1.pop();
		}

		while (!q2.empty()) {
			Node *current = q2.front();
			if (current->left != NULL) {
				q1.push(current->left);
			}
			if (current->right != NULL) {
				q1.push(current->right);
			}
			cout << current->key << endl;
			q2.pop();
		}
	}
}

void levelOrderTraversalWithDelimeter(Node *root) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		Node *current = q.front();
		q.pop();
		if (current != NULL) {
			if (current->left != NULL) {
				q.push(current->left);
			}
			if (current->right != NULL) {
				q.push(current->right);
			}	
			cout << current->key << " ";
		}
		else {
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		cout << endl;
	}
}



void levelOrderTraversalCounter(Node *root) {
	int currentCount, level, current=0;
	queue<Node*> que;
	que.push(root);
	level = 1, currentCount = 0;

	while (!que.empty()) 
	{
		while (level > 0) 
		{
			Node *top = que.front();
			current = top->key;
			cout << current << "  ";
			que.pop();
			if (top->left != NULL) {
				currentCount = currentCount + 1;
				que.push(top->left);
			}
			if (top->right != NULL) {
				currentCount = currentCount + 1;
				que.push(top->right);
			}
			level = level - 1;
		}
		cout << endl;
		level = currentCount;
		currentCount = 0;
	}
}



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

	//levelOrderTraversal(root);

	cout << "  *******************" << endl;
	levelOrderTraversalCounter(root);
	return 0;
}

*/