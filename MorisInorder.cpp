
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



void MorisInorder(Node *root) {
	if (root == NULL) return;
	Node *current = root;

	while (current != NULL) {
		if (current->left == NULL) { // no left child {
			cout << current->key << endl;
			current = current->right;
		}
		else {
			Node *pred = current->left;
			while (pred->right != current && pred->right != NULL) {
				pred = pred->right;
			}
			if (pred->right == NULL) {  // if pred right is null set pred to right and move current from current left
				pred->right = current;
				current = current->left;
			}
			else {
				pred->right = NULL;
				cout << current->key << endl; // if pred is current or allready visted  visit c
				current = current->right;
			}
		}
	}
}







// Driver code
int main()
{
	struct Node *root = newNode(60);
	root->left = newNode(65);
	root->right = newNode(70);
	root->left->left = newNode(50);

	MorisInorder(root);
    return 0;
}
