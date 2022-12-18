#include<stdio.h>
#include<conio.h>
#include<string.h>
struct details
{
char name[20];
char dob[20];
char email[20];
}s1,s2,s3,s4,s5;
int main(void)
{
strcpy(s1.name,"Rajendra More");
strcpy(s1.dob,"November 17,1971");
strcpy(s1.email,"rajmore15@gmail.com");
strcpy(s2.name,"Bharati More");
strcpy(s2.dob,"December 18,1977");
strcpy(s2.email,"bharati30@gmail.com");
strcpy(s3.name,"Ayush More");
strcpy(s3.dob,"May 23,2009");
strcpy(s3.email,"ayush1420@gmail.com");
strcpy(s4.name,"Aditya More");
strcpy(s4.dob,"September 27,2001");
strcpy(s4.email,"yashraj12@gmail.com");
strcpy(s5.name,"Gauri Patil");
strcpy(s5.dob,"October 17,2002");
strcpy(s5.email,"gauripatil13@gmail.com");
printf("\nNAME: %s",s1.name);
printf("\nDOB : %s",s1.dob);
printf("\nEmail Id : %s",s1.email);
printf("\n\n");
printf("\nNAME: %s",s2.name);
printf("\nDOB : %s",s2.dob);
printf("\nEmail Id : %s",s2.email);
printf("\n\n");
printf("\nNAME: %s",s3.name);
printf("\nDOB : %s",s3.dob);
printf("\nEmail Id : %s",s3.email);
printf("\n\n");
printf("\nNAME: %s",s4.name);
printf("\nDOB : %s",s4.dob);
printf("\nEmail Id : %s",s4.email);
printf("\n\n");
printf("\nNAME: %s",s5.name);
printf("\nDOB : %s",s5.dob);
printf("\nEmail Id : %s",s5.email);
printf("\n\n");
return 0;
getch();
}