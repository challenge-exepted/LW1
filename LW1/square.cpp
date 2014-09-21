#include "stdafx.h"
#include "square.h"
#include <math.h>
#include <iomanip>

Square::Square(int length)
{
	x4=0;
	y4=0;

	x1=0;
	y1=length;

	x2=length;
	y2=length;

	x3=length;
	y3=0;
}
Square::~Square()
{
}
Square::Square()
{
	bool correct = false;
	while (!correct)
	{
		cout<<"1th x and y:"<<endl<<"x:";
		cin>>x1;
		cout<<"y:";
		cin>>y1;

		cout<<"2th x and y"<<endl;
		cout<<"x:";
		cin>>x2;
		cout<<"y:";
		cin>>y2;

		cout<<"3th x and y"<<endl;
		cout<<"x:";
		cin>>x3;
		cout<<"y:";
		cin>>y3;

		cout<<"4th x and y"<<endl;
		cout<<"x:";
		cin>>x4;
		cout<<"y:";
		cin>>y4;

		if(y1==y2 && y3==y4 && x1==x4 && x2==x3 && GetLength(x1,y1,x2,y2)==GetLength(x2,y2,x3,y3))
			correct = true;
		
		if (!correct)
		{
			cout<<"Error!"<<endl;
		}
	}
}

double Square::GetPerimetr()
{
	return GetLength(x1,y1,x2,y2)*4;
}
double Square::GetSquare()
{
	return pow(GetLength(x1,y1,x2,y2),2);
}
ostream& operator<< (ostream& out, Square owner)
{
	out << setw(6) << "A(" << showpos << owner.x1 << "," << owner.y1 << ")" << endl;
	out << setw(6)<< "B(" << owner.x2 << "," << owner.y2 << ")" << endl;
	out << setw(6) << "C(" << owner.x3 << "," << owner.y3 << ")" << endl;
	out << setw(6) << "D(" << owner.x4 << "," << owner.y4 << ")" << endl;
	out << noshowpos << "Perimetr:" << owner.GetPerimetr() << endl;
	out << "Square:" << owner.GetSquare() << endl;
	return out;
}

double Square::GetLength(int X1, int Y1, int X2, int Y2)
{
	return sqrt(pow(X1-X2,2)+pow(Y2-Y1,2));
}

void Square::Show()
{
	cout<<*this;
}