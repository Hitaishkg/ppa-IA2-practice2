#include<stdio.h>
void input_string(char a[]){
    printf("Enter a word to be reversed\n");
    scanf("%s",a);
}
int string_length()
{
  int len;
  while(a[len]!='\0'){
      len++;
  }
  return len;
}
char *srt_reverse(char *a){
  char temp;
  int len=0;
  
  for (int i=0;i<(len-1)/2;i++){
      temp=a[i];
      a[i]=a[len-1-i];
      a[len-1-i]=temp;
  }
  return a;
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