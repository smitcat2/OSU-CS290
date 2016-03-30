//
//  main.c
//  HeronsFormula
//
//  Created by Catherine on 3/30/16.
//  Copyright © 2016 none. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()

{
    double S;
    double A;
    double B;
    double C;
    double Area;
    double step; //intermediate step to simplify the math
    
    //getting the sides
    printf ( "You will enter the three sides of a triangle and I will calculate the area. \n");
    printf ( "Enter side A: ");
    scanf ("%lf", &A);
    printf ( "Enter side B: ");
    scanf ("%lf", &B);
    printf ("Enter side C: ");
    scanf ("%lf", &C);
    
    //math
    S=(A+B+C)/2;
    step=S*(S-A)*(S-B)*(S-C);
    Area= sqrt(step);
    
    //print sides and area
    printf("A=  %lf\n", A);
    printf ("B=  %lf\n", B);
    printf("C=  %lf\n", C);
    printf ("Area=  %lf\n", Area);
    
    return 0;
}