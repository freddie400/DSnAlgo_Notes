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

[Repeat and Missing Number Array](https://www.interviewbit.com/problems/repeat-and-missing-number-array/ "Solve by> Normal Sum, Bit-Wise and by Playing with Index")

[N/3 Repeat Number](https://www.interviewbit.com/problems/n3-repeat-number/ "A Good Logic")

>> one thing about this question, `n/3` here, we take c1 and c2, as 2=3-1.

>> if `n/t`, then we take ci where i=t-1


___



## "Maths"

>> Goldbach's Conjecture says that every even number (greater than 2) is a sum of two prime numbers not necessarily unique.

>> Euclidean Algorithm for Greatest Common Divisor

[Reverse integer](https://www.interviewbit.com/problems/reverse-integer/ "the main thing is to handle 32 bit signed integer")

[Next Smallest Palindrome](https://www.interviewbit.com/problems/next-smallest-palindrome/ "very good question")

[Sum of pairwise Hamming Distance](https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/ "Hamming Distance Sum")

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
[Single Number](https://www.interviewbit.com/problems/single-number/ "Nice Logic")

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

[Single Number II](https://www.interviewbit.com/problems/single-number-ii/ "Solve Once")

[Count Total Set Bits](https://www.interviewbit.com/problems/count-total-set-bits/ "See Mine and Other's Solution")

[Counting Bits](https://leetcode.com/problems/counting-bits/ "Count Bits Logic")


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


[Remove Duplicates from Sorted Array](https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/ "Logic")

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


[Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/ "2nd method is really cool")

[Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii "handle issue with m==1")

[Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/ "really good one")

[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/ "2 methods, iterative and recursive")

[K reverse linked list](https://www.interviewbit.com/problems/k-reverse-linked-list/ "dekh lena ek baar")



___

## "Hashing"

[Window String](https://www.interviewbit.com/problems/window-string/ "to be done with sliding windows and 'concept' of MAP")

[Longest Substring Without Repeat](https://www.interviewbit.com/problems/longest-substring-without-repeat/ "do it, good one")

```
map<int, int, greater<int>> mp;

map<int,int>::iterator it;

set<int> st;

st.insert(); st.erase();

vector<vectot<int>> vec;

set<vector<int>> st(vec);

set<vector<int>> v2(v1.begin(), v1.end());
v1.clear();
for(auto it:v2){
    v1.push_back(it);
}

```

___


## "Stacks and Queues"

>> stoi converts string to integer

[Redundant Braces](https://www.interviewbit.com/problems/redundant-braces/ "Just to get the idea of Stack")

[Evaluate Expression](https://www.interviewbit.com/problems/evaluate-expression/ "Reverse Polish Notation")

[132 Pattern](https://leetcode.com/problems/132-pattern/ "Nice implementation")

[Remove K Digits](https://leetcode.com/problems/remove-k-digits/ "makes you think")

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

[Vertical Order Traversal of Binary Tree](https://www.interviewbit.com/problems/vertical-order-traversal-of-binary-tree/ "its not pre-order, its level order")

[Boundary Traversal of binary tree](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/ "implementation")

[Flatten Binary Tree to Linked List](https://www.interviewbit.com/problems/flatten-binary-tree-to-linked-list/ "good one")

[Right View of Binary Tree](https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1/ "solve once")

[Right View of Binary Tree Using Queue](https://www.geeksforgeeks.org/right-view-binary-tree-using-queue/ "solve once")

[Left View of Binary Tree](https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/ "solve once")

[Top View of Binary Tree](https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1 "solve once")

[Bottom View of Binary Tree](https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1 "solve once")


___


## "Backtracking"

[Sudoku](https://www.interviewbit.com/problems/sudoku/ "Solve this once for a good overview of board problems")

[Subset](https://www.interviewbit.com/problems/subset/ "this approach might help in some other problems, do it by recursion and backtracking >> 2 methods")

[Combination Sum II](https://www.interviewbit.com/problems/combination-sum-ii/ "with and without the for loop")


Time Complexities:

NQueen: O(n!)

Subset: len*(2^N)

Combinations: k.C(N,k)

Combination Sum: len*(2^t)

Combination Sum II: len*(2^N)

Subsets II: len*(2^N)

[ref 1](https://leetcode.com/problems/combination-sum/discuss/1755084/Detailed-Time-and-Space-Complecity-analysisc%2B%2Bjavabacktracking)

[ref 2](https://leetcode.com/problems/combination-sum-iii/discuss/427713#:~:text=The%20time%20complexity%20is%20O,length%20of%20each%20possible%20solution.)

___

## "Prioroty Queue"

```
priority_queue<int, vector<int>, greater<int>> pq;

priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

priority_queue<pair<int,char>> pq;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

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


*Time Complexity Analysis of Some Special Cases:*

V: No. of Vertices

E: No. of Edges


1. BFS: O(V+E)
2. DFS: O(V+E)
3. Detect Cycle in a Directed Graph: O(V+E)
4. Detect Cycle in an Undirected Graph: O(V+E)
5. BFS with multiple sources (Rotten Oranges): O(V+E)=O(No. of cells in the grid)
6. Topological Sort: O(V+E)
7. Shortest path in an unweighted graph: O(V+E)
8. Shortest path in a weighted graph (Dijkstra): O(V+VlogE)

[ref](https://towardsdatascience.com/graph-data-structure-cheat-sheet-for-coding-interviews-a38aadf8aa87 "may refer to this")

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

[Matrix Chain Multiplication](https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1/ "great question")

[Longest Increasing Subsequence](https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1 "implementation")

[Optimal Strategy For A Game](https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1 "always do")

[Knight Probability in Chessboard](https://leetcode.com/problems/knight-probability-in-chessboard "good one")

[Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/ "implementation")

[Minimum ASCII Delete Sum for Two Strings](https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/ "implementation")

[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/ "implementation")

[Maximize The Cut Segment](https://practice.geeksforgeeks.org/problems/cutted-segments1642/1/ "good one")

[Dice Roll Simulation](https://leetcode.com/problems/dice-roll-simulation "great question")



___


## "Graph Algo: Dijkstra"

> implementational code

![Sample Graph](https://serving.photos.photobox.com/3665964029648118fb6c0606cd9652a0fe0f44220b87b5a8e418738b8ae4819880796710.jpg "Sample Graph to Understand Code")


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

Topological Sort is only possible for a DAG (Directed Acyclic Graph)

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

> solve the questions first, then go to code:

[Cycle Detection in Directed Graph](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1# "solve once")

[Cycle Detection in Undirected Graph](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1# "solve once")



> Cycle Detection in Directed Graph

![Directed Graph](https://media.geeksforgeeks.org/wp-content/uploads/cycle.png "Directed Graph with Cycle")


```
class Solution {
    bool dfs(int i, vector<int> &vis, vector<int> adj[]){
        if(vis[i]) return 1;
        vis[i]=1;
        for(auto it:adj[i]){
            if(vis[it]!=2)
            if(dfs(it,vis,adj)) return 1;
        }
        vis[i]=2;
        return 0;
    }
    
    // the vis[i]=2 thing is done to mark that that node has been traversed thoroughly, so that we don't end up going through that node again.
    
  public:
    bool isCyclic(int v, vector<int> adj[]){
        vector<int> vis(v,0);
        for(int i=0; i<v; i++){
            if(!vis[i])
            if(dfs(i,vis,adj)) return 1;
        }
        return 0;
    }
};
```


> Cycle Detection in Undirected Graph

![Undirected Graph](https://media.geeksforgeeks.org/wp-content/cdn-uploads/cycleGraph-300x156.png "Undirected Graph with Cycle")

```
class Solution {
    
    bool dfs(int v, vector<int> &vis, vector<int> adj[], int p){
        // if(vis[v]) return 1;  // this line is redundant
        vis[v]=1;
        for(auto it:adj[v]){
            if(!vis[it]){
                if(dfs(it,vis,adj,v)) return 1;
            }else if(it!=p) return 1;
        }
        return 0;
    }
    
  public:
    bool isCycle(int v, vector<int> adj[]) {
        vector<int> vis(v,0);
        for(int i=0; i<v; i++){
            if(!vis[i])
            if(dfs(i,vis,adj,-1)) return 1;
        }
        return 0;
    }
};
```


___

## "Sliding Window"

[Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/ "solve once")

[Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/ "good one")

[Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring "Do it again")

___

## "Binary Search"

Binary Search STL Functions: [Binary Search, Upper Bound & Lower Bound](https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/ "STL functions")

> when you are 'searching' for an element, you do `lo=mid` or `hi=mid`
> when you are 'checking' if that no. is an answer, you do `lo=mid+1` or `hi=mid-1`

[Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array "kuch bhi nai h, but lo & hi ka management dekh lo ek baar")

[Maximum Length of Repeated Subarray](https://leetcode.com/problems/maximum-length-of-repeated-subarray "good one, its actually DP")

[Allocate Minimum Number of Pages](https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages/0 "one of the bests in BS")

[The Painter’s Partition Problem](https://www.interviewbit.com/problems/painters-partition-problem/ "one of the bests in BS")

[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/ "considered as a really good question")

___

## "Greedy"

[Gas Station](https://www.interviewbit.com/problems/gas-station/ "implementation")

[Couple Holding Hands](https://leetcode.com/problems/couples-holding-hands/ "noice")

___

## "Graph Algo: Union Find"

___

## "Misc"

[Integer to Roman](https://leetcode.com/problems/integer-to-roman/ "implementation")

[String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/ "just see implementational logic once")

[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/ "Implementation")

[Permutations](https://leetcode.com/problems/permutations/ "implementation")

[Word Ladder II](https://leetcode.com/problems/word-ladder-ii/ "just visualize the implementation")

[LRU Cache](https://leetcode.com/problems/lru-cache/ "solve once")

[LFU Cache](https://leetcode.com/problems/lfu-cache/ "do everytime")

[Integer to English Words](https://leetcode.com/problems/integer-to-english-words/ "have a look")

[Find Median of Data Stream](https://leetcode.com/problems/find-median-from-data-stream/ "good one")

[Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/ "do it in O(n long(n))")

[Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/ "headache of a problem, try to do it by DP, if can't, don't spend much time")

[MCM](https://leetcode.com/problems/burst-balloons/discuss/1986215/Evolve-from-Matrix-Chain-Multiplication-and-master-all-kinds-of-MCM-problems "great question for concept of MCM")

[Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/ "good one")

[Box Stacking](https://practice.geeksforgeeks.org/problems/box-stacking/1 "good one")

[Maximum Height by Stacking Cuboids](https://leetcode.com/problems/maximum-height-by-stacking-cuboids/ "good one")

[Minesweeper](https://leetcode.com/problems/minesweeper/ "good one")

[Super Egg Drop](https://leetcode.com/problems/super-egg-drop/ "great one, do by all methods")

[Escape the Spreading Fire](https://leetcode.com/problems/escape-the-spreading-fire/ "good one")

[Minimum Time to Finish the Race](https://leetcode.com/problems/minimum-time-to-finish-the-race/ "good one")

[Reorganize String](https://leetcode.com/problems/reorganize-string/)

[]( "good one")

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

https://ganeshpr227.medium.com/30-days-interview-preparation-plan-200-best-coding-questions-and-behavioural-interviews-3f8fc19c2361


https://blog.shahjalalshohag.com/topic-list/


## Resources

[Google 1](https://leetcode.com/discuss/interview-experience/776280/Google-or-L3-or-Bangalore-or-July-2020-Offer)

[Google 2](https://leetcode.com/discuss/interview-experience/2005795/google-l4-zurich-march-2022-offer-accepted)

[Google 3](https://leetcode.com/discuss/interview-experience/2082298/when-life-hurts-google)

[Amazon LP](https://leetcode.com/discuss/study-guide/2004928/amazon-lp-questions)

[Cool Down Periods](https://leetcode.com/discuss/career/771157/cool-down-period-for-all-faangs-number-of-tries-and-different-job-posts)






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
