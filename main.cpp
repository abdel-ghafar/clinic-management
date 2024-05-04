
#include "Clinic Management System.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


void color (int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}


 void gotoxy(int x , int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

string CenterText(int x , int y , string S){
    
    gotoxy(x/2 -(S.size()/2),y);

    return S;

}

void MainMenu(int availableColumns , int Set[]){
        cout << CenterText(availableColumns,1,"#####################################") << endl;
        cout << CenterText(availableColumns,2,"##    Clinic Management System     ##") << endl;
        cout << CenterText(availableColumns,3,"##-------------------------------- ##") << endl;
        cout << CenterText(availableColumns,4,"##                                 ##") << endl;
        color(Set[0]);
        cout << CenterText(availableColumns,4,"    1. Add Doctor                ") << endl;
        color(7);
        cout << CenterText(availableColumns,5,"##                                 ##") << endl;
        color(Set[1]);
        cout << CenterText(availableColumns,5,"    2. Patient Regestration      ") << endl;
        color(7);
        cout << CenterText(availableColumns,6,"##                                 ##") << endl;
        color(Set[2]);
        cout << CenterText(availableColumns,6,"    3. Patient Login             ") << endl;
        color(7);
        cout << CenterText(availableColumns,7,"##                                 ##") << endl;
        color(Set[3]);
        cout << CenterText(availableColumns,7,"    4. Doctor Login              ") << endl;
        color(7);
        cout << CenterText(availableColumns,8,"##                                 ##") << endl;
        color(Set[4]);
        cout << CenterText(availableColumns,8,"    5. Doctor Search             ") << endl;
        color(7);
        cout << CenterText(availableColumns,9,"##                                 ##") << endl;
        color(Set[5]);
        cout << CenterText(availableColumns,9,"    6. Exit                      ") << endl;
        color(7);
        cout << CenterText(availableColumns,10,"#####################################") << endl;
}
int main() {
    int Set[] = {7,7,7,7,7,7};
    int counter = 2;
    char key;
    Doctor doctor;
    patient Patient;
    int choice;
    string name, phoneNumber, emailAddress, address, clinic, username, password, confirmPassword , dateBirth;

    CONSOLE_SCREEN_BUFFER_INFO sbInfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbInfo);
    int availableColumns = sbInfo.dwSize.X;
    int availableRows = sbInfo.dwSize.Y;    

   

    // Menu-driven user interface
    
        do
        {
           system("cls");
           MainMenu(availableColumns , Set);
           do{
           	
        key =_getch();
        MainMenu(availableColumns , Set);
        if(key== 72 && (counter >=2)) 
        {counter --;}
        if(key== 80 && (counter >=1 && counter <=5))
        {counter ++;}
        Set[0]=7;
        Set[1]=7;
        Set[2]=7;
        Set[3]=7;
        Set[4]=7;
        Set[5]=7;
        
        if(counter ==1) 
        Set[0] =12;
        if(counter ==2) 
        Set[1] =12;
        if(counter ==3) 
        Set[2] =12;
        if(counter ==4) 
        Set[3] =12;
        if(counter ==5) 
        Set[4] =12;
        if(counter ==6) 
        Set[5] =12;
         } while (key != '\r');

        
            choice = counter;

             switch (choice) {
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
                while (password != confirmPassword) {
                    cout << "Passwords do not match. Please try again.\n" << endl;
                    cout << "Enter password: ";
                cin >> password;
                cout << "Confirm password: ";
                cin >> confirmPassword;
				}
                doctor.addDoctor(name, phoneNumber, emailAddress, address, clinic, username, password);
                doctor.Print();
                
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
                while (password != confirmPassword) {
                    cout << "Passwords do not match. Please try again.\n" << endl;
                    cout << "Enter password: ";
                cin >> password;
                cout << "Confirm password: ";
                cin >> confirmPassword;
				}
                 Patient.AddPatient(name,phoneNumber,emailAddress,address,dateBirth,username,password);
                 Patient.PrintPatients();
                 
                    break;    
            case 3:
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                
			
                 if(Patient.loginCredientials(username,password)){
                    cout<< "Login Successfule .........";
                 } else 
                 cout<< "please check your username and password Try agein .........";
                 
                    break;
            
            case 4:
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                
			
                 if(doctor.loginCredientials(username,password)){
                    cout<< "Login Successfule .........";
                 } else 
                 cout<< "please check your username and password Try agein .........";
                
                break;
            case 5:
            cout<<"Enter name to search for ";
            cin>>name;
            cout<<endl;
            doctor.SearchForDoctor(name);
            cout<<endl;
           
            break;
            case 6:
                cout << "Thank you for attention..." << endl;
                cout << "Team members: [Mostafa Ahmed Mostafa Abdelghafar]" << endl;
                cout << "              [Nour eldin Mohamed Yehia Mohamed ]" << endl;
                cout << "              [---------------------------------]" << endl;
                cout << "              [---------------------------------]" << endl;
                cout << "              [---------------------------------]" << endl;
                cout << "              [---------------------------------]" << endl;
                return 0;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        } while (choice !=6);
        
        

        
   
    
}
