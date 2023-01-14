/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter number of voters, Atleat 4:");
    scanf("%d",&n);
    char a[100],b[100],d[100],e[100];
    int c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=0;
    }
    printf("Enter names of 4 candidates\n");
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",d);
    scanf("%s",e);
    printf("1- %s\n",a);
    printf("2- %s\n",b);
    printf("3- %s\n",d);
    printf("4- %s\n",e);
    for(int i=0;i<n;i++)
    {
        int k=0;
        scanf("%d",&k);
        if(k==1)
        c[k-1]++;
        else if(k==2)
        c[k-1]++;
        else if(k==3)
        c[k-1]++;
        else if(k==4)
        c[k-1]++;
        else 
        {
            printf("Invalid. Terminating\n");
            break;
        }
    }
    printf("Name-%s Votes- %d\n",a,c[0]);
    printf("Name-%s Votes- %d\n",b,c[1]);
    printf("Name-%s Votes- %d\n",d,c[2]);
    printf("Name-%s Votes- %d\n",e,c[3]);
}

