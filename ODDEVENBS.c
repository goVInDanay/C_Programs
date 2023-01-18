#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int b[n];
	    for(int i=1;i<=n;i++)
	    scanf("%d",&b[i-1]);
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]==0)
	        c++;
	    }
	    if((c%2==0)||(c==0))
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

