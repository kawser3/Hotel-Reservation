#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>


struct Customer
{
    char name[101];
    int type;
    int num_room;
    int person;
    int preiod;
    char nationality[50];
    char date[10];
    char phone[15];
    char p1[20];
    char p2[8];
    char p3[3];


}M; struct Customer f;


void Availability(void);
void Reservation();
void CancelReservation();
void DisplayAllReservation();
void RestMenu();
void Aboutus();
void Contact();
void loading();
void Resort();
void plusstr();
void Box();
void loop();
void menu();
void Exit();


int main(){


     system("COLOR 0A");

     loading();

     printf("\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("\t\t\t\t\t\t\t::                                                        ::\n");
     printf("\t\t\t\t\t\t\t::                                                        ::\n");
     printf("\t\t\t\t\t\t\t::                       WELCOME!                         ::\n");
     printf("\t\t\t\t\t\t\t::                                                        ::\n");
     printf("\t\t\t\t\t\t\t::                                                        ::\n");
     printf("\t\t\t\t\t\t\t::                                                        ::\n");
     printf("\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");


    char c;
    FILE *file;
    file = fopen("Intro.txt", "r");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);

     }

    printf("Press Enter to continue.....");
    getchar();
    system("cls");
    menu();


  return 0;
}

void menu()
{


	int menu_choice,choice_return;
	char choice,R,F;


    Resort();

	printf("\n \n");

    printf("\n\t\t\t\t\t\t\t</> To GET availability,         please input 'A'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To ADD a reservation,        please input 'B'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To CANCEL a reservation,     please input 'C'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To DISPLAY ALL reservations, please input 'D'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To SEE Restaurant Menu Card, please input 'E'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To SEE About US,             please input 'F'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To Contact US,               please input 'G'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");

    printf("\n\t\t\t\t\t\t\t</> To EXIT the program,         please input 'H'\n");
    printf("\t\t\t\t\t\t\t---------------------------------------------------\n");
    printf("\n \n");
    printf("\t\t\t\t\t\t\t<*>Enter choice: ");
    scanf("\t\t\t\t\t\t\t%s",&choice);

    if(choice == 'A' ||choice == 'a' || choice == 'B'  ||choice == 'b' || choice== 'C' ||choice == 'c' || choice == 'D' ||choice == 'd' || choice == 'E' || choice == 'e' ||choice == 'F' || choice == 'f' ||choice == 'G' || choice == 'g' ||choice == 'H' || choice == 'h' )
{
    R=1;
}
   else
   {

   F=0;
   printf("              \n ");
   printf("\nInvalid Input\n");
   printf("\nTRY AGAIN!\n");
   printf("-----------\n");
   Box();
   loop();


   }


    switch(choice){

case 'A':
case 'a':
    system("cls");
    Resort();
    Availability();
    break;

case 'B':
case 'b':
    system("cls");
    Resort();
    Reservation();
    break;

case 'C':
case 'c':
    system("cls");
    Resort();
    CancelReservation();
    break;

case 'D':
case 'd':
    system("cls");
    Resort();
    DisplayAllReservation();
    break;

case 'E':
case 'e':
    system("cls");
    Resort();
    RestMenu();
    break;

case 'F':
case 'f':
    system("cls");
    Resort();
    Aboutus();
    break;

case 'G':
case 'g':
    system("cls");
    Resort();
    Contact();
    break;

case 'H':
case 'h':
    system("cls");
    Resort();
    Exit();
    break;


}
  }



void Availability()
{
    int input,R,F;
     char c;
    FILE *file;
    file = fopen("Roomtype.txt", "a+");
    if (file)
        {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);
        }

   printf("\nEnter Choice To See Features: ");

   scanf("%d", &input);

if(input == 1 || input == 2  || input == 3 || input == 4 || input == 5)
{
    R=1;
}
   else
   {

   F=0;
   printf("Invalid Input\n");
   Box();

   }

   if(input == 1)
   {
    char c;
    FILE *file;
    file = fopen("Roomtype1.txt", "a+");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);
   }

   }


else if(input == 2)
{
    char c;
    FILE *file;
    file = fopen("Roomtype2.txt", "a+");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);
}

}


else if(input == 3)
{
    char c;
    FILE *file;
    file = fopen("Roomtype3.txt", "a+");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);
}

}


else if(input == 4)
{
    char c;
    FILE *file;
    file = fopen("Roomtype4.txt", "a+");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);


}

}


else if(input == 5)
{
    char c;
    FILE *file;
    file = fopen("Roomtype5.txt", "a+");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);
}

}
    loop();

}
void Reservation()
{
   FILE *fptr;
   fptr = fopen("Reservationdata.txt","a+");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(-1);
   }


     printf("Please Enter Your Information: ");


     printf("\n\n\n************************************");
     printf("\n\nEnter name: ");
     scanf("%s",&f.name);



     printf("---------------------------------");

     printf("\nEnter type of room: ");
     scanf("%d",&f.type);

     printf("---------------------------------");

     printf("\nEnter Number of room: ");
     scanf("%d",&f.num_room);

     printf("---------------------------------");

     printf("\nEnter No. of Person: ");

     scanf("%d",&f.person);

     printf("---------------------------------");

     printf("\nEnter No. of days: ");
     scanf("%d",&f.preiod);

     printf("---------------------------------");

     printf("\nEnter your nationality: ");
     scanf("%s",&f.nationality);

     printf("---------------------------------");

     printf("\nEnter your arrival date: ");
     scanf("%s",&f.date);

     printf("---------------------------------");

     printf("\nEnter your phone number: ");
     scanf("%s",&f.phone);

     printf("\n*****************************************");

     printf("\n\nEnter MASTER CARD DETAILS FOR PAYMENT:\n");

     printf("\n*****************************************");

     printf("\nEnter your card number: ");
     scanf("%s",&f.p1);

     printf("---------------------------------");

     printf("\nEnter your card EXP date: ");
     scanf("%s",&f.p2);

     printf("---------------------------------");

     printf("\nEnter your card cvv: ");
     scanf("%s",&f.p3);



     fprintf(fptr,"%s\t\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%s\t%s\t%s\n",f.name,f.type,f.num_room,f.person,f.preiod,f.nationality,f.date,f.phone,f.p1,f.p2,f.p3);

     printf("\n              \n");
     printf("</>Room is allocated to Mr./Miss %s for %d days! \n",f.name,f.preiod);
     printf("\n</>A confirmation has been sent to %s \n",f.phone);
     printf("\n              \n");
     if(f.type == 1)
     {
       printf("</>Total Rate: %dBDT\n",30000*f.num_room*f.preiod);
     }
      else if(f.type == 2)
     {
       printf("</>Total Rate: %dBDT\n",25000*f.num_room*f.preiod);
     }
      else if(f.type == 3)
     {
       printf("</>Total Rate: %dBDT\n",19000*f.num_room*f.preiod);
     }
      else if(f.type == 4)
     {
       printf("</>Total Rate: %dBDT\n",16000*f.num_room*f.preiod);
     }
      else if(f.type == 5)
     {
       printf("</>Total Rate: %dBDT\n",12000*f.num_room*f.preiod);
     }

     printf("\n</>In the case of cancel Reservation Mail us your information on Resort@royal.com");


     fclose(fptr);

     loop();

}

void CancelReservation()
{
char p[6];
    char u[6];


    printf("\nENTER USER NAME: ");
    scanf("%s",u);
    printf("\nENTER PASSWORD: ");
    scanf("%s",p);

    if(strcmp(u,"admin")==0)
    {
        if(strcmp(p,"admin")==0)
        {

         printf("\nACCESS GRANTED\n");
         printf("--------------\n");


    int found = 0, success = 5, choice = 1;
    FILE *newrec;
    newrec = fopen("new.txt","a+");

        FILE *ptr;
        printf("\n\n\tEnter Name Of The Customer to Delete: ");
        fflush(stdin);
        gets(M.name);
        plusstr(M.name);
        ptr = fopen("Reservationdata.txt","r");

        while(fscanf(ptr,"%s\t\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%s\t%s\t%s\n",f.name,&f.type,&f.num_room,&f.person,&f.preiod,f.nationality,f.date,f.phone,f.p1,f.p2,f.p3) != EOF)
            {found = 0;
            if(strcmpi(M.name,f.name) == 0)
            {
                found = 1;
                success = 1;
            }
            else
            {
                fprintf(newrec,"%s\t\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%s\t%s\t%s\n",f.name,f.type,f.num_room,f.person,f.preiod,f.nationality,f.date,f.phone,f.p1,f.p2,f.p3);
            }
        }

        fclose(ptr);

        if(!found)
        {
            system("cls");
            printf("\n\n\tRecord Not Found\n\n");
        }
        if(success == 1)
        {
            system("cls");
            printf("\n\n\tCustomer Details Deleted Successfully.\n");
        }



    fclose(newrec);
    remove("Reservationdata.txt");
    rename("new.txt","Reservationdata.txt");

        }
        else
        {
            printf("\nACCESS DENIED ");
            printf("------------- \n");

        }
    }
        else
        {
            printf("\nACCESS DENIED \n");
            printf("--------------\n");

        }

        loop();

}
void DisplayAllReservation()
{
    char p[6];
    char u[6];


    printf("\nENTER USER NAME: ");
    scanf("%s",u);
    printf("\nENTER PASSWORD: ");
    scanf("%s",p);

    if(strcmp(u,"admin")==0)
    {
        if(strcmp(p,"admin")==0)
        {

         printf("\nACCESS GRANTED\n");
         printf("--------------\n");



         char c;

         printf("\nName\t\tT\tR\tP\tD\tCountry\t\tCheckin\t Phone\t\tcreditcardNo\t\tExp\tCvv\n");
         printf("------\t\t-\t-\t-\t-\t--------\t------\t---------\t---------------\t\t-----\t---\n");
         FILE *file;
         file = fopen("Reservationdata.txt", "r");
         if (file) {
         while ((c = getc(file)) != EOF)
         putchar(c);
         fclose(file);


         printf("\n\n\nNote:\nT=Room Type.\nR=Number of room.\nP=Person.\nD=Days.\n");
        }
        else
        {
            printf("\nACCESS DENIED");
            printf("------------- \n");
        }
    }
    }
        else
        {
            printf("\nACCESS DENIED\n");
            printf("--------------\n");
        }

        loop();
}
void RestMenu()
{
      char c;
    FILE *file;
    file = fopen("RestaurantMenu.txt", "r");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);
}

     loop();

}

void Aboutus()
{
    char c;
    FILE *file;
    file = fopen("AboutHotel.txt", "r");
    if (file) {
    while ((c = getc(file)) != EOF)
    putchar(c);
    fclose(file);

}
        loop();
}

void Contact()
{
    printf("\n                \n");
    printf("-------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\tCONTACT US AT:\n");
    printf("\nTOLL FREE NUMBER: \n");
    printf("\nTelephone: +880 2 912 8007\n");
    printf("\nTelephone: +880 2 912 8008\n");
    printf("\nTelephone: +880 2 912 8009\n");
    printf("\nMail us: \n");
    printf("\nEmail: Resort@Royal.com\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("\n                \n");

           loop();






}


void Resort()
{
    printf("\n==============================================================********************************************==============================================================\n");


    printf("\n\t\t\t\t\t\t\t\t\t   Hotel Royal Resort!\n\n\n");

    printf("==============================================================********************************************==============================================================\n\n");
}


void loading()
{

    system("cls");
    int i;
    printf("\n==============================================================********************************************==============================================================\n");

    printf("\n\t\t\t\t\t\t\t\t\t     LOADING.......\n\n\n");

      for(i=0;i<=80;i++)
    {
        Sleep(50);
        printf("%c",176);
    }
    system("cls");

}

void Box()
{
   MessageBoxA(0,"Try Again","Invalid Choice",1);
   system("cls");
}


void plusstr(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            s[i] = '+';
        }
        i++;
    }
}

void loop()
{
   int k;
   printf("\n\n-----------------------------------------\n\n</>PRESS '1' TO GET BACK INTO (MAIN MENU)\n</>PRESS '0' TO (EXIT): ");
   scanf("%d",&k);

   if(k == 1)
   {
       system("cls");
       menu();
   }
   else if(k==0)
   {
       Exit();

   }
      else
   {
       system("cls");
       printf("Invalid Ipnut:\n");
       Box();
       menu();

   }
}

void Exit()
{
    printf("THANK YOU! COME AGAIN \n");
    exit(0);
}








