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

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

double askForUserInput()
{
    double input;
    scanf("%lf", &input);
    return input;
}

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

double calculateDiameter(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt((dx * dx) + (dy * dy));   
}

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

    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %lf\n", width);
    return 1;
}

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

    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %lf\n", height);
    return 1;
}