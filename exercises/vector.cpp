#include <iostream>
#include <vector>
using namespace std;


int main()
{
auto valid_days = vector<char>(5, 'e');

auto myCalificaciones = vector<int>{};

myCalificaciones.push_back(77);
myCalificaciones.push_back(77);
myCalificaciones.push_back(77);
myCalificaciones.push_back(77);

for(auto var : myCalificaciones)
{
  cout<<var<<"\n";
}

    return 0;
}