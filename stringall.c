#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int findStringlength(char * a)
{
   int c=0,i;
   for(i=0;a[i]!='\0';i++)
   c++;
   return c;
}

char * findStringReverse (char * a) 
{
    //int i,l;
   // l=findStringlength(a);
    
    int length, c;
   char *begin, *end, temp;
 
   length = findStringlength(a);
   begin  = a;
   end    = a;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }

    return a;
}
char * concatenateString(char * a,char *b)
{
    int l1,l2,i=0,k=0;
    char *c;
    l1= findStringlength(a);
    l2=findStringlength(b);
    c=(char*)malloc(sizeof(char)*(l1+l2-1));
    while(i<l1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    i=0;
    while(i<l2)
    {
        c[k]=b[i];
        k++;
        i++;
    }
    c[k]='\0';
    return c;
    
    
}
int compareString(char *a, char * b)
{
    int i=0;
    while((a[i]==b[i])&&(a[i]!='\0'))
    i++;
    if(a[i]>b[i])
    return 1;
    else if (a[i]<b[i])
    return -1;
    else if(a[i]==b[i])
    return 0;
    
}


int main()
{
    int a[100],a1[100],b[100],b1[100],i;
    scanf("%s",a);
    scanf("\n%s",a1);
    strcpy(b,a);
    strcpy(b1,a1);
    printf("Length of the first string is %d",findStringlength(a));
    printf("\nLength of the second string is %d",findStringlength(a1));
    printf("\nThe reverse of the first string is:%s",findStringReverse(a));
    printf("\nThe reverse of the second string is:%s",findStringReverse(a1)); 
    printf("\nThe concatenated String is %s",concatenateString(b,b1));
    i=compareString(b,b1);
    if(i==-1)
    printf("\n%s appears before %s",b,b1);
    else if(i==1)
    printf("\n%s appears before %s",b1,b);
    else if(i==0)
    printf("\nBoth the input string are same");
}
