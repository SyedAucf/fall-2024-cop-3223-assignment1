#include <stdio.h>
#include <math.h>

#define PI 3.14159

//functions

double askUserInput()
{
double value;
scanf("%lf", &value);
return value;
}

double calculateDistance()
{
    double x1, x2, y1, y2;

printf("Enter x1: ");
x1 = askUserInput();
printf("Enter x2: ");
x2 = askUserInput();
printf("Enter y1: ");
y1 = askUserInput();
printf("Enter y2: ");
y2 = askUserInput();

//Compute distance

double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

printf("Point #1 Entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
printf("Point #2 Entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
printf("The distance between the two points is %.2f\n", distance);

return distance;
}

double calculatePerimeter()
{
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 2.0; 
}

double calculateArea()
{
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 2.0;
}

double calculateWidth()
{
    double x1, y1, x2, y2;
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    double width = fabs(x2 - x1); //fabs is floating absolute value btw :))

    // Output results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 3.0;
}

double calculateHeight()
{
    double x1, y1, x2, y2;
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 3.0;
}


//main func
int main(int argc, char **argv)
{

calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();

return 0;
}