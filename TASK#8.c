#include<stdio.h>
#define conversion_factor 0.001
float convertintoKM(float m)
{
   static int calls=0;
   calls++;
   printf("\n Function is called %d time\n", calls);
   return conversion_factor*m;
}
int main()
{
    float km=0,m;

    printf("\nEnter the Distance in meters: ");
    scanf("%f",&m);
    
    km=convertintoKM(m);
    printf("\nDistance in kilometers: %.2f",km);

    km=convertintoKM(250);
    printf("\nSecond Conversion: %.2f",km);
    return 0;
}