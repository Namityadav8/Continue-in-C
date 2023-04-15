#include<stdio.h>

int main(){
    int a=2,b=4;
    printf("enter the  value of a \n");
    scanf("%d",&a);

    printf("enter the value of b \n");
    scanf("%d",&b);

    printf("a=%d, b=%d\n",a,b);
    printf("a&b=%d\n",a&b);
    printf("a|b=%d\n",a|b);
    printf("a^b=%d\n",a^b);
    printf("~a=%d\n",a=~a);
    printf("b<<1=%d\n",b<<1);
    printf("b>>%d\n",b>>1);
      
    return 0;
}


/*  sizeof() fun is used to find the size of an object  */ 