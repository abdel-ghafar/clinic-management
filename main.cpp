
#include "Clinic Management System.h"
#include <iostream>
using namespace std;
int main() {
    DoctorRegistration doctorRegistration;
    patient Patient;
    int choice;
    string name, phoneNumber, emailAddress, address, clinic, username, password, confirmPassword;
    string Pname, PphoneNumber, PemailAddress, Paddress, PdateBirth, Pusername, Ppassword, PconfirmPassword;

    // Menu-driven user interface
    do {
        cout << "#####################################" << endl;
        cout << "##    Clinic Management System     ##" << endl;
        cout << "##-------------------------------- ##" << endl;
        cout << "##    1. Add Doctor                ##" << endl;
        cout << "##    2. Patient Regestration      ##" << endl;
        cout << "##    3. Exit                      ##" << endl;
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
                doctorRegistration.addDoctor(name, phoneNumber, emailAddress, address, clinic, username, password);
                break;
              case 2:
                cout << "Enter name: ";
                cin >> Pname;
                cout << "Enter phone number: ";
                cin >> PphoneNumber;
                cout << "Enter email address: ";
                cin >> PemailAddress;
                cout << "Enter address: ";
                cin >> Paddress;
                cout << "Enter Birth Date: ";
                cin >> PdateBirth;
                cout << "Enter username: ";
                cin >> Pusername;
                cout << "Enter password: ";
                cin >> Ppassword;
                cout << "Confirm password: ";
                cin >> PconfirmPassword;

                // Check if passwords match
                while (Ppassword != PconfirmPassword) {
                    cout << "Passwords do not match. Please try again.\n" << endl;
                    cout << "Enter password: ";
                cin >> Ppassword;
                cout << "Confirm password: ";
                cin >> PconfirmPassword;
				}
                 Patient.AddPatient(Pname,PphoneNumber,PemailAddress,Paddress,PdateBirth,Pusername,Ppassword);
                 Patient.PrintPatients();
                    break;    
            
            case 3:
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
        
       
        
    } while (choice != 3);

    return 0;
}
