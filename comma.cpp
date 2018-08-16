#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
  
    vector<char> vect;

    stringstream s(str);

    char i;

    while (s >> i)
    {
        cout<<i;
        vect.push_back(i);//

        if (s.peek() == ',')
        {
            s.ignore();
            cout<<endl;
        }
    }

   /* for (i=0; i<vect.size(); i++)
    {  cout << vect.at(i); 
      
     cout <<endl;
    }*/
}
