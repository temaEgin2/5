#ifndef TBOOK_H
#define TBOOK_H

#include <string>

class TBook {
public:
    std::string title;
    std::string author;
    int year;
    TBook(std::string t, std::string a, int y);
};

#endif
