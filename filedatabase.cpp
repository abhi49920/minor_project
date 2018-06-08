//#include<time.h>
#include <stdio.h>
#include<conio.h>
#include<graphics.h>
struct car{

       char firstname[100];

       char lastname[100];
     char carplate_no[100];
       //char img[100];
       char img[20];
       };
       struct car car;
int student();
int visitors();
int staff();
 int image();
 int main ()
{
int  n;
//char img[100];
//system("cls");
//printf("enter the name of image\n");
//gets(img);
while(n!=0)
{
printf("press 1 for student\n\n ");
printf("press 2 for visitors \n\n");
printf("press 3 for staff\n ");
printf("press 4 for upload image\n");
printf("press 5 for exit\n");
scanf("%d",&n);
switch(n)
{
case 1:
  student();
    break;
    case 2:
   visitors();
    break;
    case 3:
    staff();
    break;
    case 4:
 // printf("enter the name of image");
  //gets(car.img);
   initwindow(1000,600,"my Abhi window");
   readimagefile(car.img,0,0,1000,600);
   getch();
   closegraph();
  // delay(10000);
  // freeimage(car.img);
    return 0;
    break;
   case 5:
   printf("you are loggged out");
   exit(0);
    default:printf("\n wrong choice ! try again");
    break;
}}
//while(n != 7);
return 0;
}

int student()
{
    int count;
    FILE * pFile;

   FILE * f;



    FILE *in;

  char c;

  in = fopen("sdata.txt", "r");

  if(in != NULL)

  {

    while((c = fgetc(in)) != EOF) putchar(c);

    printf("Current Students in Database\n%[]\n",c);

    fclose(in);

  }



//   for ( count = 1; count<11; count++)

   //{

     pFile = fopen ("sdata.txt","a");//Student Database File//

     printf("please enter student  First name\n");

     scanf("%s",car.firstname);

     printf("please enter student  Last name\n");

     scanf("%s",car.lastname);

     //printf("please enter The car plate no for %s %s \n\n",student[count].firstname, student[count].lastname);
     printf("enter the car no");
     scanf("%s",car.carplate_no);
     printf("enter the image name");
     scanf("%s",car.img);
     printf("%s %s %s %s\n\n",car.firstname, car.lastname,car.carplate_no,car.img);

      fprintf (pFile, "\n STUDENTS DETAIL:\n First Name: %s\nLast  Name:%s\n carplate_no: %s\n image name %s:\n\n------------------\n", car.firstname,car.lastname,car.carplate_no,car.img);

   // puts(carplate_no);

     fclose (pFile);



    //ILE *in;

  //char c;

  in = fopen("sdata.txt", "r");

  if(in != NULL)

  {

    while((c = fgetc(in)) != EOF) putchar(c);

    printf("%[]\n",c);

    fclose(in);

  }

}



int visitors()
{

 int count;
    FILE * pFile;

   FILE * f;



    FILE *in;

  char c;

  in = fopen("sdata.txt", "r");

  if(in != NULL)

  {

    while((c = fgetc(in)) != EOF) putchar(c);

    printf("Current visitors in Database\n%\n",c);

    fclose(in);

  }


     pFile = fopen ("sdata.txt","a");//Student Database File//

     printf("please enter visitors No First name\n");

     scanf("%s",car.firstname);

     printf("please enter visitors No Last name\n");

     scanf("%s",car.lastname);

       printf("enter the car no");
     scanf("%s",car.carplate_no);
     printf("enter the image name");
     scanf("%s",car.img);

     //printf("enter the  visitors No[%d] image name\n",count);

    // scanf("%s",car[count].img);

     printf("%s %s %s %s\n\n",car.firstname, car.lastname,car.carplate_no,car.img);

      fprintf (pFile, " \nVISITORS DETAIL:\nFirst Name: %s\nLast  Name: %s\n carplate_no:%s\n image name:%s\n\n------------------\n", car.firstname,car.lastname,car.carplate_no,car.img);
//fprintf(pFile,"%s",car[count].img);
   // puts(carplate_no);

     fclose (pFile);
//    FILE *in;

//  char c;

  in = fopen("sdata.txt", "r");

  if(in != NULL)

  {

    while((c = fgetc(in)) != EOF) putchar(c);

    printf("%[]\n",c);

    fclose(in);

  }

}



int staff()
{

 int count;
    FILE * pFile;

   FILE * f;



    FILE *in;

  char c;

  in = fopen("sdata.txt", "r");

  if(in != NULL)

  {

    while((c = fgetc(in)) != EOF) putchar(c);

    printf("Current visitors in Database\n%[]\n",c);

    fclose(in);

  }





     pFile = fopen ("sdata.txt","a");//Student Database File//

     printf("please enter staff No First name\n");

     scanf("%s",car.firstname);

     printf("please enter staff No Last name\n");

     scanf("%s",car.lastname);

         printf("enter the car no");
     scanf("%s",car.carplate_no);
     printf("enter the image name");
     scanf("%s",car.img);
     printf("%s %s %s %s\n\n",car.firstname, car.lastname,car.carplate_no,car.img);

     fprintf (pFile, " \nSTAFF DETAIL:\nFirst Name:%s\nLast  Name: %s\n carplate_no%s\n image name: %s\n\n------------------\n", car.firstname,car.lastname,car.carplate_no,car.img);

   // puts(carplate_no);

     fclose (pFile);



//     FILE *in;

//  char c;

  in = fopen("sdata.txt", "r");

  if(in != NULL)

  {

    while((c = fgetc(in)) != EOF) putchar(c);

    printf("%[]\n",c);

    fclose(in);

  }

}


