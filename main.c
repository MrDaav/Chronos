#include <stdio.h>

void show_menu(void)
{
	printf("=== Chronos ===\n");
	printf("1. Start a session\n");
	printf("2. View time records\n");
	printf("3. Exit\n");
}

void start_session(void)
{

}
void display_records(void)
{
	
}
int main(void)
{
	int option;
	do
	{
		show_menu();
		printf("Choose an option: ");
		if (scanf("%d", &option) != 1)
		{
			printf("Please enter a valid number\n");
			return 1;
		}

		switch (option)
		{

		case 1:
			start_session();
			break;
		case 2:
			display_records();
			break;
		case 3:
			printf("Goodbye!\n");
			break;
		default:
			printf("You don't choose a valid option\n");
			break;
		}
	} while (option != 3);
	return 0;
}
