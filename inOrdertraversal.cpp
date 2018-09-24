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


/*
     10
   8 
7    9
       9.5

*
vector<int> inOrdertraversal(Node *root) {
	vector<int> vector;
	if (!root) return vector;
	stack<Node *> stack;
	stack.push(root);
	while (!stack.empty())
	{
		Node *pNode = stack.top();
		if (pNode->left)
		{
			stack.push(pNode->left);
			pNode->left = NULL;
		}
		else
		{
			vector.push_back(pNode->key);
			stack.pop();
			if (pNode->right)
				stack.push(pNode->right);
		}
	}
	 return vector;
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

	inOrdertraversal(root);
	return 0;
}

*/
