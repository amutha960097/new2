# new2
#include<stdio.h>
#include<conio.h>

void main()
{
int ch;
clrscr(); //to clear the screen
printf(“Enter number of week’s day(1-7):”);
scanf(“%d”,&ch);

switch(ch)
{
case 1: printf(“nSunday”);
break;
case 2: printf(“nMonday”);
break;
case 3: printf(“nTuesday”);
break;
case 4: printf(“nWednesday”);
break;
case 5: printf(“nThursday”);
break;
case 6: printf(“nFriday”);
break;
case 7: printf(“nSaturday”);
break;
}
getch(); //to stop the screen
}

