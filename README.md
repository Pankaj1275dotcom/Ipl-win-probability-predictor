# Pyramid Pattern Generator in C++

This is a simple C++ console application that prints a centered numeric pyramid based on the number of rows entered by the user.

It is designed as a beginner-level project to demonstrate the use of:
- Loops (especially nested loops)
- Input validation
- Basic output formatting
- Simple condition handling

## How it works

The program first asks the user to enter the number of rows they want for the pyramid. The valid range is between 1 and 50. If the user enters a value outside this range or provides invalid input (such as letters), the program will ask again until a valid number is entered.
Once a valid number is provided, the program prints a symmetric pyramid. Each row starts with spaces to center the numbers and then prints increasing numbers up to the current row number, followed by decreasing numbers back down to 1.

## Example Output (for input 3)
        1
      1 2 1
    1 2 3 2 1


## Features

- Accepts user input between 1 and 50
- Validates input to prevent errors or incorrect usage
- Prints a centered pyramid of numbers
- Easy to modify or extend for other pattern types

## How to Compile and Run

1. Make sure you have a C++ compiler installed (like g++).
2. Save the code in a file called `pyramid_pattern.cpp`.
3. Open a terminal or command prompt in the folder where the file is saved.
4. Compile the code using:

#Author   
Pankaj kumar Saini