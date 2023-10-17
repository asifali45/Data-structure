#include<stdio.h>
#include<conio.h>
void input();
void output();
void setunion();
void intersection();
void difference();
int a[]={0,0,0,0,0,0,0,0,0};
    b[]={0,0,0,0,0,0,0,0,0};
    c[]={0,0,0,0,0,0,0,0,0};
void main()
{
 int ch,wish;
 clrscr();
 do
 {

 printf("\n MENU\n");
 printf("\n1.Input\n2.Union\n3.intersection\n4.difference\n");
 printf("\n enter your choice");
 scanf("%d",&ch);
switch(ch)
{
 case 1:input();
	break;
 case 2:setunion();
	break;
 case 3:intersection();
	break;
 case 4:difference();
	break;
 default:printf("wrong choice");
 }
printf("\n Do you wish to continue?(1/0)\n");
scanf("%d",&wish);
}
while(wish==1);
getch();
}
void input()
{
 int n,ele,i;
 printf("enter the size of first set:");
 scanf("%d",&n);
 printf("\n enter the elements:\n");
for(i=1;i<=n;i++)
{
 scanf("%d",&ele);
 a[ele]=1;
}
printf("enter the size of second set:");
scanf("%d",&n);
printf("\n enter the elements:\n");
for(i=1;i<=n;i++)
{
	scanf("%d",&ele);
	b[ele]=1;
}
printf("\n the first set:");
for(i=1;i<=9;i++)
{
	printf("%d",a[i]);
}
printf("\n the second set:");
for(i=1;i<=9;i++)
{
	printf("%d",b[i]);
}
}
void output(int c[])
{
	int i;
	printf("\n set is :");
	for(i=1;i<=9;i++)
	{
		if(c[i]!=0)
		printf("%d\t",i);
	}
}
void setunion()
{
	int i,c[10];
	for(i=1;i<=9;i++)
	{
		if(a[i]!=b[i])
		c[i]=1;
	else
		c[i]=a[i];
	}
	for(i=1;i<=9;i++)
	{
		printf("%d",c[i]);
	}
	output(c);
}
void intersection()
{
	int i,c[10];
	for(i=1;i<=9;i++)
	{
		if(a[i]==b[i])
		c[i]=a[i];
	else
		c[i]=0;
	}
	for(i=1;i<=9;i++)
	{
		printf("%d",c[i]);
	}
	output(c);
}
void difference()
{
	int i,c[10];
	for(i=1;i<=9;i++)
	{
		if(a[i]==1&&b[i]==0)
		c[i]=1;
	else
		c[i]=0;
	}
	for(i=1;i<=9;i++)
	{
		printf("%d",c[i]);
	}
	output(c);
}
