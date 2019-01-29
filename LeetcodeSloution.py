https://leetcode.com/problems/binary-tree-maximum-path-sum

def findMaxhelper(root): 
    if root is None: 
        return 0
    l = findMaxhelper(root.left) 
    r = findMaxhelper(root.right) 
    max_single = max(max(l, r) + root.val, root.val) 
    max_top = max(max_single, l+r+ root.val) 
    findMaxhelper.res = max(findMaxhelper.res, max_top) 
    return max_single 


def findMaxSum(root): 
    findMaxhelper.res = float("-inf") 
    findMaxhelper(root) 
    return findMaxhelper.res 




https://leetcode.com/problems/word-search-ii 
class TrieNode:
    def __init__(self):
        self.next = [None for i in xrange(26)]
        self.word = None

class Solution(object):
    def __init__(self):
        self.result = None 
        self.m = None
        self.n = None
        
    def findWords(self, board, words):
        """
        :type board: List[List[str]]
        :type words: List[str]
        :rtype: List[str]
        """
        if len(board) == 0 or len(board[0])==0:
            return []
        root = TrieNode()
        self.result = []
        
        # build Trie
        for word in words:
            curr = root
            for char in word:
                idx = ord(char)-97
                if curr.next[idx] == None:
                    curr.next[idx] = TrieNode()
                curr = curr.next[idx]
            curr.word = word
        
        # search on the board
        self.m, self.n = len(board), len(board[0])
        for i in xrange(self.m):
            for j in xrange(self.n):
                self.dfs(board, i, j, root)
        return self.result
    
    def dfs(self, board, i, j, curr_node):
        tmp =  board[i][j]
        if tmp == '#' or curr_node.next[ord(tmp) - 97] == None:
            return
        board[i][j] = '#'
        curr_node = curr_node.next[ord(tmp) - 97]
        if curr_node.word != None:
            self.result.append(curr_node.word)
            curr_node.word = None  # cannot return immedially as there may still exist longer word
        moves = [[-1, 0], [1, 0], [0, -1], [0, 1]]
        for move in moves:
            if 0 <= i+move[0] < self.m and 0 <= j+move[1] < self.n:
                self.dfs(board, i+move[0], j+ move[1], curr_node)
        board[i][j] = tmp 


https://leetcode.com/problems/wildcard-matching

class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        globalArray = []
        for i in range(len(p)+1):
            tempArray = [False]*(len(s)+1)
            globalArray.append(tempArray)
        
        #comparing empty with empty
        globalArray[0][0] = True
        
        for i in range(1, len(p) + 1):
            globalArray[i][0] = globalArray[i-1][0] and p[i - 1] == '*'
        
        for i in range(1,len(p)+1):
            for j in range(1,len(s)+1):
                if p[i-1] == '?' or s[j-1] == p[i-1]:
                       globalArray[i][j] = globalArray[i-1][j-1]
                elif p[i-1] == '*':
                       if (globalArray[i-1][j] or globalArray[i][j-1]):
                            globalArray[i][j] = True
                else:
                     globalArray[i][j] = False
        return globalArray[-1][-1]
                
        
        
        
        
            





