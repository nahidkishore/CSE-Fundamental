

// Here is an example of pass by value:
/* 
In pass by value, a copy of the parameter is passed to the function. This means that any 
changes made to the parameter inside the function will not affect the original value of
the parameter outside the function.

*/


#include <stdio.h>

void Add(int x) {
    x = x + 10;
    printf("Inside function: %d\n", x);
}

int main() {
    int x = 5;
    printf("Before function: %d\n", x);
    Add(x);
    printf("After function: %d\n", x);
    return 0;
}

/*
we define a function named add that takes an integer parameter a.Inside the function, we
add 10 to a and print its new value. In the main function, we define an integer variable 
a and initialize it to 5. We then print the value of a before calling the Addd function.
Next, we call the add function and pass the value of a as an parameter. Inside the Add 
function, the value of a is copied into a temporary variable,and the function works with
this copy. When the function returns, the temporary variable is destroyed, and the original
value of a in the main function is not modified. Finally, we print the value of a after 
calling the add function, and we can see that it is still 5.


*/

// Here's an example of pass by reference:

/*
A reference to the parameter is passed to the function. This means that any changes made to
the parameter inside the function will affect the original value of the parameter outside 
the function.
*/

#include <stdio.h>

void Add(int *ptr) {
    *ptr = *ptr + 10;
    printf("Inside function: *ptr = %d\n", *ptr);
}

int main() {
    int x = 5;
    int *ptr = &x;
    printf("Before function:  %d\n", x);
    Add(ptr);
    printf("After function:  %d\n", x);
    return 0;
}

/*
we declare a pointer variable ptr that points to the memory address of a. We pass ptr to
the function Add() which takes a pointer as its parameter. Inside the function, we 
dereference the pointer using the * operator to access the value stored at the memory 
address that ptr points to. We then add 10 to that value and store it back in the same 
memory location. When we return to the main function, the value of a has been changed to 
15 because we modified it directly in memory using pass by reference.

*/