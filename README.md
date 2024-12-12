# tipCalculator
For this assignment we will develop a tip calculator incrementally, writing modular code contained in functions. We will develop several functions each providing a portion of the program's functionality and utilize these with other code to complete our program. Think about coding this in terms of the individual functions required - these are denoted by sections (1) through (4).

(1)

Write a function to calculate and return the dollar amount of a tip. The function must be named calcTipAmt. The function will take two arguments (both doubles) in order: the sales amount and the percentage of the tip. Please note, the percentage of the tip will not have been divided by 100 when it is received. This function will not interact with the console in any way, it will perform the necessary calculation(s) using the arguments received and return the result.

To test this function in isolation in your IDE, I suggest you write a main function that is a driver. The function will get two real numbers from the user (a sales amount and a tip percentage) and pass them to your function. Have your driver display the value calcTipAmt returns, so that you can verify it is functioning properly. Test using various reals values for both the sales amount and the tip percentage. Your driver function is not to be submitted in zylabs, but rather is used to test this function in your IDE. Writing a driver function is not required, but is useful.

(2)

Write a function to display the menu for our tip calculator and return the character cooresponding to the menu item selected. The function must be named getMenuItem. The function will take one double argument that contains the sale amount, and will return the character entered by the user when asked to enter a menu choice.

The function displays the dollar amount of a ten, fifteen, and twenty percent tip, on the sale amount received as the argument, with the corresponding menu item.

For example, when called with an argument (sale amount) of 26.26, the following menu is displayed:
```
            Tip Calculator

    T - 10 percent tip of $2.63
    F - 15 percent tip of $3.94
    W - 20 percent tip of $5.25
    P - Custom tip percentage 
    A - Custom tip amount 
Enter your menu choice [T, F, W, P, A]:
```
Important formatting details:

The heading Tip Calculator is preceded by a new line character and three tab characters.
Notice there is a blank line between the heading and the menu choices.
Each of the menu choices is preceded by one tab character.
There is a single space character after Custom tip percentage and Custom tip amount
Leave a space after the colon and let the user enter the menu choice on the same line.
Your program will accept both uppercase and lowercase versions of the letters for the menu choices. (For example, either T or t can be entered to specify a 10 percent tip. etc.)

To test this function in isolation in your IDE, I again suggest you write a main function that is a driver. You can take the driver from section (1) and modify it to test this function. The driver will get a real number from the user (a sales amount) and pass it to your function. Have your driver display the value getMenuItem returns, so that you can verify it is functioning properly. Test using various reals for the sales amount. Test each of the valid menu options and also test invalid menu options.

(3)

Write a function to calculate and return the total sale amount (the sum of the sale amount and the tip amount). This function must be named calcTotalSale. This function will take two arguments in order: the amount of the sale and the tip amount, both doubles.

To test this function in isolation in your IDE, writing a main function that is a driver may be a good idea. The driver will get two real numbers from the user (a sales amount and a tip amount) and pass them to your function. Have your driver display the value calcTotalSale returns, so that you can verify it is functioning properly. Test using various real values for both the sales amount and the tip amount.

(4)

Complete a program that utilizes these functions to provide the previously specified functionality. The complete program should:

Get a sales amount entered by the user. To do this prompt with the message Enter the amount of the sale: before reading the value entered.
Display the menu
Process the menu choice
Validate the user inputs
Display the results including the sale amount, tip amount, and total sale amount
When the user selects Custom tip percentage, your program will prompt the user for the tip percentage and use the value entered for the calculation of the tip amount and the total sale amount.

When the user selects Custom tip amount, your program will prompt the user to enter a tip amount and use the value entered in the calculation of the total sale amount.

When the program successfully runs, it will display the sales amount, the tip amount, and the total sale amount in the format shown below. For example, when the sales amount entered is 26.26 and a custom tip amount of 5.74 is entered, the output should be:
```
Sales Amount: $26.26
Tip Amount: $5.74
Total Due: $32.00
```
Design and utilize at least one additional called function to contribute in a meaningful way to the solution.

Display all floating-point values rounded to exactly two digits to the right of the decimal point.

Valid sales amounts are greater than $0. Should the user enter an invalid amount, the program should end with the following error message, instead of the calculation results.

```
Error, invalid sales amount entered.
```
When an invalid menu choice is entered, the program should end with the following error message, instead of the calculation results.

```
Error, invalid menu choice entered.
```

Should the user enter a negative custom tip percentage, the program should end with the following message, instead of the calculation results.
```
Error, invalid percentage entered.
Valid percentages are non-negative.
```

Should the user enter a negative custom tip amount, the program should end with the following message, instead of the calculation results.
```
Error, invalid tip amount entered.
Valid amounts are non-negative.
```
Error message formatting:

A newline character should precede the error message.
The error message should look exactly as entered here, including period at the end.
Do not use a return in the middle of a function, multiple returns, or the exit function to end the function/program when invalid data is received. Design your decision structure so that other processing is skipped when an invalid input is received.

Do not forget that a preceding comment is required before the definition of all called functions.
