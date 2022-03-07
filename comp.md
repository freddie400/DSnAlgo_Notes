___

## Arrays
[Repeat and Missing Number Array](https://www.interviewbit.com/old/problems/repeat-and-missing-number-array/ "Solve by> Normal Sum, Bit-Wise and by Playing with Index")

[N/3 Repeat Number](https://www.interviewbit.com/old/problems/n3-repeat-number/ "A Good Logic")

___

## Maths
**Goldbach's Conjecture** says that every even number (greater than 2) is a sum of two prime numbers not necessarily unique.

[Hamming Distance Sum](https://www.interviewbit.com/old/problems/sum-of-pairwise-hamming-distance/ "Math Q1")

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


## Bit Manipulation
[Nice Logic](https://www.interviewbit.com/old/problems/single-number/ "Bit-Wise Q1")

a) XOR of a number with itself is 0.

b) XOR of a number with 0 is number itself.

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

[Solve Once](https://www.interviewbit.com/old/problems/single-number-ii/ "Bit-Wise Q2")

[See Mine and Other's Solution](https://www.interviewbit.com/old/problems/count-total-set-bits/ "Bit-Wise Q3")

[Count Bits Logic](https://leetcode.com/problems/counting-bits/submissions/ "Bit-Wise Q4")

___

## 2-Pointers

> .erase has O(n^2) complexity

[Logic](https://www.interviewbit.com/old/problems/remove-duplicates-from-sorted-array/ "2-Pointers Q1")

[Good One](https://leetcode.com/problems/fruit-into-baskets/ "2-Pointers Q2")


___
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
