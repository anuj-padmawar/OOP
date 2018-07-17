//============================================================================
// Name        : OPP1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class complex
{

	int real;
	int img;
public:
	complex();
	complex(float ,float );
	complex operator +(complex);
	complex operator -(complex);
	complex operator *(complex);
    friend istream & operator >>(istream &,complex &);
    friend ostream & operator<<(ostream &,complex &);


};
complex::complex()
{
	real=0;
	img=0;
}
complex::complex(float a,float b)
{
	real=a;
	img=b;
}
complex complex::operator +(complex c)
{
	complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return temp;
}

complex complex::operator -(complex c)
{
	complex temp;
	temp.real=real-c.real;
	temp.img=img-c.img;
	return temp;
}
complex complex::operator *(complex c)
{
	complex temp;
	temp.real=real*c.real;
	temp.img=img*c.img;
	return temp;
}
istream & operator>>(istream& in,complex &c)
{

	cout<<"enter the real part";
	in>>c.real;
	cout<<"enter imaginary part";
	in>>c.img;
	return in;
}
ostream & operator<<(ostream & out,complex &c)
{
out<<c.real;
out<<"+i"<<c.img<<endl;
return out;
}
int main()
{

	complex c1,c2(2,3),c3(4,5),c4(6,7),c5,c6,c7;
cin>>c1;
cout<<"the complex object is";
cout<<c1;
c5=c1+c2;
cout<<c3;
c6=c2-c3;
cout<<c6;
c7=c3*c4;
cout<<c7;
	return 0;
}
