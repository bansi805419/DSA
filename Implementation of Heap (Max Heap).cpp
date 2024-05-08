#include <iostream>
#include <vector>

class MaxHeap {
private:
    std::vector<int> heap;

    void heapify(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }

        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }

        if (largest != index) {
            std::swap(heap[index], heap[largest]);
            heapify(largest);
        }
    }

public:
    void insert(int data) {
        heap.push_back(data);
        int index = heap.size() - 1;
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
            std::swap(heap[(index - 1) / 2], heap[index]);
            index = (index - 1) / 2;
        }
    }

    int extractMax() {
        if (heap.empty()) {
            std::cerr << "Heap is empty!\n";
            return -1;
        }
        int maxVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
        return maxVal;
    }
};

int main() {
    MaxHeap maxHeap;
    maxHeap.insert(5);
    maxHeap.insert(10);
    maxHeap.insert(3);
    maxHeap.insert(8);

    std::cout << "Max element: " << maxHeap.extractMax() << std::endl;

    return 0;
}
