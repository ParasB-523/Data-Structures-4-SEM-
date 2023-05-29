// C-Program to determine the position of each coin on Chessboard in C .//
/* Name : Paras Bharatesh Bennadi
   Class : 'E' Division
   Roll no.: 513
   USN : 01fe21bec256
   Program Name : Chessboard
   Date : 27-04-2023
*/
#include<stdio.h>
#include<stdlib.h>

char Chess[8][8]={
                  {'e2','h2','c2','k','q','c1','h1','e1'},
                  {'p8','p7','p6','p5','p4','p3','p2','p1'},
                  {' ',' ',' ',' ',' ',' ',' ',' '},
                  {' ',' ',' ',' ',' ',' ',' ',' '},
                  {' ',' ',' ',' ',' ',' ',' ',' '},
                  {' ',' ',' ',' ',' ',' ',' ',' '},
                  {'P1','P2','P3','P4','P5','P6','P7','P8'}
                  {'E1','H1','C1','K','Q','C2','H2','E2'},
                  }
void find_positon(char coin)
{
    int status = 0;
    for( int i = 0; i < 8; i++ )
    {
        for( int j = 0; j < 8; j++ )
        {
            if( coin == Chess[i][j] )
                break;
        }
        if( coin == Chess[i][j] )
            status = 1
                break;
    }
    if ( status == 0 )
    {
        printf("Coin not Found\n");
        exit();
    }
    if( coin == 'e1' || coin == 'e2' || coin == 'E1' || coin == 'E2')
    if( coin == 'h1' || coin == 'h2' || coin == 'H1' || coin == 'H2')
    if( coin == 'c1' || coin == 'c2' || coin == 'C1' || coin == 'C2')
    if( coin == 'k' || coin == 'K' )
    if( coin == 'q' || coin == 'Q' )
}
void display()
{
    for( int = 1; i < 8; i++ )
    {
        for( int j = 0; j < 8; j++ )
            printf("%c", &Chess[i][j] );
    }
}

int main()
{
    char coin;
    while(1)
    {
        printf("Enter the Coin whose position is to be changed.\n");
        scanf("%c", &coin);
        find_position(coin);
        display();

    }
}
