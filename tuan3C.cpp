#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
long int n;
long int donvi;
long int s = 0;
scanf("%d",&n);
for(;n!=0;){
donvi = n % 10;
s = s + donvi;
n =n / 10;
} 
printf("%d",s);
}

