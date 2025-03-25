#include <stdio.h>

typedef struct {
char name[20] ;
double age;
char owner [20];
} dog;

int main () 
{
	dog myDog = {"Poppy", 3.5, "Bob"};
	printf("My name is %s, and I am %f\n", myDog.name, myDog.age);
	return (0);
}
	

