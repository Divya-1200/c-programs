//gcc -o my_program printf-demo.c
	// ./my_program

#include<stdio.h>
int main()
{
	static int arr[5],i;
	for(i=0;i<=5;i++)
	printf("%d",arr[i] = 1);
	return 0;
}
//111111


/*

-----------------------------------------------
#include<stdio.h>
int main()
{
	int i = 5, *ptr;
	ptr = &i;
    // printf("%d",ptr);
	*ptr = 0;
	printf("\n Number is %d",i);
	return 0;
}
//Number is 0

-----------------------------------------------
#include<stdio.h>
int main()
{
	int a = 5;
	printf("%dha"+2,a);
	return 0;
}
//ha
//+2 ll remove first two letters like % and d ,therefore ha ll be printed



-----------------------------------------------------

#include<stdio.h>
int main()
{
	int a = 5;
	printf("%d"+1,a);
	return 0;
}

//d
------------------------------------------------------
#include<stdio.h>
static struct student
{
	int a;
	int b;
}struct_var{2,3};
int main()
{
	printf("%d %d",struct_var.a,struct_var.b);
	return 0;
}
//2,3
-----------------------------------------------
#include<stdio.h>
int main()
{
	char *ptr = "Hello World";
	printf(ptr+2);
    printf(ptr);
	return 0;
}
//llo world

--------------------------------------
#include<stdio.h>
int main()
{
	printf("%d",printf("2braces.com"));
	return 0;
} 
// 2braces.com11

-----------------------------------

#include<stdio.h>
int main()
{
	int a = 3;
	printf("%d");
	return 0;
}
//op any garbage value
*/