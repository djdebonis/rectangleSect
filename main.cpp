#include "Point.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

bool isIntersect(Rectangle rec1, Rectangle rec2);

int main(){
    cout << "Welcome to the program. This program compares two" << endl;
    cout << "rectangles in a 2D plane and decides whether they" << endl;
    cout << "intersect. Simply input the X and Y coordinates of" << endl;
    cout << "the top-left point of each rectangle, as well as the" << endl;
    cout << "respective length and height." << endl;

    cout << endl;
    cout << endl;

    int x1, y1, height1, width1, x2, y2, height2, width2;

    cout << "Enter the x-coordinate of rectangle #1: ";
    cin >> x1;

    cout << "Enter the y-coordinate of rectangle #1: ";
    cin >> y1;

    cout << "Enter the height of rectangle #1: ";
    cin >> height1;

    cout << "Enter the width of rectangle #1: ";
    cin >> width1;

    cout << "Enter the x-coordinate of rectangle #2: ";
    cin >> x2;

    cout << "Enter the y-coordinate of rectangle #2: ";
    cin >> y2;

    cout << "Enter the height of rectangle #2: ";
    cin >> height2;

    cout << "Enter the width of rectangle #2: ";
    cin >> width2;

    Point pnt1(x1, y1);
    Point pnt2(x2, y2);

    Rectangle rec1(pnt1, height1, width1);
    Rectangle rec2(pnt2, height2, width2);

    bool doTheyIntersect;
    doTheyIntersect = isIntersect(rec1, rec2);

    cout << endl;
    cout << endl;

    cout << "************************************" << endl;
    cout << "Coordinates of rectangle 1:" << endl;
    vector<Point> rec1Points = rec1.getRectanglePoints();
    for(int i = 0; i < 4; i++){
        cout << rec1Points[i] << " ";
    }
    cout << endl;
    cout << "Height rectangle 1: " << height1 << endl;
    cout << "Width rectangle 1: " << width1 << endl;

    cout << endl;

    cout << "Coordinates of rectangle 2:" << endl;
    vector<Point> rec2Points = rec2.getRectanglePoints();
    for(int i = 0; i < 4; i++){
        cout << rec2Points[i] << " ";
    }
    cout << endl;
    cout << "Height rectangle 2: " << height2 << endl;
    cout << "Width rectangle 2: " << width2 << endl;

    cout << endl;

    if (doTheyIntersect == true){
        cout << "These rectangles *do* intersect" << endl;
    }
    else {
        cout << "These rectangles *don't* intersect." << endl;
    }
    cout << "************************************" << endl;

    cout << endl;
    cout << endl;
    return 0;
}

bool isIntersect(Rectangle rec1, Rectangle rec2){
    /******
    * Gets the min and max coordinates of rectangle 1 (`rec1`)
    * and iterates through the points in rectangle 2 (`rec2`) to
    * see whether any of the points of `rec2` intersect with `rec1`
    ******/
	int yMin = rec1.getYMin();
	int yMax = rec1.getYMax();
	int xMin = rec1.getXMin();
	int xMax = rec1.getXMax();

	bool inX, inY, intersect= false;

	vector<Point> compareTangle = rec2.getRectanglePoints();

	for(int i = 0; i < 4; i++){
		Point tempPnt = compareTangle[i];
		int tempX = tempPnt.getX();
		int tempY = tempPnt.getY();

		if ((tempX <= xMax) && (tempX >= xMin)){
			inX = true;
		}
		else {
			inX = false;
		}

		if ((tempY <= yMax) && (tempY >= yMin)){
			inY = true;
		}
		else {
			inY = false;
		}

		if ((inX) && (inY)){
			intersect = true;
		}
	}

	return intersect;

}
