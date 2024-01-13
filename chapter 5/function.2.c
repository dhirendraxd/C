#include<stdio.h>

void clasher();
void kyahalchla();

void clasher( ){
    printf("hey how you doin");
}

void kyahalchla(){
    printf("hey what is up ");
}
int main()
{ 
    char ch;

    clasher();
    kyahalchla();

printf("what if you nationality");
scanf("%c",&ch)
if (ch=="i")
{
    clasher();

}
else
{
    kyahalchla();

}



    return 0;
}

void clahser();

void printtable(int n );
// void is used when we dont want to a function to return a value 
void printtable(int n){
    for (int i = 1; i <=10; i++)
    {
        printf(i*n);
    }
    // this function doesnot return anything it just prints value 
    
}


printtable(int n); // this is how we call a parameter function...




int sumofnumbers(int a, int b);
// int cause this return a value 
int a =23;// may also use the value using scanf
int b=32;// may also use the value using scanf
// for eg
int s=sumofnumbers(a,b);
int sumofnumbers(int a, int b){
    // can also use x and y for a and  b 
    return a+b;
    // this can be called a returning function cause it returns a+b init

}

void calulateprice();
void calculateprice(){
    value =value +(0.14*value);
    printf("the final price is %f",value ); 
}