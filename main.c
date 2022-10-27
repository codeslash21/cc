/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


int main()
{
    int a[1000][1000], b[1000][1000], res[1000][1000]={0}, i, j;
    for(i=0;i<1000;i++)
        for(j=0;j<1000;j++){
            a[i][j]=rand()%100;
            b[i][j]=rand()%100;
        }
    for(i=0;i<1000;i++)
        for(j=0;j<1000;j++)
            for(k=0;k<1000;k++)
                res[i][j]+=a[i][k]*b[k][j];

    return 0;
}
