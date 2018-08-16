#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
  
    vector<int> vect;

    stringstream ss(str);

    int i;

    while (ss >> i)
    {
        vect.push_back(i);

        if (ss.peek() == ',')
            ss.ignore();
    }

    for (i=0; i< vect.size(); i++)
        cout << vect.at(i)<<endl;
}

