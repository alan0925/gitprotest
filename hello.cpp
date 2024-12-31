#include <iostream>
using namespace std;
int main()
{
  for (int i = 0; i < 3; i++)
    []()
    { cout << "hello\n"; }();
  cout<<"Hello!  from remote!"<<endl;  
  cout<<"Hello!  from local"<<endl;
  return 0;
}
