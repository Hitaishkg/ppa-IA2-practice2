#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter number of numbers to be Entered\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    for(int i=1;i<=n;i++){
        printf("Enter the number %d\n",i);
        scanf("%d",&a[i]);
    }
}
int is_composite(int n)
{
    i==)
    {
      composite=1;
            break;
    }
        
    }
    return composite;
}
int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    for(int i=1;i<=n;i++){
    if (is_composite(a[i])==1){
        sum+=a[i];
    }
  }
    return sum;
}    
void output(int sum){
    printf("The sum of composite numbers is %d ",sum);
}
int main(){
    int n;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum;
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}