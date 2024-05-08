#include <iostream>
#include <vector>

class HashMap {
private:
    int capacity;
    std::vector<int> table;

    int hashFunction(int key) {
        return key % capacity;
    }

public:
    HashMap(int capacity) : capacity(capacity) {
        table.resize(capacity, -1);
    }

    void insert(int key) {
        int index = hashFunction(key);
        while (table[index] != -1) {
            index = (index + 1) % capacity;
        }
        table[index] = key;
    }

    bool search(int key) {
        int index = hashFunction(key);
        while (table[index] != -1) {
            if (table[index] == key) {
                return true;
            }
            index = (index + 1) % capacity;
        }
        return false;
    }

    void remove(int key) {
        int index = hashFunction(key);
        while (table[index] != -1 && table[index] != key) {
            index = (index + 1) % capacity;
        }
        if (table[index] == key) {
            table[index] = -1;
        }
    }
};

int main() {
    HashMap hashMap(10);
    hashMap.insert(10);
    hashMap.insert(20);
    hashMap.insert(30);
    std::cout << "Is 20 present: " << std::boolalpha << hashMap.search(20) << std::endl;
    hashMap.remove(20);
    std::cout << "Is 20 present after removal: " << std::boolalpha << hashMap.search(20) << std::endl;
    return 0;
}
