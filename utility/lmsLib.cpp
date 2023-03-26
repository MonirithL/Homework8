#include <iostream>
#include <conio.h>

using namespace std;
namespace lmsApplication{
const int allMenuItems = 5;

string menuItems(int a, int amount){
    int MenuAmount = amount;
    string options[MenuAmount] = {"0. Exit", "1. Loan a book", "2. Add book record", "3. Update book record", "4. Search for a book"};
    return options[a];
}

bool login(string user, string key){
    string username = "";
    string password = "";
    char passChar;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    passChar = _getch();
    while (passChar != 13){
        password.push_back(passChar);
        cout << "*";
        passChar = _getch();
    };
    cout << endl << endl;
    return bool(password == key && username == user);
}   

void loginFail(){
    cout << "Wrong password and/or username\n";
}

void displayMenu(){
    cout << "LMS Menu\n";
        for(int i = 1; i <= (allMenuItems); i++ ){
            if(i > 0 && i < allMenuItems){
                cout << menuItems( i, allMenuItems) << endl;
            }
            else if (i == allMenuItems){
                cout << menuItems( 0, allMenuItems) << endl;
            }else;
        };
        cout << endl;
}

void subMenuLoop(){
    int taskIn;
    do{
        cout << "Select a task from the menu: ";
        cin >> taskIn;
        if(taskIn > 0 && taskIn < allMenuItems){
            cout <<"'" << menuItems(taskIn, allMenuItems) << "' selected\n\n";
            displayMenu();
        } else if(taskIn == 0){
            cout <<"'" << menuItems(taskIn, allMenuItems) << "' selected\n\n";
        } else{
            cout << "Invalid task selected!!! Please check and re-enter\n\n";
            displayMenu();
        }
    }while(taskIn != 0);
}

void initApp(){
    char empty = 12;
    char keyPress;
    while(keyPress == '\0'){
        cout << "Welcome to LMS system\n"
         << "---------------------\n"
         << "Press any key to start!";
    keyPress = _getch();
    };
    cout << endl;
}
}
