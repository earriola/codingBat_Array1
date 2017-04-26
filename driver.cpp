#include <iostream>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;

bool firstLast6(vector<int> nums);
bool sameFirstLast(vector<int> nums);

int main()
{
 /*   vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(6);
    assert(firstLast6(a));
    
    a.clear();
    
    a.push_back(6);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    assert(firstLast6(a));
    
    a.clear();
    
    a.push_back(13);
    a.push_back(6);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    assert(!firstLast6(a));
    
    a.clear();
    
    a.push_back(4);
    a.push_back(5);
    a.push_back(7);
    a.push_back(6);
    a.push_back(14);
    assert(!firstLast6(a));
    
    a.clear();
    
    a.push_back(6);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    assert(firstLast6(a));
*/    
    
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    assert(!sameFirstLast(a));
    
    a.clear();
   
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    assert(sameFirstLast(a));
    
    a.clear();
   
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    assert(sameFirstLast(a));
    
    a.clear();
   
    a.push_back(3);
    a.push_back(2);
    a.push_back(3);
    assert(sameFirstLast(a));
    
    a.clear();
   
    a.push_back(1);
    a.push_back(1);
    a.push_back(3);
    assert(!sameFirstLast(a));
    
    a.clear();
   
    
    return 0;
}

bool firstLast6(vector<int> nums)
{
    if ((nums.at(0) == 6) || (nums.at(nums.size() - 1) == 6))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool sameFirstLast(vector<int> nums)
{
    if(nums[0] == nums[nums.size() - 1] )
    {
        return true;
    }
    return false;
}

