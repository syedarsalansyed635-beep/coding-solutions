#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b=4;
    float c=4.0;
    float d=2.0;
    
    scanf("%d",&a);
	scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);
    
    
    return 0;
}
