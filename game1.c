/*Dan is playing a video game in which his character competes in a hurdle race by jumping over hurdles with heights. He used to maintain the maximum height of units he jumps in each race in his scorecard.  But in this score card he can only append the score one after another. He cannot insert in the middle or in the beginning. The scorecard can store N number of hurdles.  But Dan used to maintain only the 5 latest hurdle score.  Whenever he needs to enter 6th hurdle score, he used to delete the first hurdle score from card.   Write a program to simulate the scorecard of Dan.

Input Format

The first input is the size of score card should be > 0 and <=100

The second input is the maximum height he can jump for each hurdle

Output Format

Print latest 5 hurdle race scores which is stored in the score card.*/



#include <stdio.h>

int main()
{
    int s,r[100],i;
    printf("Enter the size of the score card:");
    scanf("%d",&s);
    if(s> 0 && s<=100)
    {
        for(i=0;i<s; i++)
        {
            printf("Enter the hurdle race score %d:",i+1);
            scanf("%d",&r[i]);
        }
        printf("Latest hurdle race scores are:");
        for(i=(s-5);i<s;i++)
        {
                
            printf("%d",r[i]);
        
            }
           
    }
    else
    printf("Invalid score card size");

    return 0;
}
