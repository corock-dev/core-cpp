#include <iostream>
using namespace std;

int main() {
  int a,i;
  char grade;
  string s;

  for(i=0;i<4;i++){
  cout <<"Enter a name and score\n";
  cin >> s;
  cin >> a;
  if(a>=90&&a<=100)
  {
    grade ='A';
    cout << "Hi " <<s<<"! Your grade is " <<grade <<endl;
    }
  else if(a>=80&&a<90)
  {
    grade ='B';
   cout << "Hi " <<s<<"! Your grade is " <<grade <<endl;
    }
  else if(a>=70&&a<80)
  {
    grade ='C';
    cout << "Hi " <<s<<"! Your grade is " <<grade <<endl;
    }
    else if(a>=60&&a<70)
  {
    grade ='D';
    cout << "Hi " <<s<<"! Your grade is " <<grade <<endl;
    }
    else
    {
    grade ='F';
    cout << "Hi " <<s<<"! Your grade is " <<grade <<endl;
    }
  }
  cout<<"Bye Elsa";
return 0;
}
