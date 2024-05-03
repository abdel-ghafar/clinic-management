
#include "Clinic Management System.h"
#include <iostream>
#include <Windows.h>
using namespace std;
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
int main() {
    Doctor doctor;
    patient Patient;
    int choice;
    string name, phoneNumber, emailAddress, address, clinic, username, password, confirmPassword , dateBirth;

       CONSOLE_SCREEN_BUFFER_INFO sbInfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbInfo);
    int availableColumns = sbInfo.dwSize.X;
    int availableRows = sbInfo.dwSize.Y;    

   

    // Menu-driven user interface
    do {
     
        
        cout << CenterText(availableColumns,1,"#####################################") << endl;
        cout << CenterText(availableColumns,2,"##    Clinic Management System     ##") << endl;
        cout << CenterText(availableColumns,3,"##-------------------------------- ##") << endl;
        cout << CenterText(availableColumns,4,"##    1. Add Doctor                ##") << endl;
        cout << CenterText(availableColumns,5,"##    2. Patient Regestration      ##") << endl;
        cout << CenterText(availableColumns,6,"##    3. Patient Login             ##") << endl;
        cout << CenterText(availableColumns,7,"##    4. Doctor Login              ##") << endl;
        cout << CenterText(availableColumns,8,"##    5. Doctor Search             ##") << endl;
        cout << CenterText(availableColumns,9,"##    6. Exit                      ##") << endl;
        cout << CenterText(availableColumns,10,"#####################################") << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n";

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

                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        
       
        
    } while (choice != 6);

    return 0;
}
