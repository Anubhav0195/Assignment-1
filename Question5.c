#include<stdio.h>
int main()
{
char str[] = "Programming is fun";
int i=0;
while(str[i]!='\0'){
    i++;
}
printf("Length of the string is %d\n",i);

    return 0;
}