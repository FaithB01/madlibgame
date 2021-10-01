#include <iostream>

using namespace std;

int main()
{
  string color, pluralNoun, celebrity;
  cout << "Enter color:";
  getline(cin, color);
  cout << "Enter Plural Noun:";
  getline(cin, pluralNoun);
  cout << "Enter Clebrity:";
  getline(cin, celebrity);

  cout << "Roses are  " << color << endl;

  cout << pluralNoun << "  are blue" << endl;

  cout << "I love  " << celebrity << endl;
}