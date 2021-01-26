#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main()
{
    vector <string> x = {"adi","test","xd"};
    x.emplace(begin(x),5,'A');
    for(auto p : x)
        cout << p << " ";
    cout << endl;
    //ppppppppppppppppppppppppppppppppppppppppppppp
    array <int,5> y;

    for(int i = 0; i < y.size(); i++)
        y.at(i) = i;

    for(int i = 0; i < y.size(); i++)
        cout << y.at(i) << " ";
    return 0;
}
