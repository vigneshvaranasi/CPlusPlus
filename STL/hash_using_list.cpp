#include <iostream>
#include <list>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
struct Data {
    int key;
    int value;
};
vector<list<Data>> array;
int capacity = 10;
int ::size = 0;

int hashcode(int key) {
    return key % capacity;
}

void init_array() {
    ::array.resize(capacity);
}

void insert(int key) {
    int index = hashcode(key);

    for (auto &element : ::array[index]) {
        if (element.key == key) {
            cout << "\n Key (" << key << ") already present, hence updating its value \n";
            element.value += 1;
            return;
        }
    }

    ::array[index].push_back({key, 1});
    ::size++;
    cout << "\n Key (" << key << ") has been inserted \n";
}

void remove_element(int key) {
    int index = hashcode(key);

    for (auto it = ::array[index].begin(); it != ::array[index].end(); ++it) {
        if (it->key == key) {
            ::array[index].erase(it);
            ::size--;
            cout << "\n Key (" << key << ") has been removed \n";
            return;
        }
    }

    cout << "\n This key does not exist \n";
}

void display() {
    for (int i = 0; i < capacity; i++) {
        if (!::array[i].empty()) {
            cout << "\n array[" << i << "] has elements -:\n";
            for (const auto &element : ::array[i]) {
                cout << " key(" << element.key << ") and value(" << element.value << ")\t";
            }
        } else {
            cout << "\n array[" << i << "] has no elements \n";
        }
    }
}

int size_of_hashtable() {
    return ::size;
}

int main() {
    int choice, key, n, c;
    init_array();
    do {
        cout << "\n Implementation of Hash Table in C++ \n\n";
        cout << "MENU-:  \n1.Inserting item in the Hash Table"
                  << "\n2.Removing item from the Hash Table"
                  << "\n3.Check the size of Hash Table"
                  << "\n4.Display a Hash Table"
                  << "\n\n Please enter your choice -:";

        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Inserting element in Hash Table\n";
            cout << "Enter key -:\t";
            cin >> key;
            insert(key);

            break;

        case 2:
            cout << "Deleting in Hash Table \n Enter the key to delete-:";
            cin >> key;
            remove_element(key);

            break;

        case 3:
            n = size_of_hashtable();
            cout << "Size of Hash Table is-:" << n << "\n";

            break;

        case 4:
            display();
            break;

        default:

            cout << "Wrong Input\n";
        }

        cout << "\n Do you want to continue-:(press 1 for yes)\t";
        cin >> c;

    } while (c == 1);

    return 0;
}