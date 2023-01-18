#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,a1,b1,a2,b2;
	    scanf("%d%d%d%d%d%d",&a,&b,&a1,&b1,&a2,&b2);
	    int c=0;
	    if((a1==a||b1==a)&&(a1==b||b1==b))
	    c=1;
	    else if((a2==a||b2==a)&&(a2==b||b2==b))
	    c=2;
	    else
	    c=0;
	    printf("%d\n",c);
	}
	return 0;
}

