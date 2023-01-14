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
    int a[n],b[n];
    int *p=a;
    int *q=b;
   
    for(int i=0;i<n;i++)
    scanf("%d%d",(p+i),(q+i));
    p=a;
    q=b;
    for(int i=0;i<n;i++)
    printf("%d %d\n",a[i],b[i]);
    for(int i=0;i<n;i++)
    {
         int temp=0;
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
    p=a;
    q=b;
    for(int i=0;i<n;i++)
    printf("%d %d\n",a[i],b[i]);
    return 0;
}
