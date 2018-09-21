# FibonacciMemoization

In mathematics, the Fibonacci numbers are the numbers in the following integer sequence, called the Fibonacci sequence, and characterized by the fact that every number after the first two is the sum of the two preceding ones:

1, 1, 2, 3, 5, 8, 13, 21, 34. 55, 89, 144, ...

By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1, depending on the chosen starting point of the sequence, and each subsequent number is the sum of the previous two.

The sequence Fn of Fibonacci numbers is defined by the recurrence relation: 

F(n) = F(n-1) + F(n-2)

In computer science, the Fibonacci sequence could be build in so many programming language. First of all, if we use the Divide-et-Impera approuch, the computational cost is O(phi^n), where phi is the Golden Ratio. To avoid this, introducing the Dynamic Programming

# Dynamic Programming

Dynamic programming is both a mathematical optimization method and a computer programming method. The method was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics. In both contexts it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have optimal substructure.

In the Fibonacci sequence we can made a dynamic programming approuch to avoid the exponential computational cost, usign the memoization technique.
