
#include <iostream>

struct Restaurant
{
    int quantity;
    std::string Address;
    double discount; 
    bool price;
    int Rating; 
};

int main() {
   
    
    Restaurant Mcdonalds = { 100, "123, Mcdonalds Str", .05, true, 22};
    std::cout<< "quantity: "<< Mcdonalds.quantity << std::endl;
    std::cout<< "Addres: "<< Mcdonalds.Address << std::endl;
    std::cout<< "discount: "<< Mcdonalds.discount << std::endl;
    std::cout<< "price: "<< Mcdonalds.price << std::endl;
    std::cout<< "rating: "<< Mcdonalds.Rating << std::endl;

    return 0;
}

