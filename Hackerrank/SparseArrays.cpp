#include <iostream>
#include <algorithm>    // std::count
#include <vector>
using namespace std;

int main (int args, char *argc[])
{
    int inputSize, querySize; std::vector<std::string> _searchList, _queryList;
    cin>>inputSize; // get the size of a container.

    while (inputSize != 0)
    {
        string input; 
        cin>>input;
        _searchList.push_back(input);
        inputSize--;
    }//store data into the search list.

    cin>>querySize;

    while (querySize != 0)
    {
        string query;
        cin>>query;
        _queryList.push_back(query);
        querySize--;
    }// query list
    //search for list
    for (int i = 0; i < _queryList.size(); ++i){
          int cnt = count(_searchList.begin(), _searchList.end(), _queryList.at(i));
          cout << cnt << endl; 
    }
    return 0;
}