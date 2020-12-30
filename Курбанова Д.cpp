
   #include <iostream>

using namespace std;

void display (int (*a), int n)
{
    for (int i=0; i < n; i++)
    {
        cout << a[i];
    }
}

void mass (int (*a), int n)
{
   int prev = 0;
   for (int i=0; i < n; i++)
   {

      if (a[i] == prev)
       {
         cout << 0;
        }
     else
      {
        cout << 1;
      }
      prev = a[i];
}
}
int main()

   {
       int n = 6;
    int  a[n] = {0,1,1,0,1,0};
    display(a,n);
    cout << endl;
    mass(a,n);

    return 0;
   }




