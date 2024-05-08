#include <iostream>
#include <vector>
#include <list>

class HashMap {
private:
    int capacity;
    std::vector<std::list<int>> table;

    int hashFunction(int key) {
        return key % capacity;
    }

public:
    HashMap(int capacity) : capacity(capacity) {
        table.resize(capacity);
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (int value : table[index]) {
            if (value == key) {
                return true;
            }
        }
        return false;
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
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
