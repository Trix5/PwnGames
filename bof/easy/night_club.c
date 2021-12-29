#include <stdio.h>
#include <string.h>



void call_flag(void)
{
	printf("Congs you tricked security and came into the night club :)\n");
}

int main(void)
{
	char buffer[24];

	printf("Give us your invite code in order to join the party:");
	
	gets(buffer);

	printf("\nNope you got kicked out :(\n");


	return 0;
}
