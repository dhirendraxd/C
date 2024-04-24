#include<stdio.h>

int main(){
    if (age==18)
    {
        printf("congo");
    }
    else if (age>=18)
    {
        printf("you are already a valid user ");
    }
    else if (age<=9)
    {
        printf("oh bite me !!");
    }
    
    else
    {
        printf("you are tooyung");
    }
    

    // switch case 

char  school;
printf("enter you school  FIRST WORDS name :\n");
scanf(" %c",&school);
switch (school)
{
case 'A':
    printf(" nope ");
    break;

case 'B':
printf("ok");
break;

case 'C':
printf("get out ");
break;

default:printf("nope nothing");
    break;
}
// using small letters 
   switch (school) {
        case 'a':
        case 'A':
            printf("Nope\n");
            break;
        case 'b':
        case 'B':
            printf("Ok\n");
            break;
        case 'c':
        case 'C':
            printf("Get out\n");
            break;
        default:
            printf("Nope, nothing\n");
            break;

return 0;
}

#include<stdio.h>
#include<ctype.h>
int main(){
    char unit;
    float temp;

printf("enter the temp in c or f :");
scanf("%c",&unit)
unit=toupper(unit);// way 1

if (unit=='C'|| unit=='c') // way 2
{
    printf("the temp is in c ")
    printf("enter the temp unit in celsuis :\n");
    scanf("%f",&temp);
    temp=(temp*9/5)+32;
    printf("the output of this in f is  :%f\n",temp);

}
else if (unit=='F' || unit=='f')
{
    printf("the temp is in f ");
    printf("enter the temp unit in f :\n");
    scanf("%f",&temp);
    temp=((temp-32)*5)/9;
    printf("the output of this in c is  :%f\n",temp);

}
else
{
    printf("not a valid unit of measure ")
}

char operator;
double num1,num2,result;
printf("enter an operator");
scanf("%c",&operator);
printf("enter num 1 and 2");
scanf("%lf %lf",&num1,num2);
switch (operator)
{
case '+';
result=num1+num2;
printf("the result is :%lf",result);
    break;
case '-';
result=num1-num2;
printf("the result is :%lf",result);
    break;
case '*';
result=num1*num2;
printf("the result is :%lf",result);
    break;
case '/';
result=num1/num2;
printf("theresult is :%lf",result);
    break;

default:printf("no any matching case :");
    break;
}
return 0;
}

// logical operators 
#include<stdio.h>

int main(){
    
    if (a=='a'|| a=='A')
    {
        printf("both of them is a or A ")
        printf("in case this is a here is the secret reward: hi this is reward");

    }
    else if (temp==0||temp== 1)
    {
        printf("its good ");
    }
    else if (a==12 && a==123)
    {
        printf("both of them are ture if not you wont be here !!");
    }
    else if (a!=3)
    {
        printf("hey its not ");
    }
    else if (a==2)
    {
        printf("this is  equals to 2"); 
        }
return 0;
}

// functions basic

#include<stdio.h>


void happybirthday ();
void happybirthday(char gali[],char name[]){
// the strings should be shown as above  
    printf("happybirthday dear %s !!");
    printf("tu  paida kaisa huwa %s");
    printf("tu jidna kyu ha ");

}
int main(){
    char gali[30];
    char name[40];
    printf("enter gali then name :\n");
    scanf("%s %s"gali,name);// we dont use & to adress  to store data in strings 
    happybirthday(gali ,name );
// to pass the  value form another functio we should pass it by its reference as above gali and name 

return 0;
}



#include<stdio.h>

// Function declaration with an integer parameter
void happybirthday(int variant);

// Function definition with an integer parameter
void happybirthday(int variant) {
    switch(variant) {
        case 1:
            printf("Variant 1: Happy Birthday!!\n");
            break;
        case 2:
            printf("Variant 2: Tu paida kaisa hua?\n");
            break;
        case 3:
            printf("Variant 3: Tu jidhar kyun hai?\n");
            break;
        default:
            printf("Invalid variant!\n");
            break;
    }
}

int main() {
    // Call to the happybirthday() function with argument 3
    happybirthday(3);

    return 0;
}

// returinig arguement 
#include<stdio.h>
double square(double x);
// while we make any function in which we are using return to return or like wise we use its data types as the function data type  
double square(double x){

    return x*x;
} 
// if the result was supposed to be in character then it woudl be char  if intiger then int 
int main(){
    double dataoffunction=square(3.12);// we are giving the values of 3.12 to the funcation and then it will  give the result on the basis of that data 
    printf("the outputof above function is : %lf",dataoffunction);
// and now the varible dataoffunction is storing the value of the 3.12's ouput we can print it by its reference 
return 0;
}
// ternary operator


// function for returning max
int functimax(int x,int y); // this is a function prototype 
int functimax(int x,int y){
// if (x>y)
// {
//     return x;
// }
// else
// {
//     return y;
//}
// instead of the above if else we can use the followign ternary operator program as return :
return(x>y) ? x:y 
 
}
int main (){
int max =functimax(3,4); // we are passing the values 3 and 4 for x and y 
printf("%d",max);

return 0;
}