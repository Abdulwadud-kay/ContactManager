#ifndef CONTACT_MANAGING_HPP
#define CONTACT_MANAGING_HPP

#include "Contact.hpp"
#include <vector>

class ContactManaging {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& contact);
    void editContact(const std::string& name, const Contact& newContact);
    void deleteContact(const std::string& name);
    void searchContact(const std::string& name);
};

#endif // CONTACT_MANAGING_HPP


