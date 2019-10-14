Given a non-empty sentence, write a program to print the reformed string based on the following rules:

Modify the odd positioned words by reversing the sequence of odd positioned characters and placing them next to the group of even positioned characaters 
Modify the even positioned words by replacing upper case vowels by 'X' and lower case vowels by 'x'
Input and Output Format:

Read the sentence from the standard input stream and print the reformed string to the standard output stream

Sample Input:
Python Is Truly Interesting Programming Language

Sample Output:
yhnotP Xs rlyuT Xntxrxstxng rgamngimroP Lxngxxgx	

Explanation:
The words ‘Python’, ‘Truly’ and ’Programming’ are at the odd positions i.e 1st ,3rd and 5th in the given sentence. In the word ‘Python’, the characters ‘P’, ’t’ and ‘o’ are at the odd positions. 
Hence its reversed as ‘o’, ’t’, ’P’ and appears after all the even position characters ‘y’, ‘h’, ‘n’. Hence the word ‘Python’ appears as ‘yhnotP’. 

The same rule is applicable for ‘Truly’ and ‘Programming’ The words ‘Is’, ‘Interesting’ and ‘Language’ are at the even positions i.e 2nd ,4th and 6th in the given sentence.
 In the word ‘Interesting’, the characters ‘I’, ‘e’, ’i’ are all vowels. All uppercase vowels are replaced by ‘X’ and all lowercase vowels are replaced by ‘x’. Hence the word ‘Interesting’ appears as ‘Xntxrxstxng’ in the output sentence. The same is applicable for the words ‘Is’ and ‘Language’.