//********************************************************
// fracturing.c
// Author: Ryan Cobb
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: Do various calculations using two different points in space.
//          The purpose of this assignment is to practice breaking up programs into functions.
// Input: 4 doubles, representing x1, y1, x2, y2
//
// Output: Inputted points and results of calculations
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double askForUserInput();
double calculateDistance();
double calculateDiameter(double x1, double y1, double x2, double y2);
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

//********************************************************
// int main(int argc, char **argv)
//
// Purpose:         Calls all of the functions
// Output:          Returns 0 to signal success
// Precondition:    None.
// Postcondition:   None.
//********************************************************
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}


//********************************************************
// double askForUserInput()
//
// Purpose:         Reads a double from the user
// Output:          Returns value of user input
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double askForUserInput()
{
    double input;
    scanf("%lf", &input);
    return input;
}


//********************************************************
// double calculateDistance();
//
// Purpose:         Calculates distance between two points
// Output:          Prints the distances between two points and returns it
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateDistance()
{
    printf("Input x1: ");
    double x1 = askForUserInput();

    printf("Input y1: ");
    double y1 = askForUserInput();

    printf("Input x2: ");
    double x2 = askForUserInput();

    printf("Input y2: ");
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double distance = calculateDiameter(x1, y1, x2, y2);
    printf("The distance between the two points is %lf\n", distance);
    return distance;
}


//********************************************************
// double calculateDiameter(double x1, double y1, double x2, double y2)
//
// Purpose:         Helper function which produces the same output as calculateDistance without printing it
// Output:          Calculates and returns the euclidian distance between two points
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateDiameter(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt((dx * dx) + (dy * dy));   //pythagorean theorem
}


//********************************************************
// double calculatePerimeter()
//
// Purpose:         Calculates and prints the perimeter of two points (of a circle -> circumference)
// Output:          Prints perimeter and returns double rating difficulty of writing function from 1.0 - 5.0
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculatePerimeter()
{
    printf("Input x1: ");
    double x1 = askForUserInput();

    printf("Input y1: ");
    double y1 = askForUserInput();

    printf("Input x2: ");
    double x2 = askForUserInput();

    printf("Input y2: ");
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double diameter = calculateDiameter(x1, y1, x2, y2);
    double circumference = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %lf\n", circumference);
    return 1;
}


//********************************************************
// double calculateArea()
//
// Purpose:         Calculate and print area of a circle created by two points
// Output:          Prints area to the console and returns double rating difficulty of writing function form 1.0 - 5.0
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateArea()
{
    printf("Input x1: ");
    double x1 = askForUserInput();

    printf("Input y1: ");
    double y1 = askForUserInput();

    printf("Input x2: ");
    double x2 = askForUserInput();

    printf("Input y2: ");
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double radius = calculateDiameter(x1, y1, x2, y2) / 2;
    double area = (radius * radius) * PI;
    printf("The area of the city encompassed by your request is %lf\n", area);
    return 1;
}


//********************************************************
// double calculateWidth()
//
// Purpose:         Calculates width between two points and prints it
// Output:          Prints width to the console and returns double rating difficulty of writing function form 1.0 - 5.0
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateWidth()
{
    printf("Input x1: ");
    double x1 = askForUserInput();

    printf("Input y1: ");
    double y1 = askForUserInput();

    printf("Input x2: ");
    double x2 = askForUserInput();

    printf("Input y2: ");
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double width = fabs(x2 - x1); //makes sure that width is not negative
    printf("The width of the city encompassed by your request is %lf\n", width);
    return 1;
}

//********************************************************
// double calculateHeight()
//
// Purpose:         Calculates height between two points and prints it
// Output:          Prints height to the console and returns double rating difficulty of writing function form 1.0 - 5.0
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateHeight()
{
    printf("Input x1: ");
    double x1 = askForUserInput();

    printf("Input y1: ");
    double y1 = askForUserInput();

    printf("Input x2: ");
    double x2 = askForUserInput();

    printf("Input y2: ");
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double height = fabs(y2 - y1); //makes sure that height is not negative
    printf("The height of the city encompassed by your request is %lf\n", height);
    return 1;
}