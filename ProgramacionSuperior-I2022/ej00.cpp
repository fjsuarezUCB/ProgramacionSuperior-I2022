#include <iostream>
#include <vector>
#include <string>

// using std::cout;
// using std::vector;
// using std::string;

using namespace std;

int main_0()
{

    vector<string> msg{ "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!" };

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}