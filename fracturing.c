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

printf("Please enter x1: ");
x1 = askUserInput();
printf("Please enter x2: ");
x2 = askUserInput();
printf("Please enter y1: ");
y1 = askUserInput();
printf("Please enter y2: ");
y2 = askUserInput();

//Compute distance

double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

printf("Point #1 Entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
printf("Point #2 Entered: x2 = %.2f, y2 = %.2f\n", x2, y2);
printf("The distance between the two given points is: %.2f\n", distance);

return distance;
}





double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();





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