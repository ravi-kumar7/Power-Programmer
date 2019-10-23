An array of integers is given where each member represents the maximum number of steps that can be made forward from that member. Write a program to print the minimum number of hops required to reach the end of the array, starting from first element. Assume all the members are greater than or equal to 0. If a member is 0, then no forward movement is allowed through that.


Input and Output Format:

Read the input from standard input and print the output to standard output.


First line in the input is the number of elements of the array where second line has the array elements separated by space. Print “infinite” if last element is unreachable , minimum number of jumps otherwise

Sample Input	Sample Output	Explanation
6
1 1 1 1 1 1
5	Minimum 5 hops are needed to reach the end of the array from the beginning
10
1 3 9 8 9 9 1 0 1 0
3	Minimum hops : 1 --> 3 --> 9 --> 0
5
1 0 1 0 1	infinite	No movement allowed after the second element