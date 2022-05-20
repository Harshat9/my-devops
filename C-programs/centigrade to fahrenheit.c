#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        float c,f;
        printf("Enter tmperature value in CENTIGRADE = ");
        scanf("%f",&c);
	f=(1.8*c)+32;
        printf("Temperature in fahrenheit = %f\n",f);
        getch();
        return 0;
}

