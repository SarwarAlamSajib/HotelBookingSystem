/*
Program Name:Hotel Booking System
Author/Programmer Name: Sarwar Alam Sajib
Created for University Assignment
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])//MAIN FUNCTION
{

    int back,log_in;//DECLARED VARIABLE
  do{//CREATING LOOP

    //HOTEL WELCOME LOGO
    printf("\t\t#*********************************************#");
    printf("\n\t\t|                   WELCOME   TO              |");
    printf("\n\t\t|                S R INTERNATIONAL            |");
    printf("\n\t\t|                      HOTEL                  |");
    printf("\n\t\t#*********************************************#");
    printf("\n");

    printf("\t\t1. SIGN IN TO BOOK ROOM \n");//LOG IN WINDOW WITH TWO OPTION
    printf("\t\t2. EXIT\n");
    printf("\n");
    printf("\t\tPLEASE TYPE (1/2) TO CONTINUE...:  ");
    scanf("%d", &log_in);//INPUT TO LOG IN
    printf("\n");

    if (log_in==1){
    do{//LOOPING TO USE AGAIN AND AGAIN
        char fname[100];//DECLARED VARIABLE
        char lname[100];
        char email[200];
         int mNum;
        printf("\t\tPLEASE WRITE YOUR FIRST NAME: ");//PERSONAL INFO
        scanf("%s", fname);
        printf("\t\tPLEASE WRITE YOUR LAST NAME:  ");
        scanf("%s", lname);
        printf("\n");
        printf("\t\tPLEASE WRITE YOUR MOBILE NUMBER:  ");
        scanf("%d", &mNum);
        printf("\t\tPLWASE WRITE YOUR EMAIL:      ");
        scanf("%s", email);
        printf("\n");
        printf("\t\t\tHELLO %s %s", fname, lname);
        printf("\n");
        printf("\n");
        printf("\t\tTHANKS FOR GIVING YOUR INFORMATION");
        printf("\n");
        printf("\t\tPLEASE CHECK OUR ROOMS BELOW......");
        printf("\n");

        //USING LOOPING,POINTER ,ARRAY TO CREATE MENU
    char *roomtype[]={ "\t\t=========================================================\n"
                       "\t\t ROOM CATEGORIES\t\t\t\tPRICE\n",
                       "\t\t1.SINGLE ROOM(SINGLE BED)\t\t\t700TAKA\n",
                       "\t\t2.DOUBLE ROOM(DOUBLE BED)\t\t\t1000TAKA\n",
                       "\t\t3.TWIN ROOM(TWO SINGLE BED)\t\t\t1200TAKA\n",
                       "\t\t4.DUPLEX(TWO FLOORS)\t\t\t\t1800TAKA\n",
                       "\t\t5.CABANA(WITH SWIMMING POOL)\t\t\t2200TAKA\n",
                       "\t\t6.SUITE ROOM\t\t\t\t\t2500TAKA\n",
                       "\t\t=========================================================\n"};
                       printf("\n");

    int i;
    for ( i=0; i<8; i++){
            char *pos=roomtype[i];
            while(*pos!='\0'){
            printf("%c", *(pos++));
            }
    }
        struct rooms{        //USING STRUCT TO BOOK

            int roomcategories;
            int days;
            int quantity1;
    };
        struct rooms r;
    printf("\n");
    printf("\t\tENTER THE NUMBER OF SELECTED ROOM: ");
    scanf ("%d",&r.roomcategories);
    printf("\t\tHOW MANY DAYS YOU WANT TO STAY   : ");
    scanf ("%d",&r.days);
    printf("\t\tHOW MANY ROOM YOU WANT TO BOOK   : ");
    scanf ("%d",&r.quantity1);
    printf("\n");

    float price;//DECLARED VARIABLE

    //USING SWITCH TO CALCULATE PRICE
    switch (r.roomcategories){
        case 1:
          price=700 *r.days * r.quantity1;
        break;
        case 2:
          price=1000 *r.days* r.quantity1;
        break;
        case 3:
          price=1200 *r.days* r.quantity1;
        break;
        case 4:
          price=1800 *r.days* r.quantity1;
        break;
        case 5:
          price=2200 *r.days* r.quantity1;
        break;
        case 6:
          price=2500 *r.days* r.quantity1;
        break;
          default:
        printf("You have typed invalid number\n");
        }

        printf("\t\t\t YOUR TOTAL PRICE IS:%f  \n",price);

        float payment;//DECLARED VARIABLE
        float dueMoney;
        int choice;

        printf("\t\tHOW MUCH YOU WANT TO PAY NOW TO BOOK? TYPE AMOUNT: ");
        scanf("%f",&payment);
        printf("\n");

        dueMoney= price-payment;//CONDTION TO CALCULATE DUE MONEY

        printf("\t\tHOW YOU WANT TO PAY?\n");
        printf("\n");
        printf("\t\t1. ONLINE BANKING\n");
        printf("\t\t2. CREDIT/DEBIT CARD\n");
        printf("\n");
        printf("\t\tTYPE YOUR CHOICE: ");
        scanf("%d",&choice);
        printf("\n");
                        //CONDITION FOR PAYMENT
        if (choice==1){
            printf("\t\tTHANKS FOR PAYING WITH ONLINE BANKING\n");
        }
        else if (choice==2){
            printf("\t\tTHANKS FOR PAYING WITH CREDIT/DEBIT CARD\n");
        }

        printf("\t\tPLEASE SHOW THE RECIEPT WHEN YOU CHECK IN.\n");
        printf("\t\tA COPY WILL BE SEND TO YOUR EMAIL.\n");
        printf("\n");
        printf("\t\t@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@@#\n");
        printf("\t\t\tRECIEPT");
        printf("\n");
        printf("\t\tCUSTOMER NAME: %s %s", fname, lname);
        printf("\n");
        printf("\t\tMOBILE NUMBER: %d",mNum);
        printf("\n");
        printf("\t\tEMAIL: %s", email);
        printf("\n");
        printf("\t\tTOTAL PRICE: %f",price);
        printf("\n");
        printf("\t\tPAID AMOUNT: %f",payment);
        printf("\n");
        printf("\t\tDUE MONEY: %f",dueMoney);
        printf("\n");
        printf("\t\t@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@@#");
        printf("\n");
    printf("\n");
    printf("\t\tDO YOU WANT TO BOOK MORE?\n");//FOR MORE BOOKING
    printf("\n");
    printf("\t\tTYPE '1' TO BOOK OR \n\t\tTYPE '2' TO RETURN TO THE LOG IN WINDOW(1/2): ");
    scanf("%d",&back);
    printf("\n");

    if (back!=1){
    printf("\t\tTHANK YOU , SEE YOU SOON\n");
    printf("\n");}
    }while( back==1);//CONDITION OF LOOP TO BOOK AGAIN
  }


     }while(log_in!=2);//CONDITION OF ENDING LOOP
    printf("\t\tNEVER MIND, PLEASE COME AGAIN\n");
    printf("\t\tPRESS ANY KEY TO EXIT........");
    printf("\n");


    }

                //END OF PROGRAM
                //DON'T USE WITHOUT THE PERMISSION OF AUTHOR
                //SRS
