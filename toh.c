#include <stdio.h>
void toh(int n,char a,char b,char c)
{
    
   if(n>0)
    {
        toh(n-1,a,c,b);
        printf("move the disk from %c to %c\n",a,c);
        toh(n-1,b,a,c);
    }
}
int main()
{
    int n;
    char a,b,c;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    toh(n,'a','b','c');
    return 0;
}






