// login_screen.h : Include file for standard system include files,
// or project specific include files.

#ifndef LOGIN_SCREEN_H
#define LOGIN_SCREEN_H

#include <iostream>
#include <string>

class LoginScreen {
public:
	LoginScreen();

	void displayLogin();

private:
	const bool verifyCredentials(const std::string& username, const std::string& password);

	std::string correctUsername;
	std::string correctPassword;
};

#endif // LOGIN_SCREEN_H

// TODO: Reference additional headers your program requires here.
