#include <iostream>
#include "ebook.h"
#include "paperback.h"

int main(){
    std::cout << "Welcome! Please select the book type to load onto the system." << std::endl;
    std::cout << "[1] Paperback" << std::endl;
    std::cout << "[2] eBook" << std::endl;

    int choice;
    std::cin >> choice;

    if (choice!=1 && choice!=2)
        std::cout << "Invalid input. Please enter 1 or 2." << std::endl;
    
    if (choice == 1){
            paperback item;
            item.input();
    }
    else if (choice == 2){
            ebook item;
            item.input();
    }
    else
            std::cout << "Invalid input." << std::endl;
    
    return 0;
}