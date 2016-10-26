// THIS PROGRAM IS AVALABLE UNDER GPLv3+
// WRITTEN BY: AMIRREZA FIROOZI
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    using namespace std;
    float a1,a2,ar,b1,b2,br,x,y;
    printf("Please enter your coefficients of your first equation in order \n for example for 2x+2y=14 you write 2 2 14\n ");
    scanf("%f%f%f", &a1,&a2,&ar);
    printf("please do the same as what you just did for the second equation\n");
    scanf("%f%f%f",&b1,&b2,&br);
    // It might seem a bit strange but you may know that it is a way of solving system of linear equation
    // People call Crammar
    x=((ar*b2)-(a2*br))/((a1*b2)-(a2*b1));
    y=((a1*br)-(ar*b1))/((a1*b2)-(a2*b1));
    printf("Your first variable (x) is :%f and your second variable is :%f\n",x,y);

return 0;
}
