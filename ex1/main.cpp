#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include <unordered_map>
#include<map>
#include<unordered_set>
#include<set>
#include <algorithm>

// defining your type
typedef std::map<std::string, int>::iterator mytype;

// passing a reference to the function
int someFunc (const std::vector<int> &a)
{

}

int main ()
{
    std::vector<int> vector = {1, 2, 6, 9, 7, 8, 3, 4, 5};
    // iterating over container in c++
    for (size_t index = 0; index < vector.size (); ++index)
    {
        std::cout << vector[index] << " ";
    }
    std::cout << std::endl;

    // range-based iteration over container in c++
    for (int element : vector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // using iterators
    for (std::vector<int>::iterator it = vector.begin (); it != vector.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;


    // Logarithmic complexity
    std::set<std::string> set;
    std::map<std::string, int> map;
    map["one"] = 1;

    // Constant complexity
    std::unordered_set<std::string> unordered_set;
    std::unordered_map<std::string, int> umap;

    // Searching
    if (set.find ("two") != set.end ())
    {
        // element exists
    }

    mytype it = map.find ("one");
    if (it != map.end ())
    {
        std::cout << (*it).first << " " <<(*it).second << std::endl;
    }

    // Sorting vector
    std::sort(vector.begin (), vector.end ());

    // range-based iteration over container in c++
    for (int element : vector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
