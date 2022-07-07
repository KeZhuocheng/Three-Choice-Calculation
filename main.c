#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=45;
    int b=0;
    int c=10;
    c=(a+b,b+c,a+c);
    printf("%d",c);

    return 0;
}
