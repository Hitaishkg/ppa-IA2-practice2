#include<stdio.h>
int input(){
    int n;
    printf("Enter number to find gcd \n");
    scanf("%d",&n);
    return n;
}
int gcd(int a, int b){
    int hcf;
    if (a>b){
        hcf=b;
    }
    else{
        hcf=a;
    }
    for(hcf;hcf>=1;hcf--){
        if(a%hcf==0 && b%hcf==0){
            break;
        }
    }
    return hcf;
}
void output(int a,int b, int hcf){
    printf("The hcf of %d and %d is %d",a,b,hcf);
}
int main(){
    int a,b,hcf;
    a=input();
    b=input();
    hcf=gcd(a,b);
    output(a,b,hcf);
    return 0;
}
