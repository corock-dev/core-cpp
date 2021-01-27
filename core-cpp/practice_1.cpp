#include <iostream>
using namespace std;

int main() {
  int a;
  char grade;
  string s;
  cin >> a;
  cin >> s;
  if(a>=90&&a<=100)
  {
    grade ='A';
    cout << s <<"학생의 점수는" << a<<"이고 학점은" <<grade <<"이다."<<endl;
    }
  else if(a>=80&&a<90)
  {
    grade ='B';
    cout << s <<"학생의 점수는" << a<<"이고 학점은" <<grade <<"이다."<<endl;
    }
  else if(a>=70&&a<80)
  {
    grade ='C';
    cout << s <<"학생의 점수는" << a<<"이고 학점은" <<grade <<"이다."<<endl;
    }
    else if(a>=60&&a<70)
  {
    grade ='D';
    cout << s <<"학생의 점수는" << a<<"이고 학점은" <<grade <<"이다."<<endl;
    }
    else
    {
    grade ='F';
    cout << s <<"학생의 점수는" << a<<"이고 학점은" <<grade <<"이다."<<endl;
    }

return 0;
}
