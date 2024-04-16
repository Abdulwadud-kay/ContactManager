//
//  AddContactPage.cpp
//  ContactManager
//
//  Created by Abdulwadud Abdulkadir on 4/12/24.
//

// AddContactPage.cpp
#include "AddContactPage.hpp"
#include <iostream>
#include <algorithm> // Include algorithm header for std::find_if
#include <cctype>    // Include cctype header for std::isspace

// Trim function to remove leading and trailing spaces from a string
void trim(std::string& str) {
    // Trim leading spaces
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
    
    // Trim trailing spaces
    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), str.end());
}

Contact AddContactPage::getContactInfo() {
    Contact contact;

    std::cout << "Enter name: ";
    std::getline(std::cin, contact.name);
    trim(contact.name); // Trim leading and trailing spaces from the name

    std::cout << "Enter phone number: ";
    std::getline(std::cin, contact.phoneNumber);
    trim(contact.phoneNumber); // Trim leading and trailing spaces from the phone number

    std::cout << "Enter email: ";
    std::getline(std::cin, contact.email);
    trim(contact.email); // Trim leading and trailing spaces from the email

    return contact;
}
