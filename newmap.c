#include"newmap.h"
/*this map show the lines which users enter(vertical or horizental)*/
void newmap(char horizental[6][6], char vertical[6][6], char names[6][6])
{

	int counter1, counter2, counter3;

	for (counter1 = 0;counter1 < 6;counter1++)
	{
		for (counter2 = 0; counter2 < 5; counter2++)
		{
			printf("* %c%c ", horizental[counter1][counter2], horizental[counter1][counter2]);/* %c for '--' if user enters coordinate2 and coordinate3  (if coordinate1 = 0) and horizental[coordinate2-1][coordinate3-1] will show on the map as '--'*/

		}
		printf("*");

		printf("\n");
		for (counter3 = 0;counter3 <6;counter3++)
		{
			printf("%c %c  ", vertical[counter1][counter3], names[counter1][counter3]);/*(if i = 1) if user enters coordinate2 and coordinate3 vertical[coordinate2-1][coordinate3-1] will show on map as' | ' and if there is a square because of the second %c the name of the winner will show on map as'A' or 'B' and will be saved in 'names' array*/

		}

		printf("\n");

	}
}
