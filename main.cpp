#include "TBook.h"
#include <iostream>

int main() {
    TBook book("The Catcher in the Rye", "J.D. Salinger", 1951);
    std::cout << "Title: " << book.title << std::endl;
    std::cout << "Author: " << book.author << std::endl;
    std::cout << "Year: " << book.year << std::endl;
    return 0;
}
