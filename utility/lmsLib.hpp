#ifndef MYLIB
#define MYLIB

namespace lmsApplication{
    const int allMenuItems = 5;
    std::string menuItems(int a, int amount);
    bool login(std::string user, std::string key);
    void loginFail();
    void displayMenu();
    void subMenuLoop();
    void initApp();
}

#endif