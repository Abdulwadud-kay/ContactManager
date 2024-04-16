//
//  EditContactPage.cpp
//  ContactManager
//
//  Created by Abdulwadud Abdulkadir on 4/15/24.
//

#include "EditContactPage.hpp"
#include <iostream>

Contact EditContactPage::getUpdatedContactInfo() {
    Contact contact;
    std::cout << "Enter new name: ";
    std::getline(std::cin, contact.name);
    std::cout << "Enter new phone number: ";
    std::getline(std::cin, contact.phoneNumber);
    std::cout << "Enter new email: ";
    std::getline(std::cin, contact.email);
    return contact;
}
