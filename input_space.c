/*The winter holiday season is well underway, and the astronauts aboard the International Space Station (ISS) are getting ready to celebrate in zero-gravity.  Get the names of 3 astronauts and their space agencies and send them a holiday message to their space station.

 [Hint: use scanf(" %[^\n]s",name); to get names with space]
*/
#include<stdio.h>
void main()
{   //scanf(" %[^\n]s",name)
    char n1[10],n2[11],n3[12],a1[7],a2[8],a3[15],s[20];
    printf("Enter the names of Astronauts:\n");
    scanf( "%[^\n]%*c",n1);
    scanf("%[^\n]%*c",n2);
    scanf("%[^\n]%*c",n3);
   printf("Enter the Space agencies names:\n");
    scanf("%[^\n]%*c",a1);
    scanf("%[^\n]%*c",a2);
    scanf("%[^\n]%*c",a3);
    printf("Enter the space station name:\n");
    scanf("%[^\n]%*c",s);
    printf("%s crew members %s of %s, %s of %s, and %s of the %s, delivered a holiday message from the station.",s,n1,a1,n2,a2,n3,a3);
}
