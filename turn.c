#include "turn.h"
/*tells us whose turn it is now and who should enter the coordinates*/
void turns(int turn)
{
	if (turn % 2 == 0)
		printf("playerA's turn:\n");
	else
		printf("playerB's turn:\n");

}
