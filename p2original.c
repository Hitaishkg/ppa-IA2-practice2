#include<stdio.h>
int input_side(){
    int a;
    printf("Enter the length of side \n");
    scanf("%d",&a);
    return a;
}
int check_scalene(int a, int b, int c){
    int isscalene;
    if(a==b || b==c ||c==a){
        isscalene=-1;
    }
    else if(a!=b &&b!=c&&c!=a){
        isscalene=1;
    }
    return isscalene;
}
void output(int a, int b, int c, int isscalene){
    if(isscalene==-1){
    printf("The triangle of sides %d %d %d is not scalene",a,b,c);
    }
    else if(isscalene==1){
        printf("the triangle of sides %d %d %d is scalene",a,b,c);
    }
}
int main(){
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b, c);
    output(a,b, c,isscalene);
    return 0;
      
}

