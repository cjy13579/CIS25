# CIS25 Week 5




// item.cpp
1. Define Item class
   It contains:

A string: name 

An int: quantity  

A method to save data to a file

A method to load and print data from the file

2. Methods
  1. saveToFile():
   It opens a file named items.txt, writes the item's information into the file, then displays "Item saved to file." if successful
  2. loadFromFile()
   It opens the file "imems.txt", read each line from the file, and prints the contents to the console.

3. Main funtion
   1. It creates a new object of the class Item.
   2. Set values to the variables
   3. Saves the item to the file and loads the file to display the content.
  


// product.cpp
1. Defines Product class
   The class contains three private data members:

int id

string name

double price

2. Constructor Initialization
When a Product object is created, the constructor: Sets the product’s ID, name, and price. Then prints "Product created." to confirm creation

3. Destructor Execution
When the object goes out of scope, the destructor automatically runs, printing:"Product is destroyed."

4. printDetails() Method
   This function displays all product information, including id, name and price.

5. Main function
   In the main function, use the constructor to initialize a new object, and uses the printDetails() method to print out the product information. 
   
   

