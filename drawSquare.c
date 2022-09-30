#include <stdio.h>
//Exercise 1
int main() {
	/*variables needed for the program*/
	int square_dimensions = 5;
	int i;
	int j;
	/*for loop to re-iterate the same action over multiple lines*/
	for(i=0; i<square_dimensions;i++)
	{
		/*For loop to output the asterisks the same amount of times as the square_dimensions variable*/
		for(j=0;j<square_dimensions;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
