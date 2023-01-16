#include <stdio.h>

int main() {
	// your code goes here
int t;
scanf("%d\n",&t);
while(t--)
{
    int x,y,k,max,min;
    scanf("%d %d %d\n",&x,&y,&k);
    if(x>y)
    {
        max=x;
        min=y;
    }
    else{
    max=y;
    min=x;}
    if((max-min)<=k)
    {
        if((max-min)==0)
        printf("0\n");
        else
        printf("1\n");
    }
    else{
        if((max-min)%k!=0)
        printf("%d\n",((max-min)/k)+1);
        else
        printf("%d\n",((max-min)/k));}
}
	return 0;
}
