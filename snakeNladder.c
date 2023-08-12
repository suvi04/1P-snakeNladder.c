#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int rolldice()
{
    int dice = rand()%(6)+1;
    return dice;
}

int main()
{
    srand(time(0));

    int p1 = 0;
    char wasteChar;
    int dice;
    while(p1!=100)
    {
        scanf("%c",&wasteChar);
        dice=rolldice();
        p1+=dice;
        if(p1>100)
         {
            p1-=dice;
            printf("Player exceded the finish point !\nPlayer stays at %d\n",p1);
         }
        printf("Player rolled a %d , new position is : %d\n",dice,p1);

        //Snakes

        if(p1==99)
        {   
            p1=6;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==89)
        {   
            p1=53;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==76)
        {   
            p1=58;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==54)
        {   
            p1=31;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==43)
        {   
            p1=18;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==40)
        {   
            p1=3;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==27)
        {   
            p1=5;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        if(p1==13)
        {   
            p1=2;
            printf("Player got bit by a snake !\n new position is %d",p1);
        }
        
                //Ladders

         if(p1==74)
        {   
            p1=92;
            printf("Player climbed up the stairs !\n new position is %d",p1);
        }
         if(p1==62)
        {   
            p1=81;
            printf("Player climbed up the stairs !\n new position is %d",p1);
        }
         if(p1==42)
        {   
            p1=63;
            printf("Player climbed up the stairs !\n new position is %d",p1);
        }
         if(p1==50)
        {   
            p1=69;
            printf("Player climbed up the stairs !\n new position is %d",p1);
        }
         if(p1==19)
        {   
            p1=46;
            printf("Player climbed up the stairs !\n new position is %d",p1);
        }
         if(p1==4)
        {   
            p1=26;
            printf("Player climbed up the stairs !\n new position is %d",p1);
        }
         

         //
         if(p1==100)
         {
            printf("!! YAY YOU WIN !!\n\n");
         }
         
    }



    
}