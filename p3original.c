#include<stdio.h>
#include<math.h>
int input_number(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n){
    int composite=0;
    for(int i=2;i<=n/2;i++){
        if (n%i==0){
            composite=1;
            break;
        }
        
    }
    return composite;
}
void output(int n, int composite){
    if(composite==1){
        printf("The number is composite\n");
    }
    else {
        printf("The number is not composite\n");
    }
}
int main(){
    int n,composite;
    n=input_number();
    composite=is_composite(n);
    output(n,composite);
    return 0;
}