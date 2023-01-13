#ifndef EBOOK_H
#define EBOOK_H
#include "book.h"

class ebook: public Book {
    private:
        std::string format;
        int id;

    public:
        void setFormat(std::string );
        void setID(int );
        std::string getFormat();
        int getID();
        void print();
        void input();
};

#endif