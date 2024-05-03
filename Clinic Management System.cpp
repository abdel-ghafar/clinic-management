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
	node *newDoctor = new node;
	
      if(head == NULL)
    {
    	
        newDoctor ->next = head;
        head = newDoctor;
        cursor = head;
        prev = NULL;   
    }
    else{
        cursor = head;  prev = NULL;     // Go tofirst node 
		while ( cursor->next != NULL) {  // Advance to the next node
            prev = cursor;
            cursor = cursor->next;
        }
        newDoctor->next = cursor->next;
        cursor -> next = newDoctor;
        prev = cursor;
        cursor = newDoctor;

    }

	newDoctor->name = name;
    newDoctor->phoneNumber = phoneNumber;
    newDoctor->emailAddress = emailAddress;
    newDoctor->address = address;
    newDoctor->DateBirth = DateBirth;
    newDoctor->username = username;
    newDoctor->password = password;
    

	
}


// Constructor to initialize the Doctor
Doctor::Doctor() {
    head = NULL;
	cursor = NULL;
	prev = NULL;
}



void Doctor::Print(){

    cursor = head;  
    prev = NULL;     // Go tofirst node
    while ( cursor != NULL) {  // Advance to the next node
            prev = cursor;
            cout<< cursor->name << " - ";
            cursor = cursor->next;
            }
            cout<<endl;
			
            
}

// Function to add a new Doctor to the list
void Doctor::addDoctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password) {
    node *newDoctor = new node;
    

    if(head == NULL)
    {
    	
        newDoctor ->next = head;
        head = newDoctor;
        cursor = head;
        prev = NULL;   
    }
    else{
        cursor = head;  prev = NULL;     // Go tofirst node 
		while ( cursor->next != NULL) {  // Advance to the next node
            prev = cursor;
            cursor = cursor->next;
        }
        newDoctor->next = cursor->next;
        cursor -> next = newDoctor;
        prev = cursor;
        cursor = newDoctor;

    }

	newDoctor->name = name;
    newDoctor->phoneNumber = phoneNumber;
    newDoctor->emailAddress = emailAddress;
    newDoctor->address = address;
    newDoctor->clinic = clinic;
    newDoctor->username = username;
    newDoctor->password = password;
}
