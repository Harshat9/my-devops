#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a,b,mul;
        printf("Enter 'a' value = ");
        scanf("%d",&a);
        printf("Enter 'b' value = ");
        scanf("%d",&b);
        mul=a*b;
        printf("(a*b) = %d\n",mul);
        getch();
        return 0;
}
