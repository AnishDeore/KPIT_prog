#include<stdio.h>
int main() {
  int arr[5]={10,20,30,40,50};
  
  int *ptr=&arr[2];
  int val;
  printf("ptr=%p,*ptr=%d\n",ptr,*ptr);
  
  ptr=&arr[2];
  val=*ptr++;   //val=*ptr, ptr=ptr+1
  printf("val=%d,*ptr=%d,*ptr=%p\n",val,*ptr,ptr);
  
   ptr=&arr[2];
  val=(*ptr)++;
  printf("val=%d,*ptr=%d,ptr=%p\n",val,*ptr,ptr);
  
  ptr=&arr[2];
  val=*++ptr;
  printf("val=%d,*ptr=%d,ptr=%p\n",val,*ptr,ptr);
  
  ptr=&arr[2];
  val=++*ptr;
  printf("val=%d,*ptr=%d,ptr=%p\n",val,*ptr,ptr);
      
  return 0;
}
