#include <stdio.h>
int main()
{
    float pi=3.14;
    float radius;
    float height;
    float radiuscyl;
    printf("The radius of the circle is\n");
    scanf("%f",&radius);
    printf("The height of the cylinder is \n");
    scanf("%f",&height);
    printf("The radiuscyl of cylinder is \n");
    scanf("%f",&radiuscyl);
    printf("The area of circle is %f\n",pi*radius*radius);
    printf("The area of cylinder is %f\n",2*pi*radius*height+2*pi*radius*radius);

    return 0;    
}
