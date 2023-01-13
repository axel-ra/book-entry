#ifndef PAPERBACK_H
#define PAPERBACK_H
#include "book.h"

class paperback : public Book {
    private:
        int id;
        int pages;
        
    public:
        void setID(int );
        void setPages(int );
        int getID();
        int getPages();
        void print();
        void input();
};

#endif