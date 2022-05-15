#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class university
{
protected:
  char name[50];
  char loc[50];
public:
    university (char *a, char *b)
  {
    strcpy (name, a);
    strcpy (loc, b);

  }
  void display ()
  {
    cout << "Name is:" << name << endl;
    cout << "Location is:" << loc << endl;

  }
};

class ac:public virtual university
{
protected:
  char Name[50];
public:
    ac (char *a, char *b, char *N):university (a, b)
  {
    strcpy (Name, N);
  }
  void display ()
  {
    cout << "The Affilated college is:" << Name << endl;
  }
};

class cc:public virtual university
{
protected:
  char bname[50];
public:
    cc (char *a, char *b, char *M):university (a, b)
  {
    strcpy (bname, M);
  }
  void display ()
  {
    cout << "The constituent college is:" << bname << endl;
  }
};

class student:public ac, public cc
{
  char sname[20], faculty[50];
public:
    student (char *a, char *b, char *N, char *M, char *d,
	     char *e):university (a, b), ac (a, b, N), cc (a, b, M)
  {
    strcpy (sname, d);
    strcpy (faculty, e);
  }
  void display ()
  {
    cout << "Name is:" << sname << endl;
    cout << "Faculty is:" << faculty << endl;

  }
};

int
main ()
{
  student s ("pokhara", "kaski", "Ncit", "ABC", "Nischal", "Beit");
  s.university::display ();
  s.ac::display ();
  s.cc::display ();
  s.display ();
  getch ();
}
