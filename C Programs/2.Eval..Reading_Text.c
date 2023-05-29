#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define R 10
#define C 100

void read_lines( char* text[R][C], int* n )
{
    while( n <= 10 )
    {
        scanf("%s", text[n]);
        n++;
    }
}
void display_longest_line( char* text[R][C], int* n )
{
    int l[9];
    *n = 1;
    for( i = 1; text[*n][i] != '\0'; i++ )
    {
        if( )
    }

}
int main()
{
    char* text[R][C];
    int* n;
    *n = 1;
    read_lines( text, n );
    display_longest_line( text, n );
    return 0;
}
