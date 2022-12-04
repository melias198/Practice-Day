#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c || a==b && a>c && b>c)
    printf("%d",a);
    else if(b>a && b>c || b==c && b>a && c>a)
    printf("%d",b);
    else if(c>a && c>b || c==a && c>b && a>b)
    printf("%d",c);
    else if(a==b && a==c)
    printf("All are same");
    return 0;
}

