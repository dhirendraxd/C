#include<stdio.h>
int main()
{ 

    for (int i = 0; i < 299; i++)
    {
        printf("%d\n",i);
        if (i==5)
        {
            break;
            // it will break the loop after the value of i reaches the value of 5 cause of i==5; is given in the above if statement 
        }
        
    }
    
//
    return 0;
}

//continue in loop 
#include<stdio.h>
int main()
{ 
    int skip=5;
    int i =0;

    while (i<10)
    {
        if (i!=skip)
        {
            i++;
            continue;
            // using this continue function it will not print 5 cause  i!=skip is and skip is valued as 5 so it will skip it but willprint its other remains 
        
        }
        else{
            printf("the value  %d",i);
        }
        
    }
    
    return 0;
}