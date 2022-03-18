#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a,b,sub;
        printf("Enter 'a' value = ");
        scanf("%d",&a);
        printf("Enter 'b' value = ");
        scanf("%d",&b);
        sub=a-b;
        printf("(a-b) = %d\n",sub);
        getch();
        return 0;
}

