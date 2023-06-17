#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    
vector<vector<char>> staircase;
vector<char> temp(n);
int rowNum=0;

if(n<=0 || n>100){
    return;
}

for(int r=0; r<n; r++)
{   
  for(int c=n-1;c>=(n-1)-rowNum;c--)
  {
    temp[c]='#';
  }   
  staircase.push_back(temp); 
  rowNum++;
  
}

for(int r=0; r<n; r++)
{
  for(int c=0;c<n;c++)
  {
    cout<<staircase[r][c];
  } 
  cout<<'\n';
}
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
