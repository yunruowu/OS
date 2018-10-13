#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
  pid_t pid;
  int sum1 = 0;
  int sum2 = 0;
  int sum = 0;
  pid = fork();
  if(pid==0){
    for(int i=0;i<5000;i++){
        sum1 = sum1 + i;
    }
        printf("sum1  %d\n",sum1);
    exit(0);
  }
  else{
    for(int i=5001;i<10000;i++){
        sum2 = sum2 + i;
    }
        printf("sum2  %d\n",sum2);
  }
  wait();
  sum = sum1 + sum2;
  printf("%d",sum);
  return 0;
}
