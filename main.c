#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "newmap.h"
#include "shapes.h"
#include "turn.h"
#include "winner.h"
#include "names.h"
#include "points1.h"
#include "points2.h"
#include "newturn.h"
/*dots-and-boxes*/

int  coordinate1, coordinate2, coordinate3, points1 = 0, points2 = 0, turn = 0;

char horizental[6][6] = { "" }, vertical[6][6] = { "" }, names[6][6] = { "" };/*2 dimensional arrays for lines and names between boxes*/

int main()
{/*start*/

	map();/*map function executes*/

	while (points1 + points2 != 25)/*loops untill all boxes are taken(points1 + points2 = 25)*/
	{
		turns(turn);/*turns function executes*/

		printf("enter coordinates\n");
		scanf("%d %d %d", &coordinate1, &coordinate2, &coordinate3);/*user enters coordinates*/

		if (coordinate1 > 1 || (coordinate2 < 1 || coordinate2>6) || (coordinate3 < 1 || coordinate3>6) || (coordinate1 == 0 && coordinate3 > 5))
		{
			printf("\n***please enter correct coordinates***\n\n");
			continue;
		}/*by these conditions tells the user that the coordinates are wrong*/

		if ((horizental[coordinate2 - 1][coordinate3 - 1] == '-'&&coordinate1 == 0) || (vertical[coordinate2 - 1][coordinate3 - 1] == '|' && coordinate1 == 1) || (coordinate1 == 0 && coordinate3 > 5))
		{
			printf("\n***entered before!try again!***\n");
			continue;
		}/*tells the user that thecoordinates were entered before*/

		shapes(coordinate1, coordinate2, coordinate3, horizental, vertical);
		
		name(coordinate1, coordinate2, coordinate3, turn, vertical, horizental, names);
		
		points1 = point1(coordinate1, coordinate2, coordinate3, turn, points1, horizental, vertical);
		
		points2 = point2(coordinate1, coordinate2, coordinate3, turn, points2, horizental, vertical);
		
		turn = newturn(coordinate1, coordinate2, coordinate3, turn, horizental, vertical);
		
		newmap(horizental, vertical, names);

		printf("\nplayerA's points:%d      playerB's points:%d\n\n", points1, points2);/*prints each player's points at the end of each loop*/
		turn++;

	}/*end of while loop*/

	winner(points1, points2);
	return 0;
}


