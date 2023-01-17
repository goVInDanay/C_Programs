/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    int space=2*n-1;
    for(i=1;i<=n;i++)
    {
        for(j=space-1;j>=0;j--)
        printf(" ");
        for(k=0;k<(2*i-1);k++)
        {
            if(k%2!=0)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
        space--;
    }

    return 0;
}
