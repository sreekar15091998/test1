#include <stdio.h>
void add(); //declaration of function
int main()
{
	add();         	//calling the function
	return 0;     
}
  
 void add()
{
	int a =200,b=520,res;
	res =a+b;
	printf("\nthe Addition of two number result%d",res);
	
}
