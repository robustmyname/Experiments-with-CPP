#include <stdexcept>
#include <iostream>
#include <vector>

int findMaxSum(const std::vector<int> &numbers)
{
    // throw std::logic_error("Waiting to be implemented");

    // Make sure at least two numbers are there in the vector
    const int numbersSize = numbers.size();
    // if (numbersSize == 0)
    // {
    //     return 0;
    // }
    // else if (numbersSize == 1)
    // {
    //     return numbers.at(0);
    // }
    // else
    {
        int firstHighest, secondHighest;

        if (numbers[0] > numbers[1])
        {
            firstHighest = numbers[0];
            secondHighest = numbers[1];
        }
        else
        {
            firstHighest = numbers[1];
            secondHighest = numbers[0];
        }

        // Find first and second largest elements in overall array
        for (int i = 2; i < numbersSize; ++i)
        {
            if (numbers[i] > firstHighest)
            {
                secondHighest = firstHighest;
                firstHighest = numbers[i];
            }
            else if (numbers[i] > secondHighest && numbers[i] != firstHighest) {
                secondHighest = numbers[i];
            }                
        }
        return (firstHighest + secondHighest);
    }
}

#ifndef RunTests
int main()
{
    std::vector<int> v{5, 9, 7, 11};
    std::cout << findMaxSum(v);
}
#endif