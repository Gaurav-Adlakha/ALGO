
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



struct MinMax {
public:
	bool isBinary;
	int size;
	int Min;
	int Max;
};


MinMax largestBinaryTree(Node *root) {

	if (root == NULL) return { true,0,INT_MAX,INT_MIN };
	if (root->left == NULL && root->right == NULL) return { true,1,root->key,root->key };

	MinMax left = largestBinaryTree(root->left);
	MinMax right = largestBinaryTree(root->right);

	MinMax ans;
	ans.size = max(left.size, right.size);

	// if whole tree rorted under is BST

	if (left.isBinary && right.isBinary && root->key > left.Max && root->key < right.Min) {
		ans.isBinary = true;
		ans.size =  left.size + right.size + 1;
		// tricky part incase of null on any side return root key value
		ans.Min = min(left.Min, min(right.Min, root->key));
		ans.Max = max(right.Max, max(right.Max, root->key));  
		//cout << "right.Min" << right.Min << endl;
		//cout << " left.Min" << left.Min << endl;
		//cout << "root->key" << root->key << endl;
		//cout << ans.Min << endl;  
		//cout << ans.Max << endl;
		//cout << left.Min << endl;
		//cout << right.Max << endl;
		//cout << "**********************" << endl;
		return ans;
	}

	// if not
	ans.isBinary = false;
	return ans;
}
/*
60
/ \
65 70
/
50 * /
*/


// Driver code
int main()
{
	struct Node *root = newNode(60);
	root->left = newNode(65);
	root->right = newNode(70);
	root->left->left = newNode(50);

	MinMax ans = largestBinaryTree(root);
	cout << ans.size;
    return 0;
}
