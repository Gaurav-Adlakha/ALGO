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
#include <deque>
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


void SpiralOrderTravesal(Node*root) {
	deque<Node*> de;
	int counter = 0, level = 0, current = 0;
	bool flip = true;

	de.push_back(root);
	level = 1;

	while (!de.empty()) {
		if (flip)
		{
			while (level > 0) {
				Node *top = de.front();
				de.pop_front();
				cout << top->key << "  ";
				if (top->right != NULL) {
					de.push_back(top->right);
					counter = counter + 1;
				}
				if (top->left != NULL) {
					de.push_back(top->left);
					counter = counter + 1;
				}
				level = level - 1;
			}
			level = counter;
			counter = 0;
			flip = false;
			cout << endl;
		}
		if (!flip)
		{
			while (level > 0)
			{
				Node *top = de.back();
				de.pop_back();
				cout << top->key << "  ";
				if (top->left != NULL) {
					de.push_front(top->left);
					counter = counter + 1;
				}
				if (top->right != NULL) {
					de.push_front(top->right);
					counter = counter + 1;
				}
				level = level - 1;
			}
			level = counter;
			counter = 0;
			flip = true;
			cout << endl;
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

	//levelOrderTraversal(root);

	cout << "  *******************" << endl;
	SpiralOrderTravesal(root);
	return 0;
}

*/
