#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
 char array[3][3]={'1','2','3','4','5','6','7','8','9'};
 int a,b,i,j,counter=0,choice;
 char ch1,ch2;
 int x,y;
 printf("press 1 if You want a man to man match in tic tac toe \nand press 0 for computer to man match in tic tac toe\n ");
 scanf("%d",&choice);

 if(choice==1)
 {
 printf("There are some rules for tic tac toe.\n1.Player1 has key _B_ to play.\n2.Player2 has key _S_ to play.\n3.If any player tried to overwrite the data,his chance will be wasted.\n4.Do not enter  any other key instead of specific keys _B_ and _S_.\n");
 for(int a=0;a<3;a++)
 {
     for(int b=0;b<3;b++)
     {
        printf(" %c\t",array[a][b]);
     }
     printf("\n");
 }
 int A=a*b;
 for(A=0;A<=8;A++)
 {
 if(A%2==0)
 {

     printf("player 1,s turn\ntime to play\nenter index number for row\n");
     scanf("%d",&i);
     printf("enter index number for column\n");
     scanf("%d",&j);
     printf("take input from first player....first player has key B to play..so enter your key\n  ");
     //scanf(" %c",&ch1);
     if(array[i][j]!='B'&&array[i][j]!='S')
     {
      scanf(" %c",&array[i][j]);
      //printf("%d",array[i][j]);
      for(int y=0;y<3;y++)
      {
         for(x=0;x<3;x++)
         {
             printf(" %c\t",array[y][x]);
         }
         printf("\n");
      }
     }

     if(array[i][j]=='B'&&array[i][j]=='S')
     {
       printf("YOU have entered already on that index so You can't overwrite\n");
     }
     //scanf(" %c",&ch1);
 }
 else
 {
     printf("player 2,s turn\ntime to play\nenter index number for row\n");
     scanf("%d",&i);
     printf("enter index number for column\n");
     scanf("%d",&j);
     printf("take input from second player....second player has key S to play..so enter your key\n  ");
     //scanf(" %c",&ch1);
     if(array[i][j]!='B'&&array[i][j]!='S')
     {
       scanf(" %c",&array[i][j]);
       //printf("%c",array[i][j]);
       for(int y=0;y<3;y++)
       {
         for(x=0;x<3;x++)
         {
             printf(" %c\t",array[y][x]);
         }
         printf("\n");
       }
     }

     if(array[i][j]=='B'&&array[i][j]=='S')
     {
       printf("YOU have entered already on that index so You can't overwrite\n");
     }
 }


 if(array[0][0]==array[1][1]&&array[1][1]==array[2][2]&&array[2][2]==array[0][0])
 {
     if(array[0][0]=='B')
     {
        printf("player one has won\n");
        break;

     }
     else
     {
        printf("player two has won\n");
        break;
     }

 }

 else if(array[0][2]==array[1][1]&&array[1][1]==array[2][0]&&array[2][0]==array[0][2])
 {
     if(array[0][2]=='B')
     {
        printf("player one has won\n");
        break;
     }
     else
     {
        printf("player two has won\n");
        break;
     }

 }
 else if(array[0][0]==array[0][1]&&array[0][1]==array[0][2]&&array[0][2]==array[0][0])
 {
 	if(array[0][0]='B')
 	{
 	printf("player one has won\n");
 	break;
 	}
 	else
 	{
 		printf("player two has won\n");
 		break;
 	}
 }
 else if(array[1][0]==array[1][1]&&array[1][1]==array[1][2]&&array[1][2]==array[1][0])
 {
 	if(array[1][0]='B')
 	{
 	printf("player one has won\n");
 	break;
 	}
 	else
 	{
 		printf("player two has won\n");
 		break;
 	}
 }
 else if(array[2][0]==array[2][1]&&array[2][1]==array[2][2]&&array[2][2]==array[2][0])
 {
 	if(array[2][0]='B')
 	{
 	printf("player one has won\n");
 	break;
 	}
 	else
 	{
 		printf("player two has won\n");
 		break;
 	}
 }
 else if(array[0][0]==array[1][0]&&array[1][0]==array[2][0]&&array[2][0]==array[0][0])
 {
 	if(array[0][0]='B')
 	{
 	printf("player one has won\n");
 	break;
 	}
 	else
 	{
 		printf("player two has won\n");
 		break;
 	}
 }
 else if(array[0][1]==array[1][1]&&array[1][1]==array[2][1]&&array[2][1]==array[0][1])
 {
 	if(array[0][1]='B')
 	{
 	printf("player one has won\n");
 	break;
 	}
 	else
 	{
 		printf("player two has won\n");
 		break;
 	}
 }
 else if(array[0][2]==array[1][2]&&array[1][2]==array[2][2]&&array[2][2]==array[0][2])
 {
 	if(array[0][2]='B')
 	{
 	printf("player one has won\n");
 	break;
 	}
 	else
 	{
 		printf("player two has won\n");
 		break;
 	}
 }
 counter++;
 printf("Remaining chances out of 9 for whole game are %d\n",9-counter);
 }

 //printf("Match has Tied\n");
 if(counter>=9)
 {
  printf("Match has tied\n");
 }

 }
 
 else
 	{
        printf("There are some rules for tic tac toe.\n1.Man has key _0_ to play.\n2.Computer has key _1_ to play.\n3.If any player or machine tried to overwrite the data,his chance will be wasted.\n4.Do not enter  any other key instead of specific keys _0_ and _1_.\n");
        srand(time(0));
 	int ck,ri,ci;
 	int array2[3][3]={2,3,4,5,6,7,8,9,10};
    for(int a=0;a<3;a++)
 {
     for(int b=0;b<3;b++)
     {
        printf(" %d\t",array2[a][b]);
     }
     printf("\n");
 }
 int A=a*b;
 for(A=0;A<=8;A++)
 {
 if(A%2!=0)
 {

     printf("man's turn\ntime to play\nenter index number for row\n");
     scanf("%d",&i);
     printf("enter index number for column\n");
     scanf("%d",&j);
     printf("take input from first player....first player has key 0 to play..so enter your key\n  ");
     //scanf(" %c",&ch1);
     if(array2[i][j]!=0&&array2[i][j]!=1)
     {
      scanf(" %d",&array2[i][j]);
      //printf("%d",array[i][j]);
      for(int y=0;y<3;y++)
      {
         for(x=0;x<3;x++)
         {
             printf(" %d\t",array2[y][x]);
         }
         printf("\n");
      }
     }

     if(array2[i][j]==0&&array2[i][j]==1)
     {
       printf("YOU have entered already on that index so You can't overwrite\n");
     }
     //scanf(" %c",&ch1);
 }
 else
 {
     printf("computer's turn\ntime to play\nindex number for row\n");
     ri=rand()%3;//ri=row index
     printf("ri=%d\n",ri);
     //scanf("%d",&ri);
     //printf("computer key  is %d\n",ck);
     printf("index number for column\n");
     ci=rand()%3;//ci= column index
     printf("ci=%d\n",ci);
     //scanf("%d",&ci);
     printf("input from,computer by random numbers\n  ");
     ck=rand()%1+1;
     printf("ck=%d\n",ck);
     
     //scanf("%d",&ck);
     //scanf(" %c",&ch1);
     if(array2[ri][ci]!=0&&array2[ri][ci]!=1)
     {
       array2[ri][ci]=ck;
       //scanf(" %c",&array[i][j]);
       //printf("%c",array[i][j]);
       for(int y=0;y<3;y++)
       {
         for(x=0;x<3;x++)
         {
             printf(" %d\t",array2[y][x]);
         }
         printf("\n");
       }
     }

     if(array2[ri][ci]==0&&array2[ri][ci]==1)
     {
       printf("YOU have entered already on that index so You can't overwrite\n");
     }
 }


 if(array2[0][0]==array2[1][1]&&array2[1][1]==array2[2][2]&&array2[2][2]==array2[0][0])
 {
     if(array2[0][0]==0)
     {
        printf("Man has won\n");
        break;

     }
     else if(array2[0][0]==1)
     {
        printf("Computer has won\n");
        break;
     }

 }

 else if(array2[0][2]==array2[1][1]&&array2[1][1]==array2[2][0]&&array2[2][0]==array2[0][2])
 {
     if(array2[0][2]==0)
     {
        printf("Man has won\n");
        break;
     }
     else if(array2[0][2]==1)
     {
        printf("Computer has won\n");
        break;
     }

 }
 else if(array2[0][0]==array2[0][1]&&array2[0][1]==array2[0][2]&&array2[0][2]==array2[0][0])
 {
 	if(array2[0][0]==0)
 	{
 	printf("Man has won\n");
 	break;
 	}
 	else if(array2[0][0]==1)
 	{
 		printf("Computer has won\n");
 		break;
 	}
 }
 else if(array2[1][0]==array2[1][1]&&array2[1][1]==array2[1][2]&&array2[1][2]==array2[1][0])
 {
 	if(array2[1][0]==0)
 	{
 	printf("Man has won\n");
 	break;
 	}
 	else if(array2[1][0]==1)
 	{
 		printf("Computer has won\n");
 		break;
 	}
 }
 else if(array2[2][0]==array2[2][1]&&array2[2][1]==array2[2][2]&&array2[2][2]==array2[2][0])
 {
 	if(array2[2][0]==0)
 	{
 	printf("Man has won\n");
 	break;
 	}
 	else if(array2[2][0]==1)
 	{
 		printf("Computer has won\n");
 		break;
 	}
 }
 else if(array2[0][0]==array2[1][0]&&array2[1][0]==array2[2][0]&&array2[2][0]==array2[0][0])
 {
 	if(array2[0][0]==0)
 	{
 	printf("Man has won\n");
 	break;
 	}
 	else if(array2[0][0]==1)
 	{
 		printf("Computer has won\n");
 		break;
 	}
 }
 else if(array2[0][1]==array2[1][1]&&array2[1][1]==array2[2][1]&&array2[2][1]==array2[0][1])
 {
 	if(array2[0][1]==0)
 	{
 	printf("Man has won\n");
 	break;
 	}
 	else if(array2[0][1]==1)
 	{
 		printf("Computer has won\n");
 		break;
 	}
 }
 else if(array2[0][2]==array2[1][2]&&array2[1][2]==array2[2][2]&&array2[2][2]==array2[0][2])
 {
 	if(array2[0][2]==0)
 	{
 	printf("Man has won\n");
 	break;
 	}
 	else if(array2[0][2]==1)
 	{
 		printf("Computer has won\n");
 		break;
 	}
 }
 counter++;
 printf("Remaining chances out of 9 for whole game are %d\n",9-counter);
 }

 //printf("Match has Tied\n");
 if(counter>=9)
 {
  printf("Match has tied\n");
 }

 }
 	

 return 0;
}
