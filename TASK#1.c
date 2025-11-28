#include<stdio.h>
int sumofdigits(int n)
{
    if(n==0)return 0;
    else 
return (n%10)+sumofdigits(n/10);
}
int main()
{
    int n;
    printf("Enter Any Large Value or number: ");
    scanf("%d",&n);
    if(n<0) 
    n=-n;
    printf("\n The Sum is: %d",sumofdigits(n));
    return 0;
}