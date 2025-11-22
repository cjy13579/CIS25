# CIS25 Week 6

1. Struct Definition
   creating a struct named Item with two variables:
   1. String name
   2. int id
  
2. Binary Search Method
   Return the index of the finding item

3. Dynamic Memory Allocation

The program uses: new Item[size] to dynamically allocate an array of 100 items.

4. Data Population

The array is filled with sample data:

IDs range from 1 to 100.  Names are in alphabetical order: Item_1, Item_2, … Item_100 which is sorted by name.

5. User Input

The program asks the user to enter an ID number (1–100). 
The binary search runs and the program prints either:
The matching item’s name and ID, or A message indicating the item was not found

6. Memory Deallocation

After the search is completed and the result is displayed, the allocated memory is freed using: delete[] items;

   
