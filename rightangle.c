#include<stdio.h>
#include<math.h>
double hypotenuse(double a, double y);
int main()
{
    double b1, b2, counter;
    for(counter = 0; counter <= 2; counter++)
    {
        printf("Enter values for two sides:\n");
        scanf("%lf %lf",&b1,&b2);
        if(b1>=0&&b2>=0)
        {
        printf("Hypotenuse of the triangle is:\n%.2f\n", hypotenuse(b1, b2));
        }
        else 
        printf("Invalid triangle side");
    }
    return 0;
}
double hypotenuse(double a, double y)
{
        double z = sqrt(a * a + y * y);
        return z;
}
