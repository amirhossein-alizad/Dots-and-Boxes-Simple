#include "winner.h"
/*when the game has ended this function will check who has more points and will announce that player as the winner*/
void winner(int points1, int points2)
{
	printf("\n\nplayer A:%d\tplayer B:%d\n", points1, points2);

	if (points1 > points2)
	{
		printf("*** player A wins***\n");
	}

	if (points1 < points2)
	{
		printf("*** player B wins***\n");
	}

}
