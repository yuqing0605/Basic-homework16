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



  printf("�п�J�S�O�������X:"); 

  fgets(te1,10,stdin); 

 

  printf("�п�J�S�������X:"); 

  fgets(te2,10,stdin);

 

  printf("�п�J�Y��(�@)�����X:"); 

  fgets(to1,10,stdin);

 

  printf("�п�J�Y��(�G)�����X:");  

  fgets(to2,10,stdin); 

 

  printf("�п�J�Y��(�T)�����X:");  

  fgets(to3,10,stdin);

 

  printf("�п�J�W�}����(�@)�����X:");

  fgets(six1,5,stdin);

 

  printf("�п�J�W�}����(�G)�����X:"); 

  fgets(six2,5,stdin);

 

  printf("�п�J�o�����X:\n");

   

 while(fgets(number,10,stdin)) 

 {

        if (strcmp(number,te1)==0) 

        {

           printf("���ߧA���F�S�O��!���B��1000�U��!\n");

        }

 

        else if (strcmp(number,te2)==0) 

        {

           printf("���ߧA���F�S��!���B��200�U��!\n");

        }

 

        else if (strcmp(number,to1)==0)

        {

            printf("���ߧA���F�Y��!���B��20�U��!\n");

        }

 

        else if (strcmp(number,to2)==0)

        {

            printf("���ߧA���F�Y��!���B��20�U��!\n");

        }

 

        else if (strcmp(number,to3)==0)

        {

            printf("���ߧA���F�Y��!���B��20�U��!\n");

        }

 

        else if (strncmp(&number[1],&to1[1],7)==0)

        {

            printf("���ߧA���F�G��!���B��40000��!\n");

        }

 

        else if (strncmp(&number[1],&to2[1],7)==0)

        {

            printf("���ߧA���F�G��!���B��40000��!\n");

        }

 

        else if (strncmp(&number[1],&to3[1],7)==0)

        {

            printf("���ߧA���F�G��!���B��40000��!\n");

        }

 

        else if (strncmp(&number[2],&to1[2],6)==0)

        {

            printf("���ߧA���F�T��!���B��10000��!\n");

        }

 

        else if (strncmp(&number[2],&to2[2],6)==0)

        {

            printf("���ߧA���F�T��!���B��10000��!\n");

        }

 

        else if (strncmp(&number[2],&to3[2],6)==0)

        {

            printf("���ߧA���F�T��!���B��10000��!\n");

        }

 

        else if (strncmp(&number[3],&to1[3],5)==0) 

        {

            printf("���ߧA���F�|��!���B��4000��!\n");

        }

 

        else if (strncmp(&number[3],&to2[3],5)==0)

        {

            printf("���ߧA���F�|��!���B��4000��!\n");

        }

 

        else if (strncmp(&number[3],&to3[3],5)==0)

        {

            printf("���ߧA���F�|��!���B��4000��!\n");

        }

 

        else if (strncmp(&number[4],&to1[4],4)==0) 

        {

            printf("���ߧA���F����!���B��1000��!\n");

        }

 

        else if (strncmp(&number[4],&to2[4],4)==0)

        {

            printf("���ߧA���F����!���B��1000��!\n");

        }

 

        else if (strncmp(&number[4],&to3[4],4)==0)

        {

            printf("���ߧA���F����!���B��1000��!\n");

        }

 

        else if (strncmp(&number[5],&to1[5],3)==0)

        {

            printf("���ߧA���F����!���B��200��!\n");

        }

 

        else if (strncmp(&number[5],&to2[5],3)==0)

        {

            printf("���ߧA���F����!���B��200��!\n");

        }

 

        else if (strncmp(&number[5],&to3[5],3)==0)

        {

            printf("���ߧA���F����!���B��200��!\n");

        }

 

        else if (strncmp(&number[5],&six1[0],3)==0)

        {

            printf("���ߧA���F�W�}����!���B��200��!\n");

        }

 

        else if (strncmp(&number[5],&six2[0],3)==0)

        {

            printf("���ߧA���F�W�}����!���B��200��!\n");

        }

 

        else 

        {

            printf("���ߧA!!�A�S��!!���´f�U!!\n");

        }

 

        printf("�п�J�o�����X:");

 }

        return 0;

}
