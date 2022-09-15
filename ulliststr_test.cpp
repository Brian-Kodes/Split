/* Write your test code for the ULListStr in this file */

#include <iostream>
#include "ulliststr.h"
using namespace std;


int main(int argc, char* argv[])
{
ULListStr dat;
//dat.push_back(7);
//dat.push_front("5");
//dat.push_front("6");
//dat.push_front("7");
//dat.push_back("9");
//dat.push_back ("8");
//dat.pop_back();
//dat.pop_back();
//cout << dat.get(0) << " " << dat.get(1) << " " << dat.get(2) << " " << dat.back() << endl;
// prints: 8 7 9
//cout << dat.size() << endl;  // prints 3 since there are 3 strings stored
for (int i = 0; i < 20; i++)
{
  dat.push_front ("1");
  dat.pop_front();
}
dat.push_front("PushF and PopF");
cout << dat.front() << endl;
for (int i = 0; i < 40; i++)
{
  dat.push_back("2");
  dat.pop_back();
}
dat.push_back ("PushB and PopB");
cout << dat.back() << endl;
for (int i = 0; i < 40; i++)
{
  dat.push_back ("3");
  dat.pop_front();
}
dat.push_back ("PushB and PopF");
cout << dat.back() << endl;
for (int i = 0 ; i < 40; i++)
{
  dat.push_front("4");
  dat.pop_back();
}
dat.push_front ("PushF and PopB");
//cout << dat.front() << endl;
cout << "hello" << endl;
for (int i = 0; i < 11; i++)
{
  dat.push_front("1");
}
dat.push_front("3");
dat.push_back("5");
cout << dat.front() << endl;
cout << dat.back() << endl;
cout << dat.get(0);


for (int i = 0; i < 11; i++)
{
  dat.push_back("2");
}
dat.push_front("6");
dat.push_back("7");
cout << dat.front() << endl;
cout << dat.back() << endl;
cout << dat.size() << endl;
cout << dat.get(11) << endl;


for (int i = 0; i < 20; i++)
{
  dat.push_back("2");
  dat.pop_back();
  dat.push_back("3");
}

cout << dat.front() << endl;

  return 0;


for (int i = 0; i < 20; i++)
{
  dat.push_front("2");
  dat.pop_front();
  dat.push_front("3");
}
cout << dat.back() << endl;
return 0;
}