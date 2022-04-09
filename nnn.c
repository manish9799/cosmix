#include<stdio.h>
int main()
{
int go = 5.0, num = 1*10;
do 
{
num /= go;
} while(go--);
printf ("%d\n", num);
return 0;
}