//area of circle=22/7*radius*radius
//area of square=side*side
//area of rectangle=length*width
//perimeter of circle=2*22/7*radius
//perimeter of square=4*side
//perimeter of rectangle=2*(length+width)
#include<stdio.h>
 int main(){
    float radiusofcircle,sideofsquare,lengthofrectangle,widthofrectangle;
  //predefined values
    radiusofcircle=7;
    sideofsquare=3;
    lengthofrectangle=5;
    widthofrectangle=6;
printf("Area of circle: %f",((22*radiusofcircle*radiusofcircle)/7));
    printf("\nPerimeter of circle: %f",((2*22*radiusofcircle)/7));
    printf("\nArea of square: %f",(sideofsquare*sideofsquare));
    printf("\nPerimeter of square: %f",(4*sideofsquare));
    printf("\nArea of Rectangle: %f",(lengthofrectangle*widthofrectangle));
    printf("\nArea of circle: %f",(2*(lengthofrectangle+widthofrectangle)));
    return 0;
 }