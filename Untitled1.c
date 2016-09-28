/*
Student Name: Bijit Bikram Shah
Subject: Programming Fundamental
Roll No: 03
Program: WAP to read three side of triangle to calculate area.
Lab No:
Date: 2016-09-28
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("Enter one side of triangle a");
    scanf("%f",&a);
    printf("Enter second side of triangle b");
    scanf("%f",&b);
    printf("Enter third side of triangle c");
    scanf("%f",&c);
    s=a+b+c/2;
    area=pow((s(s-a)(s-b)(s-c)),0.5);
    printf("Area of triangle is %f",area);
    getch();
     }
