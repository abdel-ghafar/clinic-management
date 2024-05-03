
#include "Clinic Management System.h"
#include <iostream>
using namespace std;
int main() {
    Doctor doctor;
    patient Patient;
    int choice;
    string name, phoneNumber, emailAddress, address, clinic, username, password, confirmPassword , dateBirth;
    

    // Menu-driven user interface
    do {
        cout << "#####################################" << endl;
        cout << "##    Clinic Management System     ##" << endl;
        cout << "##-------------------------------- ##" << endl;
        cout << "##    1. Add Doctor                ##" << endl;
        cout << "##    2. Patient Regestration      ##" << endl;
        cout << "##    3. Patient Login             ##" << endl;
        cout << "##    4. Doctor Login              ##" << endl;
        cout << "##    5. Exit                      ##" << endl;
        cout << "#####################################" << endl << endl;
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
        
       
        
    } while (choice != 5);

    return 0;
}
