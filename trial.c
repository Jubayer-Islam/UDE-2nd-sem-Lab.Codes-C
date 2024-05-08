#include<stdio.h>

//struct date
//typedef struct
typedef struct date
{
   int year;
   unsigned short int month, day;
} date;
//};
//typedef struct date date;

//typedef struct differentName
//typedef struct
typedef struct account
{
   char owner[100];
   date dayOfBirth;
   unsigned int number;
   double balance, dispoLimit;
} accounter;

int main(void)
{
   /* description */
   /* example struct definition, input and output */
   /* data */
   accounter customer;
   /* steps */
   printf("sizeof(date) is %u\n", sizeof(date));
   printf("sizeof(account) is %u\n", sizeof(accounter));
   printf("sizeof(customer) is %u\n", sizeof(customer));
   printf("input of customer\nplease input name: ");
   scanf("%s", &customer.owner); /* for a character array its name can be given here - attention: the input length is not checked */
   printf("please input day of birth: ");
   scanf("%hu", &customer.dayOfBirth.day);
   printf("please input month of birth: ");
   scanf("%hu", &customer.dayOfBirth.month);
   printf("please input year of birth: ");
   scanf("%i", &customer.dayOfBirth.year);
   printf("please input number: ");
   scanf("%i", &customer.number);
   printf("please input balance: ");
   scanf("%lf", &customer.balance);
   printf("please input dispoLimit: ");
   scanf("%lf", &customer.dispoLimit);
   printf("\noutput customer\n");
   printf("number:       %u\n", customer.number);
   printf("owner:        %s\n", customer.owner);
   printf("day of birth: %02d.%02d.%04d\n", customer.dayOfBirth.day, customer.dayOfBirth.month, customer.dayOfBirth.year);
   printf("balance:      %.2f EUR\n", customer.balance);
   printf("dispo limit:  %.2f EUR\n", customer.dispoLimit);
   printf("\nsame output with pointer using arrow operator \n");

   return 0;
}
