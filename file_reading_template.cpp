#include <iostream>
#include <fstream>
std::ifstream infile("input.txt");
#include <vector>
#include <cstdio>

using std::vector;
using std::pair;

void DFS(vector<vector<int> > &adj) {

}

int number_of_components(vector<vector<int> > &adj) {
	int res = 0;
	//write your code here
	return res;
}

int main() {
	int n,m;
	infile >> n >> m;
	vector<vector<int> > adj(n, vector<int>());
	for (size_t i = 0; i < m; i++) {
		int x, y;
		infile >> x >> y;
		adj[x - 1].push_back(y - 1);
		adj[y - 1].push_back(x - 1);
	}
	std::cout << number_of_components(adj);
}
