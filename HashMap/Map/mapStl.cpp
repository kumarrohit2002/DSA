#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m; // Default: ascending order of keys

    // Insertion
    m["rohit"] = 7;
    m["mohit"] = 8;
    m["sachin"] = 11;
    m.insert(make_pair("raju", 12));

    cout << "Size of map: " << m.size() << endl;

    m.insert(make_pair("mohit", 13)); // Duplicate keys are not insert
    cout << "Size after attempting duplicate insertion: " << m.size() << endl;

    // Traversal
    cout << "Traversal using iterator:" << endl;
    for(auto itr = m.begin(); itr != m.end(); itr++) {
        cout << itr->first << " -> " << itr->second << endl;
    }

    cout << "Traversal using range-based for loop:" << endl;
    for(auto &value : m) {
        cout << value.first << " -> " << value.second << endl;
    }

    // Deletion
    cout << "Deleting key 'sachin':" << endl;
    m.erase("sachin"); // Erase by key
    for(auto &value : m) {
        cout << value.first << " -> " << value.second << endl;
    }

    cout << "Deleting element at position 2 (iterator):" << endl;
    auto itr = m.begin();
    advance(itr, 1); // Move to the second element
    m.erase(itr); // Erase by position
    for(auto &value : m) {
        cout << value.first << " -> " << value.second << endl;
    }

    // Adding more elements
    m["amit"] = 20;
    m["rahul"] = 15;
    m["john"] = 25;

    cout << "After adding new elements:" << endl;
    for(auto &value : m) {
        cout << value.first << " -> " << value.second << endl;
    }

    // Deleting a range
    cout << "Deleting a range (from position 1 to 3):" << endl;
    auto start = m.begin();
    auto end = m.begin();
    advance(start, 1); // Start from the second element
    advance(end, 3);   // End before the fourth element
    m.erase(start, end); // Erase range
    for(auto &value : m) {
        cout << value.first << " -> " << value.second << endl;
    }

    return 0;
}
