#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(int i=0;i<n;i++)
	    scanf("%d",&b[i]);
	    int max[3]={0,0,0};
	    for(int i=0;i<n;i++)
	    {
	        if(max[0]<a[i])
	        {
	        max[0]=a[i];
	        max[1]=b[i];
	        max[2]=i+1;
	        }
	        else if(max[0]==a[i])
	        {
	            if(max[1]<=b[i])
	            {
	                max[1]=b[i];
	                max[0]=a[i];
	                max[2]=i+1;
	            }
	        }
	    }
	    printf("%d\n",max[2]);
	}
	return 0;
}

