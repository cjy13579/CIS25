#include <iostream>
#include <string>

using namespace std;

class Product{
    private:
        int id;
        string name;
        double price;
    public:
        Product(int id, string name, double price){
            this -> id = id;
            this -> name = name;
            this -> price = price;
            cout << "Product created." << endl;
        }
        ~Product(){
           cout <<  "Product is destroyed." << endl;
        }
        
        void printDetails(){
            cout << "The product name is: " << name << endl;
            cout << "The product id is: " << id << endl;
            cout << "The product price is: " << price << " dollar."<< endl;
        }
};

int main(){
    Product product1(1001, "MacBook", 1299.99);
    product1.printDetails();

    return 0;
}