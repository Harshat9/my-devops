#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
        clrscr();
        float c,f;
        printf("Enter tmperature value in FAHRENHEIT = ");
        scanf("%f",&f);
	c=(f-32)/1.8;
        printf("Temperature in CENTIGRADE = %f\n",c);
        getch();
        return 0;
}

