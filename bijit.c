/*
Name    :Bijit Bikram Shah
Roll No :03
Subject : Programming Fundamentals
Program : To calculate examination result
Lab:
Date: September 30, 2016
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    char name[20], per;

    float programming, architecture, management, algebra, discrete, interactive, software,result, total;
    printf("\n Program to compute result of a student \n");
    printf("\n Enter your name : ");
    scanf("%s", &name);
    printf("\n Enter the marks for Programming Fundamentals : ");
    scanf("%f", &programming);
    printf("\n Enter the marks for architecture : ");
    scanf("%f",&architecture);
    printf("\n Enter the marks for management : ");
    scanf("%f", &management);
    printf("\n Enter the marks for algebra: ");
    scanf("%f", &algebra);
    printf("\n Enter the marks for discrete : ");
    scanf("%f", &discrete);
    printf("\n Enter the marks for interactive : ");
    scanf("%f", &interactive);
    printf("\n Enter the marks software : ");
    scanf("%f", &software);
    total = programming + architecture + management + algebra + discrete + interactive + software;
    result = total / 7;
    printf("\n Your name is %s \n", name);
    printf("The percentge is:  %f", total, result);
    getch();
}
