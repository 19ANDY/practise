/*FUN mall in Mumbai introduces a new game called Clue Hunt. 
The game is that you need to find a hidden object by following a series of clues. 
The developer of the game has decided to set one entry criteria to play this game. 
The criteria is that you will be allowed to join the game only and only if you give a palindrome string to the cash collector.
If the player gives the palindrome string he can play the game, otherwise he is not allowed.
Write a C program to implement the above scenario.

Ensure you have entered a valid string. [A string contains characters other than alphabets should consider as invalid]*/

#include <stdio.h>
void isPalindrome(char str[]);
int main()
{
    char name[50];
    int flag=0;
    printf("Enter the String\n");
    scanf("%s",name);
    int len = strlen(name);
    //printf("%d",len);
    for (int i=0 ; i<len ; i++)
    {
        if((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z'))
        {
            flag=1;
        }
        else 
        {
        flag=0;
        }
    }
    if (flag==1)
    {
        isPalindrome(name);
    }
    else 
    printf("Invalid string");
    
}

    void isPalindrome(char name[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(name) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (name[l++] != name[h--])
        {
            printf("Sorry!You are rejected.");
            return;
        }
    }
    printf("Welcome to Clue Hunt! Have fun.");
}
