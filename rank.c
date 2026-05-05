#include<stdio.h>
int main()
{
    int number;
    printf("enter the number :");
    scanf("%d",&number);

    if(0<number && 40>=number)
    {
        printf("the grade that you have gotten is D");
    }
    else if(41<=number && 50>=number)
    {
        printf("the grade that you have gotten is C");
    }
    else if(51<=number && 60>=number)
    {
        printf("the grade that you have gotten is C+");
    }
    else if(61<=number && 70>=number)
    {
        printf("the grade that you have gotten is B");
    }    
    else if(71<=number &&  80>=number)
    {
        printf("the grade that you have gotten is B+");
    }
    else if(81<=number &&  90>=number)
    {
        printf("the grade that you have gotten is A");
    }
    else if(91<=number &&  100>=number)
    {
        printf("the grade that you have gotten is A+");
    }
    else
    {
        printf("enter a valid input..");
    }
    return 0;
}
