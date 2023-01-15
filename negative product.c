#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    int d[3],count=0,i,c2=0;
	    d[0]=a;
	    d[1]=b;
	    d[2]=c;
	    for(i=0;i<3;i++)
	    {
	        if(d[i]==0)
	        count++;
	        else if(d[i]<0)
	        c2++;
	    }
	    if(count>=2)
	    printf("NO\n");
	    else if((c2==0)||(c2>2)||((c2==2)&&(count==1)))
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
}
	
	

