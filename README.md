# C++ Programming Projects

This repository contains a collection of C++ programs demonstrating various programming concepts such as function overloading, inheritance, matrix operations, and geometric calculations.

## Programs Included:

1. **Odd Numbers between 1 and n**
2. **Reverse Digits of a Number**
3. **Employee Salary Calculation Using Function Overloading**
4. **Matrix Operations (Addition and Multiplication)**
5. **Geometric Shape Area Calculation Using Function Overloading**

---

## 1. Odd Numbers between 1 and n

### Program Overview:
This program prints all odd numbers between 1 and a given number `n`. The program takes an integer `n` as input from the user and prints all odd numbers from 1 to `n` using a loop.

### How it Works:
- The user is prompted to enter a number `n`.
- A loop is used to iterate through numbers from 1 to `n` and check if a number is odd. If it is, the number is printed.

---

## 2. Reverse Digits of a Number

### Program Overview:
This program takes an integer `n` as input and reverses its digits.

### How it Works:
- The user enters an integer `n`.
- The program uses a while loop to extract each digit of the number by dividing it by 10 and storing the reversed digits in a new variable.
- The reversed number is then displayed.

---

## 3. Employee Salary Calculation Using Function Overloading

### Program Overview:
This program demonstrates function overloading to calculate the salary of employees at different levels in a company hierarchy. It calculates the salary for three types of employees: Interns, Regular Employees, and Managers.

### How it Works:
- The program has three overloaded `calculateSalary()` functions:
  - **Intern**: Computes salary based on a stipend.
  - **Regular Employee**: Computes salary based on a base salary and bonuses.
  - **Manager**: Computes salary based on a base salary, bonuses, and performance incentives.
- The user selects the type of employee and inputs the relevant data (such as salary, bonus, and performance incentives) to compute the total salary.

---

## 4. Matrix Operations (Addition and Multiplication)

### Program Overview:
This program allows matrix addition and multiplication through function overloading. The program performs matrix operations based on the dimensions and elements of the matrices.

### How it Works:
- The program takes two matrices as input from the user.
- It provides two overloaded functions for:
  - **Matrix Addition**: Adds two matrices of the same dimensions.
  - **Matrix Multiplication**: Multiplies two matrices where the number of columns of the first matrix is equal to the number of rows of the second matrix.
- The program displays the result of the matrix operation based on user choice.

---

## 5. Geometric Shape Area Calculation Using Function Overloading

### Program Overview:
This program calculates the area of different geometric shapes (Circle, Rectangle, and Triangle) using function overloading.

### How it Works:
- The program provides three overloaded functions to calculate the area of different shapes:
  - **Circle**: Takes the radius as input and calculates the area using the formula `π * radius^2`.
  - **Rectangle**: Takes the length and breadth as input and calculates the area using the formula `length * breadth`.
  - **Triangle**: Takes the base and height as input and calculates the area using the formula `0.5 * base * height`.
- The user selects the shape, inputs the required parameters, and the program computes the area.

---
