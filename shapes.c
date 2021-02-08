#include "shapes.h"
/*this function lets us save the horizental or vertical lines in arrays*/
void shapes(int coordinate1, int coordinate2, int coordinate3, char horizental[6][6], char vertical[6][6])
{
	if (coordinate1 == 0)/*if coordinate1 was 0 and other coordinates were entered correct the entered input will change to '-'*/
	{
		horizental[coordinate2 - 1][coordinate3 - 1] = '-';
	}
	if (coordinate1 == 1)/*if coordinate1 was 1 and other coordinates were entered correct the entered input will change to '|'*/
	{
		vertical[coordinate2 - 1][coordinate3 - 1] = '|';
	}
}