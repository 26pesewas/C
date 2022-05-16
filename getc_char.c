#include <stdio.h>

int main()
{
/*
 * @getc : takes input from user and stores in stdin
 * ch: a character variable
 * return: 0
*/
	int ch;

	printf("Please type in one character:\n");
	ch = getc(stdin);
    
	printf("The character you just entered is :%c\n", ch);

	return 0;
}

//using the getchar() function
int main(){
{
/*
 * @getc : takes input from user and stores in stdin
 * @getchar : takes input from user and stores in stdin
 * ch: a character variable
 * return: 0
*/

	int ch1, ch2;
	printf("Please type two characters:\n");

	ch1 = getc(stdin);
	ch2 = getchar();

	printf("The first character you inputted was: %c\n", ch1);
	printf("the second character you inputted was: %c\n", ch2);

	return 0;
}

