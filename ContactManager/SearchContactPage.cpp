//
//  SearchContactPage.cpp
//  ContactManager
//
//  Created by Abdulwadud Abdulkadir on 4/12/24.
//

#include "SearchContactPage.hpp"
#include <iostream>

std::string SearchContactPage::getSearchQuery() {
    std::string query;
    std::cout << "Enter name to search: ";
    std::getline(std::cin, query);
    return query;
}


