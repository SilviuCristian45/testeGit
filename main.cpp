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

    return 0;
}
