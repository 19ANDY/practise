#include<stdio.h>
#include<stdlib.h>
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
int modulus(int, int);
float average(int, int);
int power(int, int);
int main()
{
    int i,a,b;
    float c;
    scanf("%d%d",&a,&b);
    scanf("%d",&i);
    switch(i)
    {
        case 1: c=addition(a, b);
                //printf("%d",c);
                break;
        case 2: c=subtraction(a, b);
                //printf("%d",c);
                break;
        case 3: c=multiplication(a, b);
                //printf("%d",c);
                break;
        case 4: c=division(a, b);
                //printf("%d",c);
                break;
        case 5: c=modulus(a, b);
                //printf("%d",c);
                break;
        case 6: c=average(a, b);
                //printf("%d",c);
                break;
        case 7: c=power(a, b);
                //printf("%d",c);
                break;
        
    }
}
int addition(int a, int b)
{
    int c;
    c=(a+b);
    printf("%d",c);
}
int subtraction(int a, int b)
{
    int c;
    c=(a-b);
    printf("%d",c);
}
int multiplication(int a, int b)
{
    int c;
    c=(a*b);
    printf("%d",c);
}
int division(int a, int b)
{
    int c;
    c=(a/b);
    printf("%d",c);
}
int modulus(int a, int b)
{
    int c;
    c=(a%b);
    printf("%d",c);
}
int power(int a, int b)
{
    int c;
    c=(a^b);
    printf("%d",c);
}
float average(int a, int b)
{
    float d = a;
    float e = b;
    
    float c;
    c=(d+e)/2;
    printf("%.2f",c);
}
