#include "ContactManaging.hpp"
#include <iostream>
#include <regex> // Include regex header for pattern matching

bool isValidPhoneNumber(const std::string& phoneNumber) {
    // Regular expression to match US phone number format
    std::regex pattern("(\\+1\\s)?\\(\\d{3}\\)\\s\\d{3}-\\d{4}|(\\+1)?\\d{10}");
    return std::regex_match(phoneNumber, pattern);
}

// Define isValidEmail function
bool isValidEmail(const std::string& email) {
    // Regular expression to match basic email format
    std::regex pattern("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}");
    return std::regex_match(email, pattern);
}

void ContactManaging::addContact(const Contact& contact) {
    // Check validity of phone number and email
    if (!isValidPhoneNumber(contact.phoneNumber)) {
        std::cout << "Invalid phone number!\n";
        return;
    }
    if (!isValidEmail(contact.email)) {
        std::cout << "Invalid email address!\n";
        return;
    }

    // Add the contact to the list
    contacts.push_back(contact);
    std::cout << "Contact added successfully: Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << ", Email: " << contact.email << "\n";

    // Print the contacts list
    std::cout << "Contacts List:\n";
    for (const auto& contact : contacts) {
        std::cout << "Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << ", Email: " << contact.email << "\n";
    }
}

void ContactManaging::searchContact(const std::string& name) {
    // Search for contact by name
    bool found = false;
    for (const auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "Contact found: Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << ", Email: " << contact.email << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Contact not found!\n";
    }
}
void ContactManaging::editContact(const std::string& name, const Contact& newContact) {
    for (auto& contact : contacts) {
        if (contact.name == name) {
            contact = newContact;
            std::cout << "Contact updated successfully!\n";
            return;
        }
    }
    std::cout << "Contact not found!\n";
}
void ContactManaging::deleteContact(const std::string& name) {
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            std::cout << "Contact deleted successfully!\n";
            return;
        }
    }
    std::cout << "Contact not found!\n";
}
