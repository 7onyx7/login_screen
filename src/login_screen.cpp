// login_screen.cpp : Defines the entry point for the application.
//
#include <iostream>
#include "login_screen.h"

using namespace std;

LoginScreen::LoginScreen()
	: correctUsername("user"), correctPassword("password") {

}


void LoginScreen::displayLogin() {
	string username;
	string password;

	cout << "Enter username: ";
	cin >> username;

	cout << "Enter password: ";
	cin >> password;

	if (verifyCredentials(username, password)) {
		cout << "Login successful!\n" << endl;
	}
	else {
		cout << "Invalid username or password. Please try again.\n" << endl;
	}

}

const bool LoginScreen::verifyCredentials(const string& username, const string& password) {
	return (username == correctUsername && password == correctPassword);
}