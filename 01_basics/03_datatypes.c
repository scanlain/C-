#include<stdio.h>
#include<math.h>

/*
int, float -> takes 4 bytes(32 bits) 1byte = 8bits
char -> 1byte
*/

//   /n is escape character that represents a new line and takes the output to the next line.

void main(){

    // int a = 7;
    // float b = 1.5;
    // char ch = 'z';

    // printf("%d %.1f %c \n", a, b, ch);
    // printf("Int ->%zu ", sizeof(int));
    // printf("Float ->%zu ", sizeof(float));
    // printf("Char ->%zu ", sizeof(char));

    int length;
    int breadth; 
    float radius;

    printf("Enter the length of rectangle: \n");
    scanf("%d", &length);
    
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);

    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);

    int area = length * breadth;

    printf("Area of rectangle is : %d \n", area);
    // printf("Area of circle is: %d \n", 3.14*Math.pow(radius, 2));
    printf("Area of circle is: %.2f \n", 3.14*radius*radius);
}