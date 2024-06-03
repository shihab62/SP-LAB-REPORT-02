#include <stdio.h>


double PI = 3.1416;


double Circle(double radius) { double Area = PI * radius * radius; return Area;
}



double RectangleArea(double length, double width) { double Area =length*width;
return Area;

}
double Triangle(double base, double height) { double Area = 0.5 * base * height;
return Area;
 



}



int main() {
double radius, length,width,base,height; printf("Enter the radius of the circle: "); scanf("%lf", &radius);
printf("The area of the circle is: %.2lf\n", Circle(radius));


printf("Enter the length of the rectangle: "); scanf("%lf",&length);
printf("Enter the width of the rectangle: "); scanf("%lf",&width);
printf("The area of the circle is: %.2lf\n", RectangleArea(length,width));


printf("Enter the base of the Triangle: "); scanf("%lf",&base);
printf("Enter the height of the Triangle: ");


scanf("%lf",&height);
printf("The area of the Triangle is: %.2lf\n",Triangle (base,height));


return 0;
 



}
