___

## "Arrays"
[Repeat and Missing Number Array](https://www.interviewbit.com/old/problems/repeat-and-missing-number-array/ "Solve by> Normal Sum, Bit-Wise and by Playing with Index")

[N/3 Repeat Number](https://www.interviewbit.com/old/problems/n3-repeat-number/ "A Good Logic")

___

## "Maths"

>> Goldbach's Conjecture says that every even number (greater than 2) is a sum of two prime numbers not necessarily unique.

[Sum of pairwise Hamming Distance](https://www.interviewbit.com/old/problems/sum-of-pairwise-hamming-distance/ "Hamming Distance Sum")

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

[Remove Duplicates from Sorted Array](https://www.interviewbit.com/old/problems/remove-duplicates-from-sorted-array/ "Logic")

[4Sum](https://leetcode.com/problems/4sum/ "Nothing special, just general idea of 2-pointers")

[Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/ "Good One")

___

## "Linked List"

**later**

___

## "Hashing"

[Window String](https://www.interviewbit.com/old/problems/window-string/ "to be done with sliding windows and 'concept' of MAP")

___


## "Stacks and Queues"

>> stoi converts string to integer

[Redundant Braces](https://www.interviewbit.com/problems/redundant-braces/ "Just to get the idea of Stack")

[Evaluate Expression](https://www.interviewbit.com/problems/evaluate-expression/ "Reverse Polish Notation")

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
