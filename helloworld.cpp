#include <iostream>

using namespace std;

int main()
{
   cout << "Hello world!" << endl; 
   char d[100];
   bool flag = false;
   cin >> d;
   for(int i = 0; d[i] != '\n'; i ++){
      if(d[i] < 48 || d[i] > 57){
         cout << "not digit!";
         flag = true;
         break;
      }
   }
   if(!flag){
      int a = atoi(d);
      cout << a + 8;
   }
   cout << endl;
   return 0;
}