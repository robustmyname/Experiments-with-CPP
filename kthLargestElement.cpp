#include <queue>

void findKthLargestElement() {
    // Syntax for maxHeap
    // The second and third arguments are by default.
    std::priority_queue<int> maxHeap1;
    std::priority_queue<int, std::vector<int>, std::less<int>> maxHeap2;

    // Syntax for Max heap takes greater comparator
    // Additionally second default parameter needs to be overridden
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
}

int main() {
    return 0;
}