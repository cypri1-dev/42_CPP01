## 
<h1><img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/covers/cover-cpp-bonus.png"</h1>

## Description
This project, C++ Module 01, focuses on dynamic memory allocation, pointers, and object relationships. You will implement a Zombie class, create a horde of zombies, manage strings, and develop a complaint system using function pointers and switch statements. These exercises provide a solid foundation in C++ programming concepts and practices.

## Exercise 00 - BraiiiiiiinnnzzzZ
Objectives 🚀:
- This exercise will introduce you to dynamic memory allocation and pointer manipulation in C++.
- You will be creating a class that represents a zombie.
Requirement:
- Create a ```Zombie``` class. Each zombie will have a name.
- Implement a member function named ```announce()``` that will print the following message: ```<name>: BraiiiiiiinnnzzzZ...```.
- The name of the zombie should be passed to the constructor.
- Create a function named ```newZombie()``` which takes a string representing a name and returns a pointer to a new zombie.
- Create a function named ```randomChump()``` that creates a zombie, assigns it a random name, and immediately announces it.
- Your main function should create several zombies (both on the stack and on the heap) and have them announce themselves.

## Exercise 01 - Even More Brains!
Objectives 🚀:
- This exercise builds on the previous one by exploring the behavior of destructors.
- You will create and destroy zombies dynamically.
Requirements:
- Add a destructor to your ```Zombie``` class that prints the message: ```<name> is destroyed```.
- In your main function, dynamically allocate several zombies, have them announce themselves, and then properly destroy them to ensure there are no memory leaks.

## Exercise 03 - Useless Violence
Objectives 🚀:
- This exercise introduces the ```Weapon``` class and explores how objects can be passed around by reference.
Requirements:
- Create a ```Weapon``` class that has a ```type``` attribute and a ```getType()``` method that returns the type.
- Create a ```setType()``` method that modifies the weapon type.
- Create a ```HumanA``` class that takes a reference to a ```Weapon``` in its constructor and has an ```attack()``` method that prints a message containing the human's name and the weapon type.
- Create a ```HumanB``` class that is similar to ```HumanA``` but allows the weapon to be set later on using a method.

## Exercise 04 - Sed Is for Losers
Objectives 🚀:
- This exercise introduces basic file input/output (I/O) and string manipulation in C++.
Requirements:
- Write a program that takes a filename and two strings as parameters.
- The program should open the file, replace all occurrences of the first string with the second string, and write the results to a new file.

## Exercise 05 - Harl 2.0
Objectives 🚀:
- This exercise explores the ```switch``` statement and organizing code with different levels of verbosity.
Requirements:
- Create a ```Harl``` class with four member functions: ```debug()```, ```info()```, ```warning()```, and ```error()```.
- Implement a ```complain()``` function that calls one of the four methods based on the input string passed to it.
- Use a ```switch``` statement to choose which method to call.

## Exercise 06 - Harl Filter
Objectives 🚀:
- This exercise builds on the previous one by introducing filters.
Requirements:
- Modify the ```Harl``` class to print only messages at or above a certain severity level. The severity levels are ```debug```, ```info```, ```warning```, and ```error```.
- Implement this filtering logic so that Harl only complains at the specified level or higher.
