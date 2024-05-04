// Clinic Management System.h

#include <iostream>
#include <string>

using namespace std;


// Define patient 

class patient{
	private:
	class node{
	public:
    int key;
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
	void AddPatient(string name , string phoneNumber , string emailAddress , string address , string DateBirth , string username , string password , int key);
    bool loginCredientials(string Username , string Password );
    int RetriveKey();
		
};

// Define the Doctor class
class Doctor {
    private:
    class node{
    public:
    int key;
    string name;
    string phoneNumber;
    string emailAddress;
    string address;
    string clinic;
    string username;
    string password;
    node* next;
    };
    node *head , *prev , *cursor;
    public:
    // Constructor to initialize the Doctor
    Doctor();
    void addDoctor(string name, string phoneNumber, string emailAddress, string address, string clinic, string username, string password , int key);
    void Print();
    bool loginCredientials(string Username , string Password );
    void SearchForDoctor(string name);
    int RetriveKey();
};



