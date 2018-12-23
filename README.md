## Part A: String Manipulations

In the second program you will create a library file containing 4 functions. I have provided driver code that runs and tests your library code. You will need to create a second file that can be included in the driver code so the compiler can link them into an executable.

To include a file in c, use the preprocessing statement `#include` and the name of the file as a string at the top of your code. I have included a file called “mylib.h” in the driver code provided. This means you must write all of your code in a file called “mylib.h” and place it in the same directory as the provided driver code for the program to compile.

* For this part of the program you will implement your own version of the library function [strstr()](http://www.cplusplus.com/reference/cstring/strstr/), with the following function interface:
int myStrStr (char  * haystack, char * needle, char * buffer);
   * Your function will take 3 strings, a 'haystack' string, a 'needle' string, and a buffer string. You will search the haystack string for a sequence matching the needle string, and copy the found result (the entire substring) from the haystack string into the buffer (do not copy the needle string).
   * You will return a 1 if the matching sequence in the haystack is found and a 0 if the needle is not found.
   * You can not use the library strstr() function in your implementation. It is only for reference.
   * I will test your function with the following hardcoded strings. Do not ask for user input.
   * haystack="chocolate", needle="choc"
   * haystack="vanilla", needle="lla"
   * haystack="caramel", needle="am"
   * haystack="strawberry", needle="strawberry"
   * haystack="banana", needle="na"
   * haystack="cherry", needle="terrible"

## Part B: Bits and Bytes

First you will write a function that counts the number of 1’s in the binary representation of an integer passed as a parameter to a function called `countOnes()` :bulb: _see driver code for exact interface_. You should return the number of 1s in the function’s parameter as an int.

Next you will write a looping binary interpreter that creates an array representation of a binary value.
* Write a function that uses **bit shifting** to store the binary representation of an integer in an array passed as a parameter. You will be given the size of the array and should make sure you fill out all elements in the array. To generate the array of values, you will need to use a bit mask and bitwise right shift.
    * 8 would store the following value in your array
        * 0000 0000 0000 0000 0000 0000 0000 1000
* The provided driver code (main) which calls your binaryArray function with each of the below values and an array buffer to print the binary representation (from right to left) for each one:
    * 2
    * 255
    * -1
    * INT_MAX
    * INT_MIN
* :bulb: The driver code includes the library <limits.h> at the top of the main source code file so you can use the global constant INT_MAX and INT_MIN




