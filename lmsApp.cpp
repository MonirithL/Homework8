#include <iostream>
#include "utility\lmsLib.hpp"

using namespace lmsApplication;
int main(){
    std::string username = "james";
    std::string password = "123bond";

    initApp();

    if(!login(username, password)){
        loginFail();
    } else{
        displayMenu();
        subMenuLoop();
    }
    return 0;
}
//string username & password can be changed for different tries
// initApp, welcomes the user
// login = true if correct input -> value = false, then move to "else"
// login fail, prints fail login message
// display menu print lms menu
// selection loop, cin and cout selction

//Template run:
// g++ -o lms.exe .\lmsApp.cpp .\utility\lmsLib.cpp
// .\lms.exe