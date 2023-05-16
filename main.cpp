#include <iostream>
#include <fstream>
#include <cstring>

int main() {
    // TODO - create class to prepare application data: pswd file data, user file data, login texts
    // present user with login screen & store login data
    char username[50];
    std::cout << "Enter user name" << std::endl;
    std::cin >> username;
    std::cout << "Enter user password" << std::endl;
    std::string userpswd;
    std::cin >> userpswd;
    // compare with saved data
    std::ifstream users;
    users.open("../etc_proj/users/users", std::ios::out);
    char username_stored[50];
    while(!users.eof()){
        users.getline(username_stored, 50);
        if(strcmp(username_stored, username) == 0){
            std::cout << username_stored << std::endl;
            return 0;
        }
    }

    std::cout << "username: " << username << " not found" << std::endl;






//    std::cout << username << std::endl;
    users.close();
    return 0;
}
