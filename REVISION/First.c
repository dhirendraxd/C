#include<stdio.h>
// escape sequences in c 3 kind of  \t \n  and "\" 
int main(){
    printf("HEY HOW YOU DOING \n");
      printf("HEY HOW YOU \tDOING ");
        printf("HEY\"HOW YOU\"DOING ");

        int a=5,b=2;
        int z=a%b;
        printf("%d",z);
        // output = 1  cause the remaining will be 1 afterwards 

return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
  double a=sqrt(9); // output 3
  double b=pow(2,4); // output 16
  int c = round(3.14);// output 3
  int d =ceil(3.14);// output  4
  int e =floor(3.99); // output 3
  double f=fabs(-100); // ouput  positive 100
  double g =log(3);
  double h=sin(45);
  double i=cos(45);
  double j = tan(34);
  printf("%lf",j);


// program for a circle

const double pi=3.223232;
double radius; 
double circum;
printf("enter radius:\n");
scanf("%lf",&radius);
circum=2*pi*radius;
printf("the result is :%lf",circum)


// hypotenoue program 
double a,b,c;
printf("enter all size on by one \n");
scanf("%lf %lf %lf",&a,&b,&c);

c=sqrt(a*a+b*b);
printf("side  c is %lf",c);

return 0;
}