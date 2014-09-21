#include <math.h>
#include <iostream>

using namespace std;

class Square
{
	private:
		int x1, x2, x3, x4, y1, y2, y3, y4;
		double length;
	public:
		Square();
		Square(int);
		~Square();
		double GetSquare();
		double GetPerimetr();
		double GetLength(int,int,int,int);
		void Show();
		friend ostream& operator<<(ostream&, Square);
};

