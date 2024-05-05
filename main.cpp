//NewChange
#include "Clinic Management System.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

string CenterText(int x, int y, string S)
{

    gotoxy(x / 2 - (S.size() / 2), y);

    return S;
}
//Display MainMenu Screen 
void MainMenu(int availableColumns, int Set[])
{
    cout << CenterText(availableColumns, 1, "#####################################") << endl;
    cout << CenterText(availableColumns, 2, "##    Clinic Management System     ##") << endl;
    cout << CenterText(availableColumns, 3, "##-------------------------------- ##") << endl;
    cout << CenterText(availableColumns, 4, "##                                 ##") << endl;
    color(Set[0]);
    cout << CenterText(availableColumns, 4, "    1. Add Doctor                ") << endl;
    color(7);
    cout << CenterText(availableColumns, 5, "##                                 ##") << endl;
    color(Set[1]);
    cout << CenterText(availableColumns, 5, "    2. Patient Regestration      ") << endl;
    color(7);
    cout << CenterText(availableColumns, 6, "##                                 ##") << endl;
    color(Set[2]);
    cout << CenterText(availableColumns, 6, "    3. Patient Login             ") << endl;
    color(7);
    cout << CenterText(availableColumns, 7, "##                                 ##") << endl;
    color(Set[3]);
    cout << CenterText(availableColumns, 7, "    4. Doctor Login              ") << endl;
    color(7);
    cout << CenterText(availableColumns, 8, "##                                 ##") << endl;
    color(Set[4]);
    cout << CenterText(availableColumns, 8, "    5. Doctor Search             ") << endl;
    color(7);
    cout << CenterText(availableColumns, 9, "##                                 ##") << endl;
    color(Set[5]);
    cout << CenterText(availableColumns, 9, "    6. Exit                      ") << endl;
    color(7);
    cout << CenterText(availableColumns, 10, "#####################################") << endl;
}
void DoctorMenu(int availableColumns, int Set[], string ID, string username)
{
    cout << CenterText(availableColumns, 1, "#####################################") << endl;
    cout << CenterText(availableColumns, 2, "##          Doctor Dashboard       ##") << endl;
    cout << CenterText(availableColumns, 3, "   ID:" + ID + "         " + username + "    ") << endl;
    cout << CenterText(availableColumns, 4, "##-------------------------------- ##") << endl;
    cout << CenterText(availableColumns, 5, "##                                 ##") << endl;
    color(Set[0]);
    cout << CenterText(availableColumns, 5, "    1. My Appointments              ") << endl;
    color(7);
    cout << CenterText(availableColumns, 6, "##                                 ##") << endl;
    color(Set[1]);
    cout << CenterText(availableColumns, 6, "  2. Update profile              ") << endl;
    color(7);
    cout << CenterText(availableColumns, 7, "##                                 ##") << endl;
    color(Set[2]);
    cout << CenterText(availableColumns, 7, "  3. Logout                      ") << endl;

    color(7);
    cout << CenterText(availableColumns, 8, "#####################################") << endl;
}

void PatientMenu(int availableColumns, int Set[], string ID, string username)
{
    cout << CenterText(availableColumns, 1, "#####################################") << endl;
    cout << CenterText(availableColumns, 2, "##          Patient Dashboard       ##") << endl;
    cout << CenterText(availableColumns, 3, "   ID:" + ID + "         " + username + "    ") << endl;
    cout << CenterText(availableColumns, 4, "##-------------------------------- ##") << endl;
    cout << CenterText(availableColumns, 5, "##                                 ##") << endl;
    color(Set[0]);
    cout << CenterText(availableColumns, 5, "    1. Search for doctor           ") << endl;
    color(7);
    cout << CenterText(availableColumns, 6, "##                                 ##") << endl;
    color(Set[1]);
    cout << CenterText(availableColumns, 6, "    2. Book Appointment            ") << endl;
    color(7);
    cout << CenterText(availableColumns, 7, "##                                 ##") << endl;
    color(Set[2]);
    cout << CenterText(availableColumns, 7, "    3. Update My profile             ") << endl;
    color(7);
    cout << CenterText(availableColumns, 8, "##                                 ##") << endl;
    color(Set[3]);
    cout << CenterText(availableColumns, 8, "    4. Logout                      ") << endl;
    color(7);
    cout << CenterText(availableColumns, 9, "#####################################") << endl;
}
// Exit
void Exit()
{
	cout << "*********************************************************************" << endl << endl;
	 cout << "*** Supervised by: Dr. Haidy Hamed " << endl<<endl;
     cout << "*** Team members:" << endl;
                cout << "                  * Basma Mohammad Kamel Abdelmohsen Mohammad" << endl;
                cout << "                  * Marwa Osama Abdelrahman Azzam" << endl;
                cout << "                  * Mostafa Ahmed Mostafa Abdelghafar" << endl;
                cout << "                  * Nour eldin Mohamed yehia Mohamed eladawy" << endl<< endl;
                cout << "*** Thanks for your attention..." << endl;
    cout << "*********************************************************************" << endl << endl;            
}
int main()
{
    int Set[] = {7, 7, 7, 7, 7, 7};
    int counter = 2;
    char key;
    Doctor doctor;
    patient Patient;
    int choice, ID , DKey =0 , PKey=0;
    // Booking
    booking b;
	int did;
	int id=1; 
	int pid;	string pname;
    
    string name, phoneNumber, emailAddress, address, clinic, username, password, confirmPassword, dateBirth;

    CONSOLE_SCREEN_BUFFER_INFO sbInfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbInfo);
    int availableColumns = sbInfo.dwSize.X;
    int availableRows = sbInfo.dwSize.Y;

    // Menu-driven user interface

    
            do
            {
                system("cls");

                do
                {
                    MainMenu(availableColumns, Set);
                    key = _getch();

                    if (key == 72 && (counter >= 2)) // Up Arrow
                    {
                        counter--;
                        
                    }
                    if (key == 80 && (counter >= 1 && counter < 6)) // Down Arrow
                    {
                        counter++;
                        
                    }
                    Set[0] = 7;
                    Set[1] = 7;
                    Set[2] = 7;
                    Set[3] = 7;
                    Set[4] = 7;
                    Set[5] = 7;

                    if (counter == 1)
                        Set[0] = 12;
                    if (counter == 2)
                        Set[1] = 12;
                    if (counter == 3)
                        Set[2] = 12;
                    if (counter == 4)
                        Set[3] = 12;
                    if (counter == 5)
                        Set[4] = 12;
                    if (counter == 6)
                        Set[5] = 12;

                } while (key != '\r'); // Enter Key

                switch (counter)
                {
                case 1:
                    cout << "Enter Doctor name: ";
                    cin >> name;
                    cout << "Enter phone number: ";
                    cin >> phoneNumber;
                    cout << "Enter email address: ";
                    cin >> emailAddress;
                    cout << "Enter address: ";
                    cin >> address;
                    cout << "Enter clinic: ";
                    cin >> clinic;
                    cout << "Enter username: ";
                    cin >> username;
                    cout << "Enter password: ";
                    cin >> password;
                    cout << "Confirm password: ";
                    cin >> confirmPassword;

                    // Check if passwords match
                    while (password != confirmPassword)
                    {
                        cout << "Passwords do not match. Please try again.\n"<< endl;
                        cout << "Enter password: ";
                        cin >> password;
                        cout << "Confirm password: ";
                        cin >> confirmPassword;
                    }
                    doctor.addDoctor(name, phoneNumber, emailAddress, address, clinic, username, password,DKey);
                    DKey++;
                    doctor.Print();

                    system("pause");
                    break;
                case 2:
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter phone number: ";
                    cin >> phoneNumber;
                    cout << "Enter email address: ";
                    cin >> emailAddress;
                    cout << "Enter address: ";
                    cin >> address;
                    cout << "Enter Birth Date: ";
                    cin >> dateBirth;
                    cout << "Enter username: ";
                    cin >> username;
                    cout << "Enter password: ";
                    cin >> password;
                    cout << "Confirm password: ";
                    cin >> confirmPassword;

                    // Check if passwords match
                    while (password != confirmPassword)
                    {
                        cout << "Passwords do not match. Please try again.\n"
                             << endl;
                        cout << "Enter password: ";
                        cin >> password;
                        cout << "Confirm password: ";
                        cin >> confirmPassword;
                    }
                    Patient.AddPatient(name, phoneNumber, emailAddress, address, dateBirth, username, password , PKey);
                    PKey++;
                    Patient.PrintPatients();

                    system("pause");

                    break;
                case 3:
                    cout << "Enter Username: ";
                    cin >> username;
                    cout << "Enter password: ";
                    cin >> password;

                    if (Patient.loginCredientials(username, password))
                    {
                        ID = Patient.RetriveKey();
                        cout << "Login Successfule .........";
                        counter =1;
                        do
                        {
                            PatientMenu(availableColumns, Set, to_string(ID), username);
                            system("cls");
                            do
                            {
                                key = _getch();
                                if (key == 72 && (counter >= 2)) // Up Arrow
                                {
                                    counter--;
                                    
                                }
                                if (key == 80 && (counter >= 1 && counter < 4)) // Down Arrow
                                {
                                    counter++;
                                    
                                }
                                Set[0] = 7;
                                Set[1] = 7;
                                Set[2] = 7;
                                Set[3] = 7;
                                Set[4] = 7;
                                Set[5] = 7;

                                if (counter == 1)
                                    Set[0] = 12;
                                if (counter == 2)
                                    Set[1] = 12;
                                if (counter == 3)
                                    Set[2] = 12;
                                if (counter == 4)
                                    Set[3] = 12;
                                if (counter == 5)
                                    Set[4] = 12;
                                if (counter == 6)
                                    Set[5] = 12;
                                PatientMenu(availableColumns, Set, to_string(ID), username);

                            } while (key != '\r');

                            switch (counter)
                            {
                            case 1:
                            // TODO Adding Search for Doctor Patient
                                system("pause");
                                break;
                            case 2:
                            // TODO Adding Patient Booking Appointment 
                            //Patient Booking Appointment 
                                cout<<"Enter dodctor ID: " ;
								cin>>did;
							//patient id comes from the title
								pid = ID;
								pname=username;
						
								b.NewBooking(id,pid,did,pname);
								id=id+1; 
							
                            system("pause");

                                break;
                            case 3:
                            // TODO Adding Update Patient Profile 
                                break;
                            case 4:
                            //Logout and return to main menu page
                                break;
                            }
                        } while (counter != 4);
                    }
                    else
                        cout << "please check your username and password Try agein .........";
                    system("pause");
                    break;

                case 4:
                    cout << "Enter Username: ";
                    cin >> username;
                    cout << "Enter password: ";
                    cin >> password;

                    if (doctor.loginCredientials(username, password))
                    {
                        ID = doctor.RetriveKey();
                        cout << "Login Successfule .........";
                        counter =1;
                        do
                        {
                            system("cls");
                            do
                            {
                                key = _getch();
                                if (key == 72 && (counter >= 2)) // Up Arrow
                                {
                                    counter--;
                                    cout << "Counter = " << counter << endl;
                                }
                                if (key == 80 && (counter >= 1 && counter < 3)) // Down Arrow
                                {
                                    counter++;
                                    cout << "Counter = " << counter << endl;
                                }
                                Set[0] = 7;
                                Set[1] = 7;
                                Set[2] = 7;
                                Set[3] = 7;
                                Set[4] = 7;
                                Set[5] = 7;

                                if (counter == 1)
                                    Set[0] = 12;
                                if (counter == 2)
                                    Set[1] = 12;
                                if (counter == 3)
                                    Set[2] = 12;
                                if (counter == 4)
                                    Set[3] = 12;
                                if (counter == 5)
                                    Set[4] = 12;
                                if (counter == 6)
                                    Set[5] = 12;
                                DoctorMenu(availableColumns, Set, to_string(ID), username);

                            } while (key != '\r');

                            switch (counter)
                            {
                            case 1:
                            // TODO Adding View doctor appointments
                                system("pause");
                                break;
                            case 2:
                            // TODO Adding Update doctor Profile
                                system("pause");

                                break;
                            case 3:
                                break;
                            }
                        } while (counter != 3);
                    }
            
                    else
                        cout << "please check your username and password Try agein .........";
                    break;
                case 5:
                    cout << "Enter name to search for ";
                    cin >> name;
                    cout << endl;
                    doctor.SearchForDoctor(name);
                    cout << endl;

                    system("pause");
                    break;

                case 6:
                    Exit();
                    system("pause");
                    break;
                    
                }
            } while (counter != 6);
            return 0;
        }

     
