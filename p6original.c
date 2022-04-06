#include<stdio.h>
void input_string(char a[]){
    printf("Enter a word to be reversed\n");
    scanf("%s",a);
}
void srt_reverse(char a[],char temp[]){
  int len=0;
 for(int i=0;a[i]!='\0';i++){
     len+=1;
 }
 int j=len-1;
  for (int i=0;a[i]!='\0';i++,j--){
     temp[i]=a[j];
  }
 
}
void output(char temp[]){
    printf("The new string is %s",temp);
}
int main(){
    char a[100],temp[100];
    input_string(a);
    srt_reverse(a,temp);
    output(temp);
    return 0;
}