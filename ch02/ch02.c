////////////////////////////////
// C HOW TO PROGRAM, 7TH EDITION
////////////////////////////////
// EXERCISES
////////////
// CH02
///////
// 2.1
// a) main
// b) { }
// c) ;
// d) printf, puts, etc.
// e) newline
// f) scanf, etc.
// g) %d, %i
// h) destructive
// i) nondestructive
// j) if
//////
// 2.2
//////
// a) false; not always, dependent on previous output
// b) false; comments are ignored by the compiler, exist for readability and
//      maintability
// c) true; '\n' is the escape character for a newline
// d) true; variables must be defined (initialization is another story)
// e) true; in order for the system to know what kind of memory and how much to
//      allocate, variables must be given a type
// f) false; note case sensitivity
// g) both; dependent on the standard; a requirement, however, is that a variable
//      MUST BE defined before it is used
// h) false; ampersands are not used with printf
// i) true
// j) false; *, /, % all have higher precendence than +, -
// k) false; one printf statement can print out three lines perfectly
//////
// 2.3
//////
// a) int c, thisVariable, q76354, number;
// b) printf("Enter an integer: ");
// c) scanf("%d", &a);
// d) if (number != 7) puts("The variable number is not equal to 7.");
// e) printf("This is a C program.\n");
// f) printf("This is a C\nprogram.\n");
// g) printf("This\nis\na\nC\nprogram.\n");
// h) printf("This\tis\ta\tC\tprogram.\n");
//////
// 2.4
//////
// a) // This program will calculate the product of three integers.
// b) int x, y, z, result;
// c) puts("Enter three integers:");
// d) scanf("%d %d %d", &x, &y, &z); // Note that this method may be less than
//      ideal.
// e) result = x * y * z;
// f) printf("The product is %d\n", result);
//////
// 2.5
//////
// Implementation of program outlined in Section 2.4.
// This program will output the product of three integers.
// This coder has long noted the problem with scanf. That being that entering a
// character or string, the newline will be read by the next scanf(), and the
// resulting output will be 0. Entering a float will cause the program to behave
// unpredictably (as far as this coder can tell).
#include <stdio.h>
int main(void) {
    int x, y, z, result;

    puts("This program will calculate the product of three integers.");
    puts("Enter three integers.");
    printf("First number: ");
    scanf("%d", &x);
    printf("Second number: ");
    scanf("%d", &y);
    printf("Third number: ");
    scanf("%d", &z);
    result = x * y * z;
    printf("The product is %d.\n", result);
    return 0;
}
//////
// 2.6
//////
// a) &number -> number
// b) number2 -> &number2
// c) no semicolon after first pair of braces; if statement will be treated as an
//      empty statement, causing printf to execute regardless of veracity of the
//      truth
// d) => -> >=
//////////////
