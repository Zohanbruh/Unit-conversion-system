#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int currency()
{
float dollar, inr, rupees, aed;
int ch;
ab1 :
	system("cls");
printf("\n\n Currency converter");
printf("\n\n 1.Rupees to Dollar");
printf("\n\n 2.Dollar to Rupees");
printf("\n\n 3.Rupees to AED");
printf("\n\n 4.AED to Rupees");
printf("\n\n 5.Exit");
printf("\n\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
	case 1:printf("\n\nEnter the currency in Rupees: ");
	scanf("%f",&rupees);
	dollar= rupees/79;
	printf("\n\nThe currency in dollar is= %.2f$",dollar);
	break;
	case 2:printf("\n\nEnter the currency in dollar");
	scanf("%f",&rupees);
	inr= rupees*79;
	printf("\n\nThe currency in rupees is = %.2f",inr);
	break;
	case 3:printf("\n\nEnter the currency in rupees:");
	scanf("%f",&rupees);
	aed=rupees/0.046;
	printf("\n\nThe currency in aed is= %.2f",aed);
	break;
	case 4:printf("\n\nEnter the currency in aed:");
	scanf("%f",&aed);
	rupees = aed * 0.046;
	printf("\n\nTHe currency in rupees is = %.2f",rupees);
	break;
	case 5:
	return 0;
	default :
		printf("wrong choice...");
	}
	getch();
	goto ab1;
}



int b2h()
{
long int binaryval,hexadecimalval=0,i=1,remainder;
printf("Enter the binary number:");
scanf("%d",&binaryval);
while(binaryval!=0)
{
remainder = binaryval%10;
hexadecimalval= hexadecimalval+remainder*i;
i=i*2;
binaryval= binaryval/10;
}
printf("Equivalent hexadecimal value:%lx",hexadecimalval);
return 0;
}

int h2b()
{
char hexNum[100];
long int count= 0;
printf("Enter a hexadecimal number to convert into binary:");
scanf("%s",hexNum);
printf("\nBinary Number is:");
while(hexNum[count])
{
switch(hexNum[count])
{
case '0': printf("0000");
break;
case '1': printf("0001");
break;
case '2': printf("0010");
break;
case '3': printf("0011");
break;
case '4': printf("0100");
break;
case '5': printf("0101");
break;
case '6': printf("0110");
break;
case '7': printf("0111");
break;
case '8': printf("1000");
break;
case '9': printf("1001");
break;
case 'A': printf("1010");
break;
case 'B': printf("1011");
break;
case 'C': printf("1100");
break;
case 'D': printf("1101");
break;
case 'E': printf("1110");
break;
case 'F': printf("1111");
break;
case 'a': printf("1010");
break;
case 'b': printf("1011");
break;
case 'c': printf("1100");
break;
case 'd': printf("1101");
break;
case 'e': printf("1110");
break;
case 'f': printf("1111");
break;
default: printf("\n Invalid entry %c",hexNum[count]);
}
count++;
}
return 0;
}

int d2b()
{
int a[10],n,i;
printf("Enter the number to convert:");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i] = n%2;
n = n/2;
}
printf("\n Binary of given number is:");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}

void b2d()
{
int num=0, binary_num, decimal_num, base=1, rem;
printf("Enter a binary number with the combination of 0 and 1\n");
scanf("%d",&num);
binary_num = num;
while(num>0)
{
rem = num%10;
decimal_num = decimal_num+ rem* base;
num = num/10;
base = base*2;
}
printf("The binary number is %d\t",binary_num);
printf("\nThe decimal number is %d\t", decimal_num);
getch();
}
void call1()
{
int input;
ab2 :
	system("cls");
printf("Press 1 for binary to hexadecimal number conversion");
printf("\nPress 2 for hexadecimal to binary number conversion");
printf("\nPress 3 for decimal to binary number conversion");
printf("\nPress 4 for binary to decimal number conversion");
printf("\nEnter your choice");
scanf("%d",&input);
switch(input)
{
case 1:
b2h();
break;
case 2:
h2b();
break;
case 3:
d2b();
break;
case 4:
b2d();
break;
default: printf("Invalid Input");
}
getch();
goto ab2;
}


int call()
{
	float fh,cl;
	int choice;
	ab3 :
		system("cls");
	printf("\n1: Convert temperature from Fahrenheit to Celsius");
	printf("\n2: Convert temperature from Celsius to Fahrenheit");
	printf("\n3: Press 3 to go back");
	printf("\nEnter your choice(1, 2, 3):");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1 :
	printf("\nEnter temperature in Fahrenheit:");
	scanf("%f",&fh);
	cl=(fh - 32)/1.8;
	printf("Temperature in Celsius: %.2f",cl);
	break;

	case 2 :
	printf("\nEnter temperature in Celsius:");
	scanf("%f",&cl);
	fh= (cl*1.8)+32;
	printf("Temperature in Fahrenheit: %.2f",fh);
	break;
	
	case 3:
		return 0;
	default :
	printf("\nInvalid Choice!");
	}
	printf("\nPress any key to continue...");
	getch();
	goto ab3;
	
	}
int main()	
{
int input;
ab :
	system("cls");
printf("\nPress 1 for Temperature unit  conversion");
printf("\nPress 2 for Currency conversion");
printf("\nPress 3 for Number conversion");
printf("\nPress 4 to exit");
printf("\nEnter your choice = ");
scanf("%d",&input);
switch(input)
{
case 1:
 call();
break;
case 2:
 currency();
break;
case 3:
 call1();
case 4:
	return 0;
break;
default: 
printf("Invalid Input");
}
goto ab;
}

