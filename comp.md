___

## "Arrays"

>> custom logic function for desired sorting

```
bool comp(string a, string b){
    return a+b>b+a;
}

sort(v.begin(), v.end(), comp);
```

[Largest Number](https://www.interviewbit.com/problems/largest-number/ "good one")

[Repeat and Missing Number Array](https://www.interviewbit.com/old/problems/repeat-and-missing-number-array/ "Solve by> Normal Sum, Bit-Wise and by Playing with Index")

[N/3 Repeat Number](https://www.interviewbit.com/old/problems/n3-repeat-number/ "A Good Logic")

>> one thing about this question, `n/3` here, we take c1 and c2, as 2=3-1.

>> if `n/t`, then we take ci where i=t-1


___



## "Maths"

>> Goldbach's Conjecture says that every even number (greater than 2) is a sum of two prime numbers not necessarily unique.

>> Euclidean Algorithm for Greatest Common Divisor

[Reverse integer](https://www.interviewbit.com/problems/reverse-integer/ "the main thing is to handle 32 bit signed integer")

[Next Smallest Palindrome](https://www.interviewbit.com/problems/next-smallest-palindrome/ "very good question")

[Sum of pairwise Hamming Distance](https://www.interviewbit.com/old/problems/sum-of-pairwise-hamming-distance/ "Hamming Distance Sum")

>> ct*(n-ct) is done to multiple 'count of 1s & count of 0s', i.e. ct==1s and n-ct==0s

[Find Nth Fibonacci](https://www.interviewbit.com/problems/find-nth-fibonacci/ "really good one, haven't solved yet")


**Memory allocation to variables in computer memory**

there is separate limit to store positive and negative numbers in a 32 bit system.

4 bit, signed (by default if nothing specified)

`1010` >> this means

`-1*2^3+0*2^2+1*2^1+0*2^0=-6`

so, to know the representation of -6 in signed form
>1. write rep of 6 (in 4 bit)(0110)
>2. invert it >> 1001
>3. add 1 >> 1010 >> -6 >> voila !

so, for 32 bit, the range of storing values is:

```
_ _ _ ... _ _

0 1 1 ... 1 1

i.e. 2^31-1

```

and, for max negative

```
_ _ _ ... _ _

1 0 0 ... 0 0

i.e. -2^31
```
___


## "Bit Manipulation"
[Single Number](https://www.interviewbit.com/old/problems/single-number/ "Nice Logic")

>> a) XOR of a number with itself is 0.

>> b) XOR of a number with 0 is number itself.

>> c) A<<x, pushes x zeroes to A from its right. It is actually *pow(2,x)

>> d) A=1<<x, pushes x ones to A from its right. It is actually pow(2,x)


Let us consider the above example.  
Let ^ be xor operator as in C and C++.

`res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4`

Since XOR is associative and commutative, above 
expression can be written as:

```
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7
```

[Single Number II](https://www.interviewbit.com/old/problems/single-number-ii/ "Solve Once")

[Count Total Set Bits](https://www.interviewbit.com/old/problems/count-total-set-bits/ "See Mine and Other's Solution")

[Counting Bits](https://leetcode.com/problems/counting-bits/submissions/ "Count Bits Logic")


___


## "2-Pointers"

>> .erase has O(n^2) complexity

*a bit about pointers:*

```
int a = 5;      // we stored the value 5 on a variable named a, at address x1
int* p;         // we made a pointer that points to an adress that stores the data type int
                // the data type of this type of pointer is int*
p = &a;         // this pointer p is not pointing at the address where variable a is stored
                // & is an (address of) operator
                // lets say the address at which p is stored is x2
int** p2 = &p;  // pointer p2 of type int**, which points to an address which stores the data type int* (a pointer itself)
int b = *p;     // * is a (value at) dereference operator. means, we stored the value at the address at which the pointer p
                // is pointing in a new variable b
int* pb = &b;   // this variable b is stored at an entirely different address. it is merely a copy of value stored at address p
int c = *p;     // same story again, copying stuffs at address p to a new variable c at a new address
int c = 11;
int b = 7;
after the last two operations:
int a = 5;
int b = 7;
int c = 11;
OBVIOUSLY, we had copied the values at pointer p to b/c. Now we have changed it.
This doesn't mean that the root value at pointer p's address is changed.
DUHH !!
```


[Remove Duplicates from Sorted Array](https://www.interviewbit.com/old/problems/remove-duplicates-from-sorted-array/ "Logic")

[4Sum](https://leetcode.com/problems/4sum/ "Nothing special, just general idea of 2-pointers")

[Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/ "Good One")

___

## "Linked List"

>> Singly Linked List

```
struct ListNode{
    int val;
    struct ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
```

>> Doubly Linked List

```
struct dListNode{
    int val;
    struct dListNode* next;
    struct dListNode* prev;
    dListNode(int x){
        prev=NULL;
        val=x;
        next=NULL;
    }
};
```


[Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/submissions/ "2nd method is really cool")

[Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii "handle issue with m==1")

[Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/ "really good one")

[Merge Two Sorted Lists](https://www.interviewbit.com/old/problems/merge-two-sorted-lists/ "2 methods, iterative and recursive")

[K reverse linked list](https://www.interviewbit.com/old/problems/k-reverse-linked-list/ "dekh lena ek baar")



___

## "Hashing"

[Window String](https://www.interviewbit.com/old/problems/window-string/ "to be done with sliding windows and 'concept' of MAP")

[Longest Substring Without Repeat](https://www.interviewbit.com/problems/longest-substring-without-repeat/ "do it, good one")

```
map<int, int, greater<int>> mp;

map<int,int>::iterator it;

set<int> st;

st.insert(); st.erase();

vector<vectot<int>> vec;

set<vector<int>> st(vec);

```

___


## "Stacks and Queues"

>> stoi converts string to integer

[Redundant Braces](https://www.interviewbit.com/problems/redundant-braces/ "Just to get the idea of Stack")

[Evaluate Expression](https://www.interviewbit.com/problems/evaluate-expression/ "Reverse Polish Notation")

[132 Pattern](https://leetcode.com/problems/132-pattern/ "Nice implementation")

[Remove K Digits](https://leetcode.com/problems/remove-k-digits/submissions/ "makes you think")

[Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/ "one of the best")

[Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/ "one of the best")

___


## "Trees"

```
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    
    TreeNode(int x){
        left = NULL;
        val = x;
        right = NULL;
    }
};
```


[Inorder Traversal Without Recursion](https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/ "solve once")

[Maximum Depth of N-ary Tree](https://leetcode.com/problems/maximum-depth-of-n-ary-tree/ "simple hi h, solve kar lo but")

[Next Greater Number BST](https://www.interviewbit.com/problems/next-greater-number-bst/ "just solve it")

[Vertical Order Traversal of Binary Tree](https://www.interviewbit.com/old/problems/vertical-order-traversal-of-binary-tree/ "its not pre-order, its level order")

[Boundary Traversal of binary tree](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/ "implementation")

[Flatten Binary Tree to Linked List](https://www.interviewbit.com/old/problems/flatten-binary-tree-to-linked-list/ "good one")

___


## "Backtracking"

[Sudoku](https://www.interviewbit.com/old/problems/sudoku/ "Solve this once for a good overview of board problems")

[Subset](https://www.interviewbit.com/old/problems/subset/ "this approach might help in some other problems, do it by recursion and backtracking >> 2 methods")

[Combination Sum II](https://www.interviewbit.com/problems/combination-sum-ii/ "with and without the for loop")

```
set<vector<int>> v2(v1.begin(), v1.end());
v1.clear();
for(auto it:v2){
    v1.push_back(it);
}
```

___

## "Prioroty Queue"

```
priority_queue<int, vector<int>, greater<int>> pq;

priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
```

[Trains and Platforms](https://www.hackerrank.com/contests/kilobyte-uz-contest1/challenges/trains-and-platforms/problem "good one for priority queue")

___


## "Graphs"

> n: No. of vertices

> Directed: max edges = (n)*(n-1)

> Undirected: max edges = (n)*(n-1)/2, assuming no self loop or multiedge

> Dense Graph: too many edges

> Sparse Graph: too few edges

> Walk, path, trail, closed walk, simple cycle

> Connected, strongly connected, weakly connected, not connected

**Graph representation:**

### Edge List:

i. Finding adjacent nodes = O(n2)

ii. Check if given two nodes are connected = O(n2)

iii. not efficient in time complexity

### Adjacency Matrix:

i. Finding adjacent nodes = O(n)

ii. Check if given two nodes are connected = (O(1) + O(n) finding if 2 vertices are connected) (O(n) if names are given, not index, can be avoided using a little more space >> hash table)

iii. good when graph is dense, no of edges is close to number of vertices, or v2 is too less)

iv. O(n2) space

v. big time-space tradeoff

### Adjacency List:

i. Space: O(e)

ii. Finding adjacent nodes = O(n)

iii. Check if given two nodes are connected = O(n)


___


## "BFS"

[Cousins in Binary Tree](https://leetcode.com/problems/cousins-in-binary-tree "theek hi h matlab")

[Find Bottom Left Tree Value](https://leetcode.com/problems/find-bottom-left-tree-value "dfs: 2 ways, bfs: 1 ways >> total 3 ways")

[Find Largest Value in Each Tree Row](https://leetcode.com/problems/find-largest-value-in-each-tree-row/ "dekh lo ek baar, kya hi")

[As Far from Land as Possible](https://leetcode.com/problems/as-far-from-land-as-possible/ "layer by layer")

[Snake and Ladder](https://practice.geeksforgeeks.org/problems/snake-and-ladder-problem4816/1# "just think once and see the soln")



___


## "DFS'

[Increasing Order Search Tree](https://leetcode.com/problems/increasing-order-search-tree/ "implementation")

[Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree "nice implementation")

[Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/ "2 methods + bfs")

[Lowest Common Ancestor in a Binary Tree](https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1 "good implementation")

[Distribute Coins in Binary Tree](https://leetcode.com/problems/distribute-coins-in-binary-tree/ "good implementation")

[Delete Nodes And Return Forest](https://leetcode.com/problems/delete-nodes-and-return-forest/ "good implementation")

[Regions Cut By Slashes](https://leetcode.com/problems/regions-cut-by-slashes/ "just have a look")

[Number of Provinces](https://leetcode.com/problems/number-of-provinces/ "just have a look")

[All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/ "good implementation")

 
___


## "Dynamic Programming"

[House Robber](https://leetcode.com/problems/house-robber "implementation")

[Longest Increasing Subsequence](https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1 "implementation")

[Optimal Strategy For A Game](https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1 "always do")

[Knight Probability in Chessboard](https://leetcode.com/problems/knight-probability-in-chessboard "good one")

[Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/ "implementation")

[Minimum ASCII Delete Sum for Two Strings](https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/ "implementation")

[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/ "implementation")

[Maximize The Cut Segment](https://practice.geeksforgeeks.org/problems/cutted-segments/0 "good one")

[Dice Roll Simulation](https://leetcode.com/problems/dice-roll-simulation "great question")



___


## "Graph Algo: Dijkstra"

> implementational code

![Sample Graph](https://serving.photos.photobox.com/3665964029648118fb6c0606cd9652a0fe0f44220b87b5a8e418738b8ae4819880796710.jpg "Sample Graph to Understand Code)


```
class Solution{
	public:
    vector<int> dijkstra(int v, vector<vector<int>> adj[], int s){
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,s});
        vector<int> ans(v,INT_MAX);
        vector<int> vis(v,0);
        while(!pq.empty()){
            auto cp = pq.top();
            pq.pop();
            int cd = cp.first;
            int cn = cp.second;
            if(ans[cn]>cd) ans[cn]=cd;;
            vis[cn]=1;
            for(auto it:adj[cn]){
                int nn = it[0];
                int nd = it[1]+cd;
                if(vis[nn]!=1){
                    pq.push({nd,nn});
                }
            }
        }
        return ans;
    }
};
```

[Dijkstra Implementation](https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1 "Dijkstra implementation")

[Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops "have a look once")

[Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water "have a look once")

___

## "Graph Algo: Topological Sort"

> Topological Sort: DFS

```
class Solution{
    void topo(int v, vector<int> adj[], stack<int> &st, vector<int> &vis, int ind){
        if(vis[ind]) return;
        vis[ind]=1;
        for(auto it:adj[ind]){
            if(!vis[it]){
                topo(v,adj,st,vis,it);
            }
        }
        st.push(ind);
    }
    
	public:
	vector<int> topoSort(int v, vector<int> adj[]) {
	    stack<int> st;
	    vector<int> ans;
	    vector<int> vis(v,0);
	    for(int i=0; i<v; i++){
	        if(!vis[i]) topo(v,adj,st,vis,i);
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};
```

> Topological Sort: Kahn's Algorithm

```
class Solution{
	public:
	vector<int> topoSort(int v, vector<int> adj[]){
	    vector<int> ind(v,0);
	    for(int i=0; i<v; i++){
	        for(auto it:adj[i]){
	            ind[it]++;
	        }
	    }
	    vector<int> ans;
	    queue<int> q;
	    for(int i=0; i<v; i++){
	        if(ind[i]==0) q.push(i);
	    }
	    int ct=0;
	    while(!q.empty()){
	        int curr = q.front();
	        q.pop();
	        ans.push_back(curr);
	        for(auto it:adj[curr]){
	            ind[it]--;
	            if(ind[it]==0) q.push(it);
	        }
	        ct++;
	    }
	    return ans;
	}
};
```

[Topological Sort](https://practice.geeksforgeeks.org/problems/topological-sort/1 "do this by dfs")

[Topological Sort](https://practice.geeksforgeeks.org/problems/topological-sort/1 "do this by kahn's algo")

___

## "Graph Algo: DFS-Graph coloring, cycle detection in directed and undirected graph"



___

## "Sliding Window"

___

## "Binary Search"

[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/ "considered as a really good question")


___

## "Greedy"

___

## "Graph Algo: Union Find"

___

## "Misc"

[Integer to Roman](https://leetcode.com/problems/integer-to-roman/ "implementation")

[String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/ "just see implementational logic once")

[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/ "Implementation")




___
___
___
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
___
___

**   bold
#    heading 1
##   heading 2

---  underline (automatically after a heading)
_a_  italic
~a~  strikethrough
[alt txt](link "")  link >> with an ! sign
[alt txt](link "") pic
`
3 ` >> code block
|a|b|c|
|---|---|---|

> for highlighting/quoting

list, numbers, -

___
___
___
