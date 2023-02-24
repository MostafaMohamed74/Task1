#include <iostream>
#include <vector>

long getSum(std::vector<int> &vect)
{
    long sum = 0;
    for (int num : vect)
    {
        sum += num;
    }
    return sum;
}

long getAvg(std::vector<int> &vect)
{
    return (getSum(vect) / vect.size());
}

int getMin(std::vector <int> &vect)
{
    int min = vect[0];
    for (int num : vect)
    {
        if (num < min)
            min = num;
    }
    return min;
} 

int main()
{
    std::vector<int> nums{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    std::cout << "sum is : " << getSum(nums) << std::endl;
    std::cout << "avg is : " << getAvg(nums) << std::endl;
    std::cout<< "Min is :" <<getMin(nums) << std::endl;
}