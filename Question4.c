#include<stdio.h>
int main()
{
//     float r,area,pi=3.14;
//     printf("Enter the radius of the circle\n");
//     scanf("%f",&r);
//     area = pi*r*r;
//     printf("Area of the circle is %f\n", area);
//     return 0;
       int r;
       float area;
       printf("Enter the radius of the circle :");
       scanf("%d",&r);
       area =(float)3.14*r*r;
       printf("Area of the circle is %f ",area);
       return 0;
}