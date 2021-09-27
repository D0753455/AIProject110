#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
void swap(char[],char[],int);
void perm(char[],char* ,int,int);
/*0000 0001 0010 0011 0100 0101 0110 0111*/
int main(){
 int x,i;
 char a[100];
 char b[100];
 printf("Enter a number of bits:\n");
 scanf("%d",&x);
 for(i=0;i<x;i++){
   a[i]='0'; b[i]='1';
    }
 perm(a,b,x-1,0);
} 
void perm(char a[],char b[],int x,int count){
 int i;
 if(x==count){   
  /*0000*/
  printf("%s\n",a);
  /*0001*/
  swap(a,b,x);
  printf("%s\n",a); 
 }
 else{
  for(i=0;i<2;i++){
   perm(a,b,x,count+1);
   swap(a,b,count);
  }
 }
}
void swap(char a[],char b[],int i){
 int tmp;
 tmp=a[i];
 a[i]=b[i];
 b[i]=tmp;
}
