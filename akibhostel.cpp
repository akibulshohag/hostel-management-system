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
void view();
void Rules();
void Rooms();
void Fee1();
void Fee2();
void search();
int Exit();
void del();
void add();
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
        cin>>ch;

        if(ch=='y')
            menu();
        else
          exit(1);

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



void menu()
{ int ch;
  system("cls");
gotoxy(45,8);
    cout<<"============================"<<endl;
    gotoxy(45,9);
    cout<<"!!!Welcome to My Hostel!!!"<<endl;
    gotoxy(45,10);
    cout<<"============================"<<endl;
    gotoxy(35,12);
    cout<<"1-Registration"<<endl;
    gotoxy(35,13);
    cout<<"2-Search Records"<<endl;
    gotoxy(35,14);
    cout<<"3-Rooms and Fee structure"<<endl;
    gotoxy(35,15);
    cout<<"4-Rules and regulation"<<endl;
    gotoxy(35,16);
    cout<<"5-Remove Students"<<endl;
    gotoxy(35,17);
    cout<<"6-Exit"<<endl;
    gotoxy(35,19);
    cout<<"Enter your choice.....";
    gotoxy(60,19);
    cin>>ch;

    switch(ch)
    { case 1:
        add();
        getch();
        menu();
        break;
      case 2:
        search();
        getch();
        menu();
        break;
      case 3:
        Rooms();
        getch();
        menu();
        break;
      case 4:
        Rules();
        menu();
        break;
      case 5:
        del();
        getch();
        menu();
        break;
      case 6:
        Exit();
        break;
    }
}
void Rules()
{
    system("cls");
    gotoxy(45,8);
    cout<<"============================"<<endl;
    gotoxy(45,9);
    cout<<"***Rules And Regulations***"<<endl;
    gotoxy(45,10);
    cout<<"============================"<<endl;
    gotoxy(35,12);
    cout<<"1:------NO smoking-------|"<<endl;
    gotoxy(35,13);
    cout<<"2:------No Ragging-------|"<<endl;
    gotoxy(35,14);
    cout<<"3:------Discipline-------|"<<endl;
    gotoxy(35,15);
    cout<<"4:------Beware of all notice-------|"<<endl;
    gotoxy(35,16);
    cout<<"5:------No interchange rooms without permissions-------|"<<endl;
    gotoxy(35,19);
    cout<<"Press 'm' to go to main menu...    ";
    char ch;
    cin>>ch;
    if(ch=='m') menu();
    else Exit();

}
int Exit()
{
    system("cls");
    gotoxy(45,15);
    cout<<"Thanks for your valuable time!! "<<endl;
    getch();
    return 0;
}

void Rooms()
{
    system("cls");
    gotoxy(45,8);
    cout<<"============================"<<endl;
    gotoxy(45,9);
    cout<<"    !!!Rooms of Hostel!!!"<<endl;
    gotoxy(45,10);
    cout<<"============================"<<endl;
    gotoxy(35,12);
    cout<<"1...Standard Rooms..."<<endl;
    gotoxy(35,13);
    cout<<"2...Luxury Apartment..."<<endl;

    gotoxy(35,15);
    cout<<"Press '0' to go to main menu..."<<endl;



    int choic;
    gotoxy(35,17);
    cout<<"Enter Your Choice...";
    gotoxy(57,17);
    cin>>choic;




switch(choic)
    {
    case 0:
        menu();
        break;

    case 1:
        Fee1();
        break;
    case 2:
        Fee2();
        break;
    default:
      //  cout<<"plz enter valid information!!!<<endl;
        break;
    }



}
void Fee1()
{
    system("cls");
    gotoxy(45,6);
    cout<<"====================================="<<endl;
    gotoxy(45,7);
    cout<<"*****Standard Rooms for Students*****"<<endl;
    gotoxy(50,9);
    cout<<"##Fee Structure In BD##"<<endl;
    gotoxy(50,10);
    cout<<"-----------------------"<<endl;
    gotoxy(45,12);
    cout<<"====================================="<<endl;
    gotoxy(35,14);
    cout<<"a:-||---Room Category---:---Air Cooler---Air Conditioned---||"<<endl;
    gotoxy(35,15);
    cout<<"b:-||---3 Seater--------:-----BD 1500-------BD 2000--------||"<<endl;
    gotoxy(35,16);
    cout<<"c:-||---2 Seater--------:-----BD 1700-------BD 2200--------||"<<endl;
    gotoxy(35,17);
    cout<<"d:-||---1 Seater--------:-----BD 1900-------BD 2400--------||"<<endl;
    gotoxy(35,19);
    cout<<"e:-||---Food Facility---:-----BD 1500---||"<<endl;
    gotoxy(35,20);
    cout<<"f:-||---Laundry Charges---:---BD 100---||"<<endl;
    gotoxy(35,22);
    cout<<"Press 'R' to go to Rooms...    ";
    char ch;
    cin>>ch;
    if(ch=='r' || ch=='R') Rooms();
    else Exit();


}
void Fee2()
{
    system("cls");
    gotoxy(45,6);
    cout<<"====================================="<<endl;
    gotoxy(45,7);
    cout<<"*****Luxury Rooms for Students*****"<<endl;
    gotoxy(50,9);
    cout<<"##Fee Structure In BD##"<<endl;
    gotoxy(50,10);
    cout<<"-----------------------"<<endl;
    gotoxy(45,12);
    cout<<"====================================="<<endl;
    gotoxy(35,14);
    cout<<"a:-||---Room Category---:---Air Cooler---Air Conditioned---||"<<endl;
    gotoxy(35,15);
    cout<<"b:-||---3 Seater--------:-----BD 2000-------BD 2500--------||"<<endl;
    gotoxy(35,16);
    cout<<"c:-||---2 Seater--------:-----BD 2300-------BD 2800--------||"<<endl;
    gotoxy(35,17);
    cout<<"d:-||---1 Seater--------:-----BD 3000-------BD 3500--------||"<<endl;
    gotoxy(35,19);
    cout<<"e:-||---Food Facility---:-----BD 1200---||"<<endl;
    gotoxy(35,20);
    cout<<"f:-||---Laundry Charges---:---BD 300---||"<<endl;
    gotoxy(35,22);
    cout<<"Press 'R' to go to Rooms...    ";
    char ch;
    cin>>ch;
    if(ch=='r' || ch=='R') Rooms();
    else Exit();


}
void search()
{
    int i,regno;
    char ch;
    system("cls");
    gotoxy(45,7);
    cout<<"======================="<<endl;
    gotoxy(45,8);
    cout<<"!!!Search Option!!!"<<endl;
    gotoxy(45,9);
    cout<<"======================="<<endl;
    gotoxy(40,11);
    cout<<"Enter The Registration Number...";
    gotoxy(75,11);
    cin>>regno;
    for(i=0;i<100;i++)
        if(regno==s[i].registrationno)
            {
                gotoxy(30,13);
                cout<<"!!!!!!!!RECORD FOUND!!!!!!!!!";
                gotoxy(30,15);
                cout<<"NAME :";
                gotoxy(45,15);
                cout<<s[i].name;
                fflush(stdin);

                gotoxy(30,16);
                cout<<"BLOOD GROUP:";
                gotoxy(45,16);
                cout<<s[i].bloodgroup;
                fflush(stdin);

                gotoxy(30,17);
                cout<<"FATHER NAME :";
                gotoxy(45,17);
                cout<<s[i].fathername;
                fflush(stdin);

                gotoxy(30,18);
                cout<<"ADDRESS:";
                gotoxy(45,18);
                cout<<s[i].address;
                fflush(stdin);

                gotoxy(30,19);
              cout<<"Room NO:";
              gotoxy(45,19);
              cout<<s[i].roomno;
              fflush(stdin);
                i=100;
            }
        else
            {
                gotoxy(40,13);
                cout<<"Registration Number is not Matched";
                getch();
                menu();
            }

}


void add()
{
    char ch;
    int i;
    system("cls");
    gotoxy(45,7);
    cout<<"=============================="<<endl;
    gotoxy(45,8);
    cout<<"!!!Enter Your Information!!!"<<endl;
    gotoxy(45,9);
    cout<<"=============================="<<endl;
    gotoxy(40,11);
    cout<<"How much record you want to Enter...";
    int x;
    cin>>x;
    for( i=0;i<x;i++)
        {

              gotoxy(25,13);
              cout<<"Enter  name:";
              gotoxy(55,13);
              cin>>s[i].name;
              fflush(stdin);
              gotoxy(25,14);
              cout<<"Enter  father's name:";
              gotoxy(55,14);
              cin>>s[i].fathername;
              fflush(stdin);
              gotoxy(25,15);
              cout<<"Enter the sex:";
              gotoxy(55,15);
              cin>>s[i].sex;
              fflush(stdin);
              gotoxy(25,16);
              cout<<"Enter the phone number:";
              gotoxy(55,16);
              cin>>s[i].phno;
              fflush(stdin);
              gotoxy(25,17);
              cout<<"Enter the address:";
              gotoxy(55,17);
              cin>>s[i].address;
              fflush(stdin);
              gotoxy(25,18);
              cout<<"Enter the blood group:";
              gotoxy(55,18);
              cin>>s[i].bloodgroup;
              fflush(stdin);
              gotoxy(25,19);
              cout<<"Room NO:";
              gotoxy(55,19);
              cin>>s[i].roomno;
              fflush(stdin);
              gotoxy(25,20);
              cout<<"Enter the registration no:";
              gotoxy(55,20);
              cin>>s[i].registrationno;
              fflush(stdin);
              gotoxy(25,22);
              cout<<"Do you want to add more record (y/n)...";
              gotoxy(70,22);
              cin>>ch;
              if(ch!='y')
                break;
        }
}

void del()
{
    int i, regno;
    char ch;
    system("cls");
    gotoxy(45,7);
    cout<<"========================"<<endl;
    gotoxy(45,8);
    cout<<"!!!Remove Option!!!"<<endl;
    gotoxy(45,9);
    cout<<"========================"<<endl;
    gotoxy(40,12);
    cout<<"Enter the Registration Number...";
    gotoxy(75,12);
    cin>>regno;
    for (i=0;i<100;i++)
        if(regno==s[i].registrationno)
            {
                gotoxy(40,14);
                cout<<"Are you sure you want to delete this record(y or n)...";
                gotoxy(100,14);
                cin>>ch;
                if(ch=='y')
                gotoxy(40,16);
                cout<<"your record  is deleted";
                getch();
                menu();
            }
    else
        {
            gotoxy(40,14);
            cout<<"!!!Registration is not matched!!!"<<endl;
            getch();
            menu();
        }
}

int main()
{
//logo();
system("color 4b");
logo();
login();
}
