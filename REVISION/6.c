#include<stdio.h>

int main(){
    // array of struct 
    struct  student
    {
        char name[13];
        float gpa;

    };
    
    struct student student1={"dhirendra",2.4};
    struct student student2={"hitesh",3.4};
    struct student student3={"ramdra",5.4};
    struct student student4={"clasher",3.4};
    
    struct student students[]={student1,student2,student3,student4};
    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s",students[i].name);
printf("\n")
        printf("%.3f",students[i].gpa);
    }
    
       // enums in c 

        enum day{sun=1,mon=2,tue=3,wed=4,thus=5,fri=6,sat=7};
        enum today=sun;
        printf("%d",today); // enums are not string they are used as a intigers 
        if (today==1||today==7)
        {
            printf("\nits party time");
        }
        else
        {
            printf("i have work to do ");
        }
        // tjese two header files shoudl be initialized .

        #include<stdlib.h>
        #include<time.h>

        // pseudo random numbers in c 
        srand(time(0)); // this generate random numbers form 0 to 34k

        int num1=(rand()%6) +1;
        // now that we have written %6 it will now only print random numbers from - to 6 and if we want to add form 1 to 6 we can add +1 at the end and likewise  

            int num2=(rand()%6)+1;

                int num3=(rand()%6)+1;

                    int num4=(rand()%6)+1;

        printf("%d",num1); // output : any random number
          printf("%d",num2);
            printf("%d",num3);
              printf("%d",num4);
        // this will not print any random numbers 
        
return 0;
}