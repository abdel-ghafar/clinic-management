// Clinic Management System.cpp

#include "Clinic Management System.h"
#include <string>
#include <iostream>
using namespace std;

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



void patient::AddPatient(string name,string phoneNumber,string emailAddress,string address,string DateBirth,string username,string password ,int key){
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

    newPatient->key = key;
	newPatient->name = name;
    newPatient->phoneNumber = phoneNumber;
    newPatient->emailAddress = emailAddress;
    newPatient->address = address;
    newPatient->DateBirth = DateBirth;
    newPatient->username = username;
    newPatient->password = password;
}

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

int patient::RetriveKey(){
    return cursor->key;
}



//////////////////////////////////Doctor class //////////////////////////////////




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
void Doctor::addDoctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password ,int key) {
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
    newDoctor->key = key;
	newDoctor->name = name;
    newDoctor->phoneNumber = phoneNumber;
    newDoctor->emailAddress = emailAddress;
    newDoctor->address = address;
    newDoctor->clinic = clinic;
    newDoctor->username = username;
    newDoctor->password = password;
}

bool Doctor::loginCredientials(string Username , string Password ){
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

int Doctor::RetriveKey(){
    return cursor->key;
}

string toLower(string s) {
    for(int i=0 ; i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
   
}

void Doctor::SearchForDoctor(string name){
    cursor = head;  
    prev = NULL;     // Go tofirst node
    while ( cursor != NULL) {  // Advance to the next node
            prev = cursor;
            if(toLower(cursor->name).find(name) !=string::npos)
            {
                cout<<cursor->name << endl;

            }
            cursor = cursor->next;
            }
    
}



