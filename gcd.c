#include <stdio.h>

int gcd(int a,int b) {
	if(b!=0)
	   return gcd(b,a%b);
	else
	   return a;
} 
void main()
{
    int a,b,c;
    printf("Enter two positive integers: ");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("G.C.D of %d and %d is",a,b,c);
}



