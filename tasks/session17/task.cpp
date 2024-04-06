#include<iostream>
#include<vector>

template<typename A, typename B, typename C>
struct Pair
{
    A fstPrm;
    B sdPrm;
    C thPrm;
};

template<typename A, typename B, typename C>
Pair<A,B,C> makePair(A first, B second, C third)
{
    Pair<A,B,C> p;
    p.fstPrm = first;
    p.sdPrm = second;
    p.thPrm = third;
    return p;
};
int main()
{
    std::vector<Pair<int, std::string, std::string>> p;
    p.push_back(makePair<int,std::string,std::string>(12,"Ahmed","Engineer"));
    p.push_back(makePair<int,std::string,std::string>(4,"Mia","Teacher"));

    for (auto& element:p)
    {
        std::cout<< element.fstPrm << ", " << element.sdPrm <<  ", " << element.thPrm <<std::endl;
    }
    return 0;
}