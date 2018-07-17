//============================================================================
// Name        : OPP6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include<iostream>
using namespace std;
class student
{
string name,bg,address,cls,div,date_of_birth;

int rollno,contact,dl;
public:
student();
student(string,string,string,string,string,string,int,int,int);
student(student & x);
~student();
void input();
void display();
};

static int count=0;


student :: student()
{
name="\0";
bg="\0";
address="\0";
cls="\0";
div="\0";
date_of_birth="\0";
rollno=0;
contact=0;
dl=0;
count++;
cout<<"\n"<<"count is  "<<count;
}

void student :: input()
{
cout<<"enter name";
cin>>name;
cout<<"enter bg";
cin>>bg;
cout<<"enter address";
cin>>address;
cout<<"enter cls";
cin>>cls;
cout<<"enter div";
cin>>div;
cout<<"date_of_birth";
cin>>date_of_birth;
cout<<"rollno";
cin>>rollno;
cout<<"contact";
cin>>contact;
cout<<"dl";
cin>>dl;
}



student :: student(string a,string b,string c,string d,string e,string f,int g,int h,int i)
{
name=a;
bg=b;
address=c;
cls=d;
div=e;
date_of_birth=f;
rollno=g;
contact=h;
dl=i;
count++;
cout<<"count is  "<<count;
}


student :: student(student & x)
{
name=x.name;
bg=x.bg;
address=x.address;
cls=x.cls;
div=x.div;
date_of_birth=x.date_of_birth;
rollno=x.rollno;
contact=x.contact;
dl=x.dl;
count++;
cout<<"count is  "<<count;
}

student :: ~student()
{
cout<<"\n"<<"every thing is destructed";
count--;
cout<<"\n"<<"count is  "<<count;
}



void student :: display()
{
cout<<"\n"<<name<<"\n"<<bg<<"\n"<<address<<"\n"<<cls<<"\n"<<div<<"\n"<<date_of_birth<<"\n"<<rollno<<"\n"<<contact<<"\n"<<dl;
}


int main()
{
student S1;
S1.input();
S1.display();
student S2("shruti","o+","good soc","SE","A","30 may 1999",12,32234,54535);
S2.display();
student S3(S1);
S3.display();
return 0;
}
