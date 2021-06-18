#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void heading(int a)
{
    switch(a)
    {case 1:


        printf("\t\t\t\t\tWelcome to the Tic-Tac-Toe game");
        printf("\n");

        printf("Player 1 - X ; Player 2- O\n");
        break;

      case 2:
        printf("------------------------------------------------\n");
        printf("------------------------------------------------\n");
        break;
    }
}

int drawpattern(char a,char b,char c)
{
    int i;
    for(i=0;i<2;i++)
    printf("\t\t||\t\t||\t\t\n");

    printf("\t%c\t||\t%c\t||\t%c\t\n",a,b,c);
    for(i=0;i<2;i++)
    printf("\t\t||\t\t||\t\t\n");
}

int valueconverttoint(char value)
{
    int intvalue= value-'0';
}

char validate_entry(int value,int count)

{

    char x;
    if (count%2==0)
        x='X';
    else x='O';

return x;
}

bool validatewin(char a0,char a1,char a2,char a3,char a4,char a5,char a6,char a7,char a8)
{
    bool win;
    if((a0==a1 && a2==a1)||(a0==a3 && a3==a6)||(a0==a4 && a4==a8)||
       (a1==a4 && a4==a7)||(a2==a5 && a5==a8)||(a3==a4 && a4==a5)||
       (a6==a7 && a7==a8)||(a6==a4 && a4==a2))
        win=true;

    else
      win=false;

return win;


}
main()
{
 char a[10]="123456789";
 int count,i=0,intvalue,var=0,draw=0;
 intvalue=0;
 short int value=-1;
 bool win=0;



while(win==false)
{
   system("cls");
    draw=0;
//**************************draw the heading********************
    heading(1);
//**************************draw the pattern********************
    drawpattern(a[0],a[1],a[2]);
    heading(2);
    drawpattern(a[3],a[4],a[5]);
    heading(2);
    drawpattern(a[6],a[7],a[8]);
    printf("\n");

//***************************calculate turns********************
    if(count%2==0)
        printf("Player -1 turn\n");
    else
        printf("Player -2 turn\n");
//*****************accept input from the player*****************
    printf("Enter the cell number : \t");
    scanf("%hu",&value);
    getchar();


    value--;
    intvalue=value;//

    if(a[intvalue]=='X' or a[intvalue]=='O')
    {


        printf("!!!Incorrect entry.Cell already populated.Please try again.\n");
        for(i=0;i<1000000000;i++);
        value=-1;
        continue;
    }


//*****************validate input*******************************
    if (intvalue>=0 && intvalue<=8)

    {
        a[intvalue]=validate_entry(intvalue,count);
        count++;


    }


    else
    {  printf("!!!Incorrect entry. Please try again.\n");
       for(i=0;i<1000000000;i++);

    }

    win= validatewin(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);


//**************************Check Win *******************
    if(win==true)
    {
    //**************************draw the pattern********************
        system("cls");
        heading(1);

        drawpattern(a[0],a[1],a[2]);
        heading(2);
        drawpattern(a[3],a[4],a[5]);
        heading(2);
        drawpattern(a[6],a[7],a[8]);
        printf("\n");

        if(count%2==0)
        printf("************Player -2 wins. Congratulations!************\n");
        else
        printf("************Player -1 wins. Congratulations!************\n");

        break;


    }
//**************************Check draw *******************
    for(i=0;i<9;i++)
    {
        if(a[i]=='X' || a[i]=='O')
            draw++;
//            printf("%d",draw);

    }
    if (draw==9)
    {
        win=true;
        system("cls");
        heading(1);

        drawpattern(a[0],a[1],a[2]);
        heading(2);
        drawpattern(a[3],a[4],a[5]);
        heading(2);
        drawpattern(a[6],a[7],a[8]);
        printf("\n");
        printf("************Match drawn************\n");
        break;

    }

    value=-1;





}
}
