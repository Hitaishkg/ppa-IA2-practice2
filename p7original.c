#include<stdio.h>
typedef struct triangle
{
    float base,altitude,area;
}Triangle;
Triangle input_triangle(){
    Triangle t;
    printf("Enter the base of the triangle\n");
    scanf("%f",&t.base);
    printf("Enter the altitude of the triangle\n");
    scanf("%f",&t.altitude);
    return t;
}
float  find_area(Triangle *t){
    float area;
    area=0.5* t->base * t->altitude;
    return area;
}
void output(Triangle t,float area){
    printf("The area of triangle with %.2f base  and %.2f altitude is %.2f",t.base,t.altitude,area);
}
int main(){
    Triangle t;
    t=input_triangle();
    float area;
    area=find_area(&t);
    output(t,area);
    return 0;

}