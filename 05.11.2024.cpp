#include <iostream>
#include <vector>

class functor_test {
public:
    functor_test() : sum(0), count(0) {}
    void operator()(int number) {
        if (number % 3 == 0) {
            sum += number;
            count++;
        }
    }
    int getSum() const { return sum; }
    int getCount() const { return count; }
private:
    int sum;
    int count;
};

int main() {
    functor_test counter;
    std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };
    for (int num : numbers) {
        counter(num);
    }
    int resultSum = counter.getSum();
    int resultCount = counter.getCount();
    std::cout << "count of divaded by 3: " << resultSum << std::endl;
    std::cout << "count all elements: " << resultCount << std::endl;

    return 0;
}