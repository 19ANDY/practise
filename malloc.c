#include<stdio.h>
 
int main() {
    // declare a variable to store the name
    char *name = (char *) malloc(100);
    
    // read the name from input
    scanf("%s", name);
    
    // print the name 
    printf("Hello %s", name);
}
