#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
char name [50];
char course[50];
char uid[50];};
int count=0;
struct student s[50];

    void add()
{int i, n;
printf("ENTER THE NUMBER OF STUDENTS YOU WANT TO ADD--- ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
    {
        printf("STUDENT NAME ---- ");
        gets(s[count].name);
        printf("COURSE ---- ");
        gets(s[count].course);
        printf("STUDENT UID ---- ");
        gets(s[count].uid);
        count++;
    }
}


void addstudent()
{

    printf("STUDENT NAME ---- ");
    gets(s[count].name);
    printf("COURSE ---- ");
    gets(s[count].course);
    printf("STUDENT UID ---- \n");
    gets(s[count].uid);
    count++;
}
void searchstudent()
{
    int i;char searchuid[50];int cmp1;
    printf("ENTER THE UID OF STUDENT YOU WANT TO SEARCH----\n");
    gets(searchuid);
    for(i=0;i<count;i++)
    {

       cmp1=strcmp(s[i].uid,searchuid);
        if(cmp1==0)
        {
            printf("details found\n");

        }else
           {
           printf("details not found on %d memory \n",i);
       }


    }

}
void studentdetail()
{
   char a[50];int i;int l;
   printf("ENTER THE STUDENT UID ---\n");
   gets(a);
   for(i=0;i<count;i++)
   {
      l= strcmp(a,s[i].uid);
      if(l==0)
   {
       printf("NAME---%s\n",s[i].name);
       printf("UID---%s\n",s[i].uid);
       printf("COURSE---%s\n",s[i].course);


   }
   else
    printf("NOT FOUND\n");
   }

   }
int main()
{int a;
menu:
printf("1---ADD STUDENT-----\n");
printf("2---SEARCH STUDENT------\n");
printf("3---STUDENTS DETAILS------\n");
printf("4---STUDENT GROUP ADD-----\n");
printf("5---EXIT-----\n");

scanf("%d",&a);
getchar();
  switch (a)
  {
  case 1:addstudent();
  goto menu;
  case 2:searchstudent();
  goto menu;
  case 3:studentdetail();
 goto menu;
  case 4: add();
  goto menu;
  case 5:exit(0);
 }
}
