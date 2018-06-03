/*A famous daily wants to decide on their appraisal of their columnists based on the article review rates for the year 2017. A reviewer rates the columnists based on the clarity, correctness and boldness of their article - each carrying 10 points. The one with the maximum point is given better appraisal. Code the logic for the same referring to the sample input and output (the number of reviewers are in 1000s in reality). 

Consider only 2 columnists while programming.
Negative and zero entry for no of reviewers must stop the process abruptly and display - "Invalid input"
Negative reviewer rating too must stop the process abruptly and display - "The least review point can only be 0"
Use the function:  void solve(int *(a)[3], int *(b)[3])


Sample Input 1:

Name of the columnist : Ram

No of reviewers for Ram : 2

Reviewer 1:

Clarity : 8

Correctness : 10

Boldness : 7

Reviewer 2:

Clarity : 10

Correctness : 10

Boldness : 7

Name of the columnist : Sham

No of reviewers for Sham : 1

Reviewer 1:

Clarity : 9

Correctness : 9

Boldness : 10



Sample Output 1:

Review Points for Ram : 52 on 60

Review Points for Sham : 28 on 30

Sham gets better appraisal.



Sample Input 2:

Name of the columnist : Ram

No of reviewers for Ram : 1

Reviewer 1:

Clarity : 10

Correctness : 10

Boldness : 9

Name of the columnist : Sham

No of reviewers for Sham : 1

Reviewer 1:

Clarity : 10

Correctness : 10

Boldness : 9



Sample Output 2:

Review Points for Ram : 29 on 30

Review Points for Sham : 29 on 30

Ram and Sham are given  same appraisal.*/

#include <stdio.h>
 
 
int main()
{
    char name[2][20];
    float t, l;
    int i,n,m,o,p,sum[10][10],q=0;
    while(q!=2)
    {
    printf("Name of the columnist :");
    scanf("%s",name[q]);
    printf("No of reviewers for %s : ",name[q]);
    scanf("%d",&n);
    if (n>0&&n<3)
    {
        for (i=0;i<n;i++)
        {
        printf("Reviewer %d:\n",i+1);
        printf("Clarity :");
        scanf("%d",&m);
        if ((m<=0) || (m>10))
        {
            printf("Invalid Input");
            exit(0);
        }
        else 
        {
            printf("Correctness :");
            scanf("%d",&o);
            if (o<=0 || o>10)
            {
                printf("Invalid Input");
                exit(0);
            }
            else 
            {
                printf("Boldness :");
                scanf("%d",&p);
                if(p<=0 || p>10)
                {
                    printf("Invalid Input");
                    exit(0);
                }
                else 
                {
                    sum[i][q] = o+p+m;
                    
                }
            }
        }
        }
       
    }
    q++;
    }
     i=0;
       // printf("Review Points for %s ",name[0]);
        int Sum;
        if (n==2)
        {Sum=sum[i][0]+sum[i+1][0];
        t=(float)Sum/60;
        printf("Review Points for %s: %d on 60\n",name[0] ,Sum);
            
        }
        else
        {
        printf("Review Points for %s: %d on 30\n",name[0],sum[i][0]);
        //printf("%d /30\n",sum[i][0]);
        t=(float)sum[i][0]/30;
        }
        if (n==2)
        {Sum=sum[i][1]+sum[i+1][1];
        l=(float)Sum/60;
        printf("Review Points for %s: %d on 60\n",name[1],Sum);
        //printf("%d /60\n",Sum);
            
        }
        else
        {
        //printf("%d /30\n",sum[i][1]);
        printf("Review Points for %s: %d on 30\n",name[1],sum[i][1]);
        l=(float)sum[i][1]/30;
        }
        
        
    if (t>l)
    {
        printf("%s gets better appraisal. ",name[0]);
    }
    else if(t==l)
    {
        printf("%s and %s are given  same appraisal.",name[0],name[1]);
    }
    else 
    printf("%s gets better appraisal.",name[1]);
    
}

