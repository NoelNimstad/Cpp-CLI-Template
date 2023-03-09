## C++ CLI Template

### How do i make my own commands?

Step 1. 
Create a h/h++ file and optionally a c++ file to keep a clean structure.

Step 2.
Declare a method in your h/h++ file

Step 3.
Code your method either in your h/h++ file or your c++ file

Step 4.
Add an enum for your command in main.c++ 

Step 5.
Add a case for your command name in the method "getCommand()" and then return your new enum.

Step 6.
Add a case for your commands enum in the switch statement.

Step 6 & 1/2.
Add logic for making sure you have the right ammount of arguments

Step 7.
Call your method in the new case