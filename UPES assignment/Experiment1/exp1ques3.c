#include <stdio.h>

int main(){
     char name[20];
     int age;
     printf("Input name");
     scanf("%s",name);
     printf("Input age");
     scanf("%d",&age);
     printf("the name is %s and the age is %d\n",name,age);
     return 0;
}
