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


## Arrays
[array Q1](https://www.interviewbit.com/old/problems/repeat-and-missing-number-array/ "do this question by> normal sum, bit-wise and by playing with index")

[array Q2](https://www.interviewbit.com/old/problems/n3-repeat-number/ "a good logic inside, haven't understood it yet")

___

## Maths
**Goldbach's Conjecture**
says that every even number (greater than 2) is a sum of two prime numbers not necessarily unique.

[math Q1](https://www.interviewbit.com/old/problems/sum-of-pairwise-hamming-distance/ "Hamming Distance Sum")



**memory allocation to variables in computer memory**

there is separate limit to store positive and negative numbers in a 32 bit system.

4 bit, signed (by default if nothing specified)

1010
this means

-1*2^3+0*2^2+1*2^1+0*2^0=-6

so, to know the representation of -6 in signed form
1. write rep of 6 (in 4 bit)(0110)
2. invert it >> 1001
3. add 1 >> 1010 >> -6 >> voila !

so, for 32 bit, the range of storing values is:

_ _ _ ... _ _
0 1 1 ... 1 1
i.e. 2^31-1

and, for max negative
_ _ _ ... _ _
1 0 0 ... 0 0

i.e. -2^31


## Bit Manipulation
[Bitwise Q1](https://www.interviewbit.com/old/problems/single-number/ "nice logic")

a) XOR of a number with itself is 0.

b) XOR of a number with 0 is number itself.

Let us consider the above example.  
Let ^ be xor operator as in C and C++.

res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4

Since XOR is associative and commutative, above 
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
