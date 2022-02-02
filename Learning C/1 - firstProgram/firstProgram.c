//This is a comment
/*
    This is a
    Multiline
    Comment
*/

//Comments are not run by the program. They are solely for human readability and understanding what is going on.

//Everything above the main function is compiled before the runtime.
//This statement here allows the program to use another file full of methods to be able to do things. 
//In this case, stdio.h allows this program to use the standard input and ouptut functions associated with the C language.
//This is required for any C program.
#include <stdio.h>

/*
{return type} add({parameters})
Return type is the type (like 'int' meaning 'Integer' or 'Whole Number') that the method will return.
For example:

int add(int a, int b){
    return a + b;
}

This method will return an int.

Whenever we invoke this method (use it in our code), we can set a variable the return of it.
int i = add(4, 5);
i will equal 9;


parameters are what the method takes in as input. For example: 
int add(int a, int b){}
This method takes 2 integers, a and b, for inputs to add.

Curly braces are what defines the scope of a method.
Every method must have a '{' and '}' defining its beginning and end.
*/

//This is the add method. It adds 2 numbers (a and b) together and returns the sum
int add(int a, int b){
    //Variable declaration
    //{dataType} {variable name} = {value};
    //In this case, the datatype is 'int', the variable name is 'sum', and the value is the sum of (a + b)
    int sum = a + b;

    //returns the value of the variable 'sum' to wherever this method was invoked
    return sum;
}



//This is the main method. The entry point of of the C program.
int main(void){

    //This is printf.
    //printf writes the string (text between double quotes: "this is a string") that's inside to the console.
    printf("Hello World!");

    //Setting the int variable 'i' to add(4, 5);
    int i = add(4, 5);
    //printf can also be used to write variables to the console.
    //printf("%{type of variable (d is integer)}", variables (in order of use separated by a comma));
    printf("%d", i);

    //This is the return. whatever is after it (in this case the int '0') is what the method returns. 
    //Usually the main method has a return type of 'int' and returns the int '0'.
    return 0;
}