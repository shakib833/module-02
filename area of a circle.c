#include<stdio.h>
int main()
{
   //code for calculating the area(khetrofol) of a circle
   int radius;
   printf("Enter the radius of a circle: ");
   scanf("%d",&radius);

   float Area;
   Area = 3.14159 *radius*radius;
   printf("The area of the circle is: %f",Area);

  return 0;
}
