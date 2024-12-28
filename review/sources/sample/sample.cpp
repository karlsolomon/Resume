#include <algorithm>  // For std::sample
#include <random>     // For std::random_device, std::mt19937
#include <ranges>     // For std::ranges::sample
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> result(5);

    // Using std::sample to randomly select 5 elements
    std::random_device rd;
    std::mt19937 gen(rd());
    std::sample(numbers.begin(), numbers.end(), result.begin(), 5, gen);
    // Result: result = {?, ?, ?, ?, ?} (random selection of 5 elements)

    // Using std::ranges::sample to randomly select 5 elements
    std::ranges::sample(numbers, result.begin(), 5, gen);
    // Result: result = {?, ?, ?, ?, ?} (random selection of 5 elements)

    return 0;
}
