#include <stdio.h>
 
int main() {
    int i,j,k;
 
    int h=5;
 
    for(i=1;i<=h;i++)
    {
        for(j=h-1;j>=i;j--)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("* ");
    }
    printf("\n");
    }
return 0;
}