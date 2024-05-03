// Clinic Management System.cpp

#include "Clinic Management System.h"

bool patient::loginCredientials(string Username , string Password ){
    bool CorrectCredientials = false;
    cursor = head;  
    prev = NULL;     // Go tofirst node
    while ( cursor != NULL) {  // Advance to the next node
            prev = cursor;
            if(cursor->username == Username && cursor->password == Password)
            return true;
        
            cursor = cursor->next;
            }
    return CorrectCredientials;

}

patient::patient(){
	head = NULL;
	cursor = NULL;
	prev = NULL;
}

void patient::PrintPatients(){

    cursor = head;  
    prev = NULL;     // Go tofirst node
    while ( cursor != NULL) {  // Advance to the next node
            prev = cursor;
            cout<< cursor->name << " - ";
            cursor = cursor->next;
            }
            cout<<endl;
			
            
}

void patient::AddPatient(string name,string phoneNumber,string emailAddress,string address,string DateBirth,string username,string password){
	node *newPatient = new node;
	
      if(head == NULL)
    {
    	
        newPatient ->next = head;
        head = newPatient;
        cursor = head;
        prev = NULL;   
    }
    else{
        cursor = head;  prev = NULL;     // Go tofirst node 
		while ( cursor->next != NULL) {  // Advance to the next node
            prev = cursor;
            cursor = cursor->next;
        }
        newPatient->next = cursor->next;
        cursor -> next = newPatient;
        prev = cursor;
        cursor = newPatient;

    }

	newPatient->name = name;
    newPatient->phoneNumber = phoneNumber;
    newPatient->emailAddress = emailAddress;
    newPatient->address = address;
    newPatient->DateBirth = DateBirth;
    newPatient->username = username;
    newPatient->password = password;
    

	
}


// Constructor to initialize the Doctor
Doctor::Doctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password) {
    name = name;
    phoneNumber = phoneNumber;
    emailAddress = emailAddress;
    address = address;
    clinic = clinic;
    username = username;
    password = password;
    next = NULL;
}

// Constructor to initialize the head pointer
DoctorRegistration::DoctorRegistration() {
    head = NULL;
}

// Function to add a new Doctor to the list
void DoctorRegistration::addDoctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password) {
    Doctor* newDoctor = new Doctor(name, phoneNumber, emailAddress, address, clinic, username, password);

    // If list is empty, set new Doctor as head
    if (head == NULL) {
        head = newDoctor;
        cout << "\nDoctor added successfully!\n" << endl;
        return;
    }

    // Traverse to the end of the list
    Doctor* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert new Doctor at the end
    temp->next = newDoctor;
    cout << "\nDoctor added successfully!\n" << endl;
}
