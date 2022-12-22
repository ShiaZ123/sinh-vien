#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//int main(){
// long int n;
// long int donvi;
// long int s = 0;
// scanf("%d",&n);
// for(;n!=0;){
// donvi = n % 10;
// s = s + donvi;
// n =n / 10;
// } 
// printf("%d",s);
//}
int main()
{
    int s,n,a,b;
    do
    {
     cout<<"nhap so nguyen duong n co 2 chu so: "; cin>>n;
    }while(n<10); //neu nhap so am hoac so co 1 chu so thi yeu cau nhap lai
    a=n/10; //chu so thu 1
    b=n%10; //chu so thu 2
    s=a+b;
    cout<<"Tong 2 chu so la:"<<s;
}
