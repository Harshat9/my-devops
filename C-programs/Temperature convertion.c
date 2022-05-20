#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    clrscr();
    int n;
    float c,f;
    printf("\n\nChoose options from the list below\n\n 1. CENTIGRADE (°C) to FAHRENHEIT (°F)\n\n 2. FAHRENHEIT (°F) to CENTIGRADE (°C)\n\n Enter option : ");
    scanf("%d",&n);
    switch(n)
    {
	    case 1:printf("\nEnter temperature value in CENTIGRADE = ");
		   scanf("%f",&c);
		   f=(1.8*c)+32;
		   printf("\nTemperature in FAHRENHEIT = %f\n\n\n",f);
		   break;
	    case 2:printf("\nEnter tmperature value in FAHRENHEIT = ");
		   scanf("%f",&f);
		   c=(f-32)/1.8;
		   printf("\nTemperature in CENTIGRADE = %f\n\n\n",c);
		   break;
	    default:printf("\nInput ERROR...!\nChoose options only from the list\n");
		    break;
    }
    getche();
    return 0;
}
