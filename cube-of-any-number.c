/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int cube(int n){
    int cu=n*n*n;
    return cu;
}
int main()
{
    int n;
    scanf("%d",&n);
    int cub;
    cub=cube(n);
    printf("%d",cub);
}
