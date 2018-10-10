#include <iostream>
using namespace std;
int main()
{
   
   int score;
   
   
   cout  << "Enter a score: ";
   cin >> score;
   if (score >= 86 )
    cout << "Grade = 'A'";
    else if (score >= 72)
    cout << "Grade = 'B'";
    else if (score >= 60)
    cout << "Grade = 'C'";
    else if (score >= 50)
    cout << "Grade = 'D'";
    else 
    cout << "Grade = 'F'"; 




    return 0;
}
