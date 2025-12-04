# CIS25 Week 7

# Overview

This week’s assignment focuses on debugging C++ code and rewriting it using nested if statements.
The goal is to correctly determine and display the largest of three input numbers.

# test1.cpp
# What the Program Does

Displays a menu with three options:

Add Item

View Items

Exit

Accepts user input.

Uses conditional statements (if, else if, else) to check which option the user selected.

Prints the appropriate response depending on the choice.

Handles invalid input by showing an error message.




# test2.cpp

# What the Program Does

This program asks the user to enter three numbers.
Then, using nested if statements, it compares the numbers step-by-step to determine which one is the largest.

The logic works as follows:

Assume the first number (n1) is the largest.

Check if the second number (n2) is larger than the current largest.

If yes, update the largest.

Inside this block, check if the third number (n3) is even larger.

If the second number is not larger, compare the third number (n3) with the current largest.

Output the final largest value.

This ensures that all comparisons are handled through nested if statements only, without using else if chains or built-in functions.
