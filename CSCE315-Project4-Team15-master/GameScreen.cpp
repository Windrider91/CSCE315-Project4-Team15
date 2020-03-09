#include "Simple_window.h"
#include "Graph.h"

/*
void DrawGrids
{
	//Top-left coordinates of first grid
	int x = 210;
	int y = 60;
		for(int i = 0; i < 4; i++)
		{
			//Draw 3 horizontal lines and 3 vertical lines
			for(int j = 1; j <= 3; j++)
			{
				//draw horizontal line from (x, y + j*20) to (x + 80, y + j*20)
				//draw vertical line from (x + j*20, y) to (x + j*20, y + 80)
			}
			y += 100
		}
	print "TOP" at (210, 40)
	print "BOTTOM" at (210, 440)
}
*/

/*
void ComputerMove(x, y)
{
	remove button at (x,y)
	if (player == X)
		print 'O' at (x,y)
	else
		print 'X' at (x,y)
}

void ButtonClick()
{
	Remove button
	if (player == X)
		print 'X' at (x,y)
	else
		print 'O' at (x,y)
}
*/

int main()
{
	using namespace Graph_lib;
	
	Simple_window win(Point(100,100), 500, 500,"Game Screen");
	
	
	win.wait_for_button();
}