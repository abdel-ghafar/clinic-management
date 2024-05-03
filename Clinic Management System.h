// Clinic Management System.h

#include <iostream>
#include <string>

using namespace std;


// Define patient 

class patient{
	private:
	class node{
	public:
	string name;
    string phoneNumber;
    string emailAddress;
    string address;
    string DateBirth;
    string username;
    string password;
    node* next;
		};
	node *head , *prev , *cursor;
	public:
	patient();
	void PrintPatients();
	void AddPatient(string name , string phoneNumber , string emailAddress , string address , string DateBirth , string username , string password);
    bool loginCredientials(string Username , string Password );
		
};

// Define the Doctor class
class Doctor {
public:
    string name;
    string phoneNumber;
    string emailAddress;
    string address;
    string clinic;
    string username;
    string password;
    Doctor* next;

    // Constructor to initialize the Doctor
    Doctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password);
};

// Define the DoctorRegistration class
class DoctorRegistration {
private:
    Doctor* head; // Pointer to the head of the linked list

public:
    // Constructor to initialize the head pointer
    DoctorRegistration();

    // Function to add a new Doctor to the list
    void addDoctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password);
};

