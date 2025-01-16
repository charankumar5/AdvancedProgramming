# SimpleVector: A Beginner-Friendly C++ Example of Dynamic Memory Management

The **SimpleVector** project showcases a simple yet powerful example of how to implement a C++ class that dynamically manages memory. It demonstrates best practices for using constructors and destructors to handle memory allocation and deallocation efficiently, along with a method to print the contents of a dynamically allocated array.

---

## 📝 Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [How the Code Works](#how-the-code-works)
4. [File Structure](#file-structure)
5. [Code Walkthrough](#code-walkthrough)
    - [Header File (`SimpleVector.h`)](#1-simplevectorh)
    - [Source File (`SimpleVector.cpp`)](#2-simplevectorcpp)
    - [Main File (`Main.cpp`)](#3-maincpp)
6. [How to Run the Code](#how-to-run-the-code)
7. [Detailed Output Explanation](#detailed-output-explanation)
8. [Best Practices Demonstrated](#best-practices-demonstrated)
9. [Suggestions for Further Development](#suggestions-for-further-development)

---

## 🔰 Introduction

The purpose of this project is to:
- Teach beginners how to manage memory dynamically using the `new[]` and `delete[]` operators in C++.
- Provide an example of how constructors and destructors work together for proper memory management.
- Show how to use member functions to interact with class objects.

---

## ✨ Features

1. **Dynamic Memory Allocation**: The `SimpleVector` class dynamically allocates memory for an array of doubles.
2. **Destructor for Cleanup**: Automatically releases allocated memory to prevent memory leaks.
3. **Default Constructor Parameters**: Allows object creation with or without specifying array size.
4. **Custom Print Method**: A method to output debug information and array elements.
5. **Demonstration of Repeated Allocation/Deallocation**: The `main()` function creates and destroys 100 `SimpleVector` objects in a loop, highlighting memory management.

---

## ⚙️ How the Code Works

- The `SimpleVector` class allocates memory for an array when an object is created and deallocates it when the object is destroyed.
- The class uses a constructor to initialize the array and a destructor to clean up resources.
- The `print()` method outputs a message and attempts to display array elements.

---

## 📂 File Structure

The project is divided into three files:

1. **`SimpleVector.h`**: Contains the declaration of the `SimpleVector` class and its methods.
2. **`SimpleVector.cpp`**: Implements the methods declared in the header file.
3. **`Main.cpp`**: Demonstrates the use of the `SimpleVector` class.

---

## 🖥️ Code Walkthrough

### **1. `SimpleVector.h`**

The header file declares the `SimpleVector` class:

#### Key Points:
- **Private Members**:
  - `int size`: Stores the size of the array.
  - `double* elements`: A pointer to the dynamically allocated array.
- **Public Methods**:
  - `SimpleVector(int size = 5)`: Constructor with a default size of 5.
  - `~SimpleVector()`: Destructor to free memory.
  - `void print() const`: Prints array contents.

---

### **2. `SimpleVector.cpp`**

The source file implements the class methods:

#### Constructor (`SimpleVector(int size)`):
- Dynamically allocates memory for an array of doubles.
- Accepts an integer parameter to set the size of the array.
- Example: `SimpleVector myVector(10);` allocates an array of size 10.

#### Destructor (`~SimpleVector()`):
- Frees the allocated memory using `delete[]`.
- Ensures memory is released when the object goes out of scope.

#### Print Method (`print()`):
- Prints a debug message: `"Hello Vector is working."`
- Attempts to print the contents of the `elements` array (though the elements are uninitialized).

---

### **3. `Main.cpp`**

The main file demonstrates the usage of the `SimpleVector` class:

#### Key Steps:
1. The program starts by printing `"SampleVector2024 started."`.
2. A loop runs 100 iterations:
   - Creates a `SimpleVector` object with a size of 100.
   - Calls the `print()` method to display debug information.
3. The destructor automatically releases memory at the end of each loop iteration.

---

## 🛠️ How to Run the Code

Follow these steps to compile and run the program:

### **Step 1: Clone the Repository**
```bash
git clone <repository_url>
cd <repository_directory>
