#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a,b,div;
        printf("Enter 'a' value = ");
        scanf("%d",&a);
        printf("Enter 'b' value = ");
        scanf("%d",&b);
        div=a/b;
        printf("(a/b) = %d\n",div);
        getch();
        return 0;
} 
