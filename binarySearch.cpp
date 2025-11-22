#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(Item arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid].id == target)
            return mid;
        else if (arr[mid].id < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    const int SIZE = 100;

    
    Item* items = new Item[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        items[i].id = i + 1;  
        items[i].name = "Item_" + to_string(i + 1);
    }

    
    int searchID;
    cout << "Enter an ID to search (1 - 100): ";
    cin >> searchID;

    
    int index = binarySearch(items, SIZE, searchID);


    if (index != -1) {
        cout << "Found item:" << endl;
        cout << "Name: " << items[index].name << endl;
        cout << "ID: " << items[index].id << endl;
    } else {
        cout << "Item with ID " << searchID << " not found." << endl;
    }
    delete[] items;

    return 0;
}
