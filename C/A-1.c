//Q1 - print Hello 

/*#include<stdio.h>
int main()
{
    printf("Hello");

    return 0;
}*/

//2. Write  a program to print Hello in the First line and Students in the second line 

/*#include<stdio.h>
int main()
{
    printf("Hello\n");
    printf("students");

    return 0;
}*/

//3. write a program to print "mysirg"on the screen .(Remember to print in double quotes)

/*#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;
}*/

//4. Write a program to print \n on the screen
/*#include<stdio.h>
int main()
{
    printf("\\n");
    return 0;
}*/

//5. Write a program to print \r on the screen
/*#include<stdio.h>
int main()
{
    printf("\\r");
    return 0;
}*/

// 6. write a program to print  "Teacher'sDay " on the screen 
/*#include<stdio.h>
int main()
{
    printf("\"Teacher'sDay\"");
    return 0;
}*/

//7 write a program to calculate sum of two integers numbers are taken from user through keyboard

/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d \n%d",&a,&b);
    c=a+b;
    printf("add two num results %d ",c);
    return 0;
}*/

//8 Write a program  to calculate square of a given  number. NUmbered is enterd by the user

/*#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("Square of %d is %d", num, square);

    return 0;
}*/

// 9. Write a program to calculate area of rectangle . input appropriate data from the user

/*#include <stdio.h>

int main() {
    float length, breadth, area;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("Area of rectangle = %.2f", area);

    return 0;
}*/

// 10. WAP to find the  area of the circle . Take radius of circle from user as input and print the result in below given format 

#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of circle = %.2f", area);

    return 0;
}
