#include <bits/stdc++.h>
#include<conio.h>
#include<windows.h>

using namespace std;
void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
struct hos
{ char name[20];
  int phno;
  int roomno;
  char address[50];
  char fathername[50];
  char sex[20];
  char bloodgroup[5];
  int registrationno;
  }s[100];

void menu();
void logo();
int Exit();
void login();

void login()
{
    system("cls");
    gotoxy(25,22);
    cout<<"====================================================="<<endl;
    gotoxy(25,5);
    cout<<"===================================================="<<endl;
    gotoxy(45,8);
    cout<<"==================="<<endl;
    gotoxy(45,9);
    cout<<"Admin Login Section "<<endl;
    gotoxy(45,10);
    cout<<"==================="<<endl;
    string name;
    gotoxy(35,12);
    cout<<"1- User Name: "<<endl;
    gotoxy(48,12);
    cin>>name;
    again:  ///re verification
    int pass;
    gotoxy(35,13);
    cout<<"2- Password: "<<endl;
    gotoxy(47,13);
    cin>>pass;
    if(pass==1)
    {
        gotoxy(35,15);
        cout<<"***Project is developed by Akibul Islam***"<<endl;
        char ch;
        gotoxy(35,16);
        cout<<"Do You Want to Continue??? (y or n)... "<<endl;
        gotoxy(75,16);


    }
    else
    {
        system("color 4");
        gotoxy(35,15);
        cout<<"Wrong Password! Enter Correct Password."<<endl;
        goto again;
    }



}

void logo()
{   cout<<"\n                            ****IUBAT UNIVERSITY*****   ";
   cout<<"\n                                  _____________            ";
    cout<<"\n                                 |____     ____|              ";
    cout<<"\n             !---------------!        |   |      !----------------!";
    cout<<"\n             !-----!  !------!        |   |      !------!  !------!";
    cout<<"\n                   !  !         ______|   |_____        !  !       ";
    cout<<"\n                   !  !        |________________|       !  !       ";
    cout<<"\n                   !  !               |   |             !  !       ";
    cout<<"\n                   !  !               |   |             !  !       ";
    cout<<"\n                   !  !         B     |   |     A       !  !       ";
    cout<<"\n                   !  !               |   |             !  !       ";
    cout<<"\n                   !  !             __|   |__           !  !       ";
    cout<<"\n                   !  !            |_________|          !  !       ";
    cout<<"\n                   !  !               |   |             !  !       ";
    cout<<"\n                   !  !_______________|   |_____________!  !       ";
    cout<<"\n                   !__________________|   |________________!       ";
    cout<<"\n                                  ____|   |____                  ";
    cout<<"\n                                 |_____________|                 ";
    cin.get();
}


int main()
{
//logo();
system("color 4b");
logo();
login();
}
