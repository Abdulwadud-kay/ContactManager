//
//  DeleteContactPage.cpp
//  ContactManager
//
//  Created by Abdulwadud Abdulkadir on 4/15/24.
//

#include "DeleteContactPage.hpp"
#include <iostream>

std::string DeleteContactPage::getContactNameToDelete() {
    std::string name;
    std::cout << "Enter name of contact to delete: ";
    std::getline(std::cin, name);
    return name;
}
