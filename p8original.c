#include<stdio.h>
typedef struct triangle{
    float base,altitude,area;
}Triangle; 
int input_n(){
    int n;
    printf("Enter the number of triangles to be compared\n");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle(){
    Triangle a;
    printf("Enter the Base of the triangle\n");
    scanf("%f",&a.base);
    printf("Enter the altitude of the triangle\n");
    scanf("%f",&a.altitude);
    return a;
}
void input_n_triangles(int n,Triangle t[n]){
    for(int i=0;i<n;i++){
        t[i]=input_triangle();
    }
}
void find_area(Triangle *t){
   t->area=0.5*t->base*t->altitude;
}
void find_area_n(int n,Triangle t[n]){
    for(int i=0;i<n;i++){
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n]){
    Triangle smallest={0};
    for(int i=0;i<n;i++){
        if(smallest.area<t[i].area){
            smallest.area=t[i].area;
        }
    }
    return smallest;
}
void output(int n,Triangle t[n],Triangle smallest){
    printf("the smallest triangle area is %f\n",smallest.area);
}
int main(){
    int n;
    n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_area_n(n,t);
    Triangle smallest;
    smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;

} 