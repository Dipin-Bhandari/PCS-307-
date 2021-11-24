
#include <iostream>
#include <string>

using namespace std;

class student
{
private:
  string name;
  string address;
  int rollno;
  string phoneno;
public:
  void input ();
  void display ();
};

void student::input()
{
    cout << "Enter Name: ";
    cin>>name;
    cout << "Enter Roll Number: ";
    cin >> rollno;
    cout << "Enter Phone Number: ";
    cin >> phoneno;
    cout << "Enter Address:";
    cin>>address;
}

void student::display()
{
    cout << "\nName:";
    cout<<name;
    cout << "\nRoll Number: " << rollno;
    cout << "\nPhone Number: " << phoneno;
    cout << "\nAddress: ";
    cout<<address<<endl;
}

int main ()
{
  student s1;
  student s2;
  s1.input ();
  s2.input ();
  s1.display ();
  puts(" ");
  s2.display();
}