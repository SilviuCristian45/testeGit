#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <string> x = {"adi","test","xd"};
    x.emplace(begin(x),5,'A');
    for(auto p : x)
        cout << p << " ";
    cout << endl;

    return 0;
}
