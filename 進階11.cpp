#include<stdio.h> 
#include<string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

{

 

  char te1[10];  

  char te2[10]; 

  char to1[10]; 

  char to2[10];  

  char to3[10];  

  char six1[5];  

  char six2[5]; 

  char number[10]; 



  printf("請輸入特別獎的號碼:"); 

  fgets(te1,10,stdin); 

 

  printf("請輸入特獎的號碼:"); 

  fgets(te2,10,stdin);

 

  printf("請輸入頭獎(一)的號碼:"); 

  fgets(to1,10,stdin);

 

  printf("請輸入頭獎(二)的號碼:");  

  fgets(to2,10,stdin); 

 

  printf("請輸入頭獎(三)的號碼:");  

  fgets(to3,10,stdin);

 

  printf("請輸入增開六獎(一)的號碼:");

  fgets(six1,5,stdin);

 

  printf("請輸入增開六獎(二)的號碼:"); 

  fgets(six2,5,stdin);

 

  printf("請輸入發票號碼:\n");

   

 while(fgets(number,10,stdin)) 

 {

        if (strcmp(number,te1)==0) 

        {

           printf("恭喜你中了特別獎!金額為1000萬元!\n");

        }

 

        else if (strcmp(number,te2)==0) 

        {

           printf("恭喜你中了特獎!金額為200萬元!\n");

        }

 

        else if (strcmp(number,to1)==0)

        {

            printf("恭喜你中了頭獎!金額為20萬元!\n");

        }

 

        else if (strcmp(number,to2)==0)

        {

            printf("恭喜你中了頭獎!金額為20萬元!\n");

        }

 

        else if (strcmp(number,to3)==0)

        {

            printf("恭喜你中了頭獎!金額為20萬元!\n");

        }

 

        else if (strncmp(&number[1],&to1[1],7)==0)

        {

            printf("恭喜你中了二獎!金額為40000元!\n");

        }

 

        else if (strncmp(&number[1],&to2[1],7)==0)

        {

            printf("恭喜你中了二獎!金額為40000元!\n");

        }

 

        else if (strncmp(&number[1],&to3[1],7)==0)

        {

            printf("恭喜你中了二獎!金額為40000元!\n");

        }

 

        else if (strncmp(&number[2],&to1[2],6)==0)

        {

            printf("恭喜你中了三獎!金額為10000元!\n");

        }

 

        else if (strncmp(&number[2],&to2[2],6)==0)

        {

            printf("恭喜你中了三獎!金額為10000元!\n");

        }

 

        else if (strncmp(&number[2],&to3[2],6)==0)

        {

            printf("恭喜你中了三獎!金額為10000元!\n");

        }

 

        else if (strncmp(&number[3],&to1[3],5)==0) 

        {

            printf("恭喜你中了四獎!金額為4000元!\n");

        }

 

        else if (strncmp(&number[3],&to2[3],5)==0)

        {

            printf("恭喜你中了四獎!金額為4000元!\n");

        }

 

        else if (strncmp(&number[3],&to3[3],5)==0)

        {

            printf("恭喜你中了四獎!金額為4000元!\n");

        }

 

        else if (strncmp(&number[4],&to1[4],4)==0) 

        {

            printf("恭喜你中了五獎!金額為1000元!\n");

        }

 

        else if (strncmp(&number[4],&to2[4],4)==0)

        {

            printf("恭喜你中了五獎!金額為1000元!\n");

        }

 

        else if (strncmp(&number[4],&to3[4],4)==0)

        {

            printf("恭喜你中了五獎!金額為1000元!\n");

        }

 

        else if (strncmp(&number[5],&to1[5],3)==0)

        {

            printf("恭喜你中了六獎!金額為200元!\n");

        }

 

        else if (strncmp(&number[5],&to2[5],3)==0)

        {

            printf("恭喜你中了六獎!金額為200元!\n");

        }

 

        else if (strncmp(&number[5],&to3[5],3)==0)

        {

            printf("恭喜你中了六獎!金額為200元!\n");

        }

 

        else if (strncmp(&number[5],&six1[0],3)==0)

        {

            printf("恭喜你中了增開六獎!金額為200元!\n");

        }

 

        else if (strncmp(&number[5],&six2[0],3)==0)

        {

            printf("恭喜你中了增開六獎!金額為200元!\n");

        }

 

        else 

        {

            printf("恭喜你!!你沒中!!謝謝惠顧!!\n");

        }

 

        printf("請輸入發票號碼:");

 }

        return 0;

}
