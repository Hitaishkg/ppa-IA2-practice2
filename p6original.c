#include<stdio.h>
void input_string(char a[]){
    printf("Enter a word to be reversed\n");
    scanf("%s",a);
}
void srt_reverse(char a[]){
  char temp;
  int len=0;
  while(a[len]!='\0'){
      len++;
  }
  for (int i=0;i<(len-1)/2;i++){
      temp=a[i];
      a[i]=a[len-1-i];
      a[len-1-i]=temp;
  }
 
}
void output(char b[]){
    printf("The new string is %s",b);
}
int main(){
    char a[100];
    input_string(a);
    srt_reverse(a);
    output(a);
    return 0;
}