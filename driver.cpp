/*
Authors: Emmanuel Arriola, Chad Fry, Jessy Loy
Date: 26 April 2017
CodingBat Array-1 challenges

*/


#include <iostream>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;

bool firstLast6(vector<int> nums);
bool sameFirstLast(vector<int> nums);
int * makePi();
bool commonEnd(vector<int> a, vector<int> b);
int sum3(int ary[]);

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
  /*  
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
    
    a.clear();*/
   /* 
   int * pi = makePi();
   
   assert(pi[0] == 3);
   assert(pi[1] == 1);
   assert(pi[2] == 4);
   */
   
   /*
   vector<int> a;
   a.push_back(1);
   a.push_back(2);
   a.push_back(3);
   
   vector<int> b;
   b.push_back(7);
   b.push_back(3);
   assert(commonEnd(a,b));
    
   a.clear();
   b.clear();
   
   a.push_back(1);
   a.push_back(2);
   a.push_back(3);
   
   b.push_back(7);
   b.push_back(3);
   b.push_back(2);
   assert(!commonEnd(a,b));
   
   a.clear(); 
   b.clear();
   
   a.push_back(1);
   a.push_back(2);
   a.push_back(3);
   
   b.push_back(1);
   b.push_back(3);
   assert(commonEnd(a,b));
   
   a.clear(); 
   b.clear();
   
   a.push_back(5);
   a.push_back(7);
   a.push_back(29);
   
   b.push_back(3);
   b.push_back(4);
   b.push_back(5);
   assert(!commonEnd(a,b));
   
   a.clear(); 
   b.clear();
   
   a.push_back(4);
   a.push_back(8);
   a.push_back(12);
   
   b.push_back(4);
   b.push_back(1);
   b.push_back(12);
   assert(commonEnd(a,b));
   
   a.clear(); 
   b.clear();
   */
   
   int ary[] = {1, 2, 3};
   assert(sum3(ary) == 6);
   
   ary[0] = 5;
   ary[1] = 11;
   ary[2] = 2;
   assert(sum3(ary) == 18);
   
   ary[0] = 7;
   ary[1] = 0;
   ary[2] = 0;
   assert(sum3(ary) == 7);
   
   ary[0] = 1;
   ary[1] = 4;
   ary[2] = 5;
   assert(sum3(ary) == 10);
   
   ary[0] = -1;
   ary[1] = 1;
   ary[2] = 0;
   assert(sum3(ary) == 0);
   
   
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

int * makePi()
{
    int * piPtr = new int[3];
    
    *piPtr = 3;
    *(piPtr + 1) = 1;
    *(piPtr + 2) = 4;
    
    return piPtr;
}

bool commonEnd(vector<int> a, vector<int> b)
{
    if ((a.at(0) == b.at(0)) || (a.at(a.size()-1) == b.at(b.size()-1)))
    {
        return true;
    }
    return false;
}

int sum3(int ary[])
{
    int sum = 0;
    
    for (int ix = 0; ix < 3; ix++)
    {
        sum += ary[ix];
    }
    return sum;
}
