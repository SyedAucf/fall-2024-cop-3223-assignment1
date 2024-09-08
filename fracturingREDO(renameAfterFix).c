#include <stdio.h>
#include <math.h> 

#define PI = 3.14159

//functions to be used
double distanceFormula();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

double askForUserInput() //to avoid repeating code in the other functions
{
    double value;
    scanf("%lf", &value);
    return value;
}

double distanceFormula(double x1, double x2, double y1, double y2)
{
    double x = pow((x2 - x1),2);
    double y = pow((y2 - y1),2);

    double distance = sqrt(x+y);
    return distance;
}

double calculateDistance()
{
    double x1, x2, y1, y2;

    printf("Enter x1 and x2: ");
    x1 = askForUserInput();
    x2 = askForUserInput();
   
    printf("Enter y1 and y2: ");
    y1 = askForUserInput();
    y2 = askForUserInput();

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
}


int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

