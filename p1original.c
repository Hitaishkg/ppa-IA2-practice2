#include<stdio.h>
void input(float *base, float *height ){
    printf("Enter the height of the Triangle\n");
    scanf("%f",height);
    printf("Enter the base of the Triangle\n");
    scanf("%f",base);
}
void find_area(float *base , float *height, float *area){
    *area=(*base * *height)/2;
}
void output(float base, float height, float area){
    printf("the area of the traingle with base %.2f and height %.2f is %.2f",base,height,area);
}
int main(){
    float base,height,area;
    input(&base, &height);
    find_area(&base , &height, &area);
    output(base,height,area);
    return 0;
}