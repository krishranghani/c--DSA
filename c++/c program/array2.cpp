#include <iostream>
using namespace std;
int main()
{
    int i,a[3][3],j,sum=0;
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=2;j++)
      {
        cin >> a[i][j];
      }
    }
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                sum=sum+a[i][j];
            }
        }
    cout << sum;
    cout << "\n";
}
