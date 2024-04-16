#include "ContactManaging.hpp"
#include "AddContactPage.hpp"
#include "SearchContactPage.hpp"
#include "DeleteContactPage.hpp"
#include "EditContactPage.hpp"
#include <iostream>

int main() {
    ContactManaging contactManager;
    AddContactPage addContactPage;
    SearchContactPage searchContactPage;
    DeleteContactPage deleteContactPage;
    EditContactPage editContactPage;

    int choice;
    do {
        std::cout << "\n=== Contact Management Application ===\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Search Contact\n";
        std::cout << "3. Delete Contact\n";
        std::cout << "4. Edit Contact\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the input buffer

        switch (choice) {
            case 1: {
                Contact newContact = addContactPage.getContactInfo();
                contactManager.addContact(newContact);
                break;
            }
            case 2: {
                std::string query = searchContactPage.getSearchQuery();
                contactManager.searchContact(query);
                break;
            }
            case 3: {
                std::string nameToDelete = deleteContactPage.getContactNameToDelete();
                contactManager.deleteContact(nameToDelete);
                break;
            }
            case 4: {
                std::string nameToEdit = deleteContactPage.getContactNameToDelete();
                Contact updatedContact = editContactPage.getUpdatedContactInfo();
                contactManager.editContact(nameToEdit, updatedContact);
                break;
            }
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
