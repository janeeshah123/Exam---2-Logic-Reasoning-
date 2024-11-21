#include<stdio.h>
 int main() {
 	 int no=734;
 	  int reversed=0;
 	  printf("Enter the Number:");
 	  scanf("%d",&no);
 	   while (no!=0) {
 	   	 int digit=no%10;
 	   	     reversed=reversed*10+digit;
 	   	  no=no/10;
		}
		 printf("Enter  the reversed number:%d\n",reversed);
 }