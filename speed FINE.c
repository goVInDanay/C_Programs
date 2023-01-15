#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int speed;
        scanf("%d",&speed);
        if(speed<=70)
        printf("0\n");
        else if((speed>70)&&(speed<=100))
        printf("500\n");
        else if(speed>100)
        printf("2000\n");
    }
}

