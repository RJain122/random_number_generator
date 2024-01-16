#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=0;
    srand(time(0));
    number=rand()%100+1;
    
    do{
        printf("guess number between 1 to 100");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");
        }
        else if(number>guess){
             printf("Higher number please\n");
        }
        else{
              printf("you guessed in %d attempts\n",nguess);
               
        }
        nguess++;
    
    }
    while(guess!=number);
   
}