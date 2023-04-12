
## SEARCH ALGORITHMS IN C LANGUAGE 

Not even a single day pass, when we do not have to search for something in our day to day life, car keys, books, pen, mobile charger and what not. Same is the life of a computer, there is so much data stored in it, that whenever a user asks for some data, computer has to search it's memory to look for the data and make it available to the user. And the computer has it's own techniques to search through it's memory fast.

What if you have to write a program to search a given number in an array? How will you do it?

Well, to search an element in a given array, there are two popular algorithms available:

Linear Search

Binary Search


Linear Search

Linear search is a very basic and simple search algorithm. In Linear search, we search an element or value in a given array by traversing the array from the starting, till the desired element or value is found.

It compares the element to be searched with all the elements present in the array and when the element is matched successfully, it returns the index of the element in the array, else it return -1.

Linear Search is applied on unsorted or unordered lists, when there are fewer elements in a list.

Features of Linear Search Algorithm

It is used for unsorted and unordered small list of elements.
It has a time complexity of O(n), which means the time is linearly dependent on the number of elements, which is not bad, but not that good too.
It has a very simple implementation.

Binary Search

Binary Search is used with sorted array or list. In binary search, we follow the following steps:

We start by comparing the element to be searched with the element in the middle of the list/array.
If we get a match, we return the index of the middle element.

If we do not get a match, we check whether the element to be searched is less or greater than in value than the middle element.

If the element/number to be searched is greater in value than the middle number, then we pick the elements on the right side of the middle element(as the list/array is sorted, hence on the right, we will have all the numbers greater than the middle number), and start again from the step 1.

If the element/number to be searched is lesser in value than the middle number, then we pick the elements on the left side of the middle element, and start again from the step 1.

Binary Search is useful when there are large number of elements in an array and they are sorted.

So a necessary condition for Binary search to work is that the list/array should be sorted.


Features of Binary Search
It is great to search through large sorted arrays.

It has a time complexity of O(log n) which is a very good time complexity. 

It has a simple implementation.


Time Complexity & its Calculations

Time Complexity is one common word you would have come across if you are an efficient programmer.

What is Time Complexity?

Time Complexity of an algorithm/program is not the measure of actual time taken for the program to be executed, rather it is the number of times each statement of the logic gets executed to produce the required output.

In simpler terms, here is what we mean. Let us consider the below code.


﻿#include <stdio.h>
void main()
{
int i, n = 5;
for (i = 1; i <= n; i++) {
printf("myprotocol tech n");
} 
}

So, the above code when executed using a compiler has given the below output. If you can see, the compiler shows that the code was executed in 1.166 secs and a lot of us assume this to be time complexity, but it isn't.

Rather, the time-complexity of this code is dependent on the number of time the statements get executed. Here, the for loop gets executed 'n' number of times and hence complexity is O(n) 

compliled and executed in 1.66 seconds 
myprotocol tech
myprotocol tech
myprotocol tech
myprotocol tech
myprotocol tech

command exited with non-zero status 6


Why do you need to Calculate Time Complexity?

A lot of times, there is more than one way to solve a particular problem and in such cases, you should be able to identify the most efficient solution out of all. This is where time-complexity comes into the picture. Time-complexity helps you compare the performance of different solutions, thus helping you determine the most efficient solution.

How do you Calculate the Time Complexity of an Algorithm?


Time-complexity can be expressed using the below three terms called as    Asymptotic Notations.


Big - Oh or Big O Notation (BIG O)
Big - Omega
Big - Theta


But most times, we will use the Big O notation because it will give us an upper limit of the execution time i.e. the execution time in the worst-case inputs. Also, an algorithm's running time may vary among different inputs of the same size, and hence we consider worst-case complexity, which is the maximum amount of time required for inputs of a given size.


Note: Time-Complexity is nothing but a function of the input size.


Time Complexity Examples

#include <stdio.h>
int main()
{
  int a = 4;
  int b = 6;
  int c;
  c = a + b;
  printf(%d, c);
}


Time Complexity Calculation: The time complexity of the above-given program is O(1), as this program consists of only assignment, arithmetic operations and all those will be executed only once.

int count(int arr[], int n)
{
  int sum = 0, i;
  for(i = 0; i < n; i++)  //Control statement
  {
     sum = sum + arr[i];
  }
  return sum;
}


Time Complexity Calculation: In the above-given snippet, we have a control statement which executes for n times. Along with that we also have operations like assignment, arithmetic and a return statement. Hence, the time complexity is O(n + 3).

For larger values of n, the constant values become negligible. So if a program consists of a control statement, then the complexities of assignment, arithmetic, logical and return statements can be ignored.


Hence, the final time complexity of the above-given snippet is O(n).


int i,j, n = 8;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
printf("myprotocol tech");
} 
} 
}

Time Complexity Calculation: In the above snippet, the first & the second for loops get executed n times individually. So the time complexity accounts to n*n = O(n2)


while(low<=high)
{
mid=(low+high)/2;
if(n<arr[mid])
high=mid-1;
elseif(n>arr[mid])
low=mid+1;
elsebreak;
}

Time Complexity Calculation: This is the algorithm of binary search. It breaks the given set of elements into two halves and then searches for a particular element. Further, it keeps dividing these two halves into further halves until each individual element is a set. All such algorithms which work on the principle of recursive division of elements into halves will have a O(Log n) complexity.


