// THIS PROGRAM IS AVAILABLE UNDER GPLv3+
// WRITTEN BY: AMIRREZA FIROOZI
// For more projects visit : https://Github.com/AmirrezaFiroozi
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
// Defining colors for printf
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main()
{
    float a1,a2,ar,b1,b2,br,x,y;
    printf("Please enter your coefficients of your first equation in order \n for example for 2x+2y=14 you write 2 2 14\n ");
    scanf("%f%f%f", &a1,&a2,&ar);
    printf(" please do the same as what you just did for the second equation\n ");
    scanf("%f%f%f",&b1,&b2,&br);
    if ((a1/b1)==(a2/b2))
    {
    	if ((a1/b1)==(ar/br))
    	printf(" Your equations have" BLU " unlimited" RESET" answers");
    	else
    	printf(" Your equations do "RED"not"RESET" have any answers");
    }
    else
    {
    float s1=((ar*b2)-(a2*br)),s2=((a1*br)-(ar*b1)),m=((a1*b2)-(a2*b1));
    // It might seem a bit strange but you may know that it is a way of solving system of linear equation
    // People call Crammar
    x=((ar*b2)-(a2*br))/((a1*b2)-(a2*b1));
    y=((a1*br)-(ar*b1))/((a1*b2)-(a2*b1));
    printf(" Your first variable"BLU" (x)"RESET" is :"GRN"%3.2f/%3.2f = %3.4f"RESET" and your second variable "BLU"(y) "RESET"is :"GRN"%3.2f/%3.2f = %3.4f\n ",s1,m,x,s2,m,y);
    }
return 0;
}
