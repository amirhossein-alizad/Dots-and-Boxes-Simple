#include "points1.h"/*this function checks if there was any changes made to points1 and returns it(it checks if playerA created any boxes and gives him a point)*/
int point1(int coordinate1, int coordinate2, int coordinate3, int turn, int points1, char horizental[6][6], char vertical[6][6])
{
	if (coordinate1 == 0)/*if the last input was horizental*/
	{
		if (horizental[coordinate2][coordinate3 - 1] == '-' && vertical[coordinate2 - 1][coordinate3 - 1] == '|' && vertical[coordinate2 - 1][coordinate3] == '|')/*this line checks if the horizental line and 2 vertical lines 'above' the input were entered then it is a box*/
		{
			if (turn % 2 == 0)
			{
				points1++;
			}
		}
		if (horizental[coordinate2 - 2][coordinate3 - 1] == '-' && vertical[coordinate2 - 2][coordinate3 - 1] == '|' && vertical[coordinate2 - 2][coordinate3] == '|')/*this line checks if the horizental line and 2 vertical lines 'below' the input were entered then it is a box*/
		{
			if (turn % 2 == 0)
			{
				points1++;
			}
		}
	}
	if (coordinate1 == 1)/*if the last input was vertical*/
	{
		if (vertical[coordinate2 - 1][coordinate3] == '|' && horizental[coordinate2 - 1][coordinate3 - 1] == '-' && horizental[coordinate2][coordinate3 - 1] == '-')/*this line checks if the vertical line and 2 horizental lines 'left' of the input were entered then it is a box*/
		{
			if (turn % 2 == 0)
			{
				points1++;
			}
		}
		if (vertical[coordinate2 - 1][coordinate3 - 2] == '|' && horizental[coordinate2 - 1][coordinate3 - 2] == '-' && horizental[coordinate2][coordinate3 - 2] == '-')/*this line checks if the vertical line and 2 horizental lines 'right' of the input were entered then it is a box*/
		{
			if (turn % 2 == 0)
			{
				points1++;
			}
		}
	}
	return points1;/*calculates the changes made to points1 and returns it*/
}