#include <iostream>
using namespace std;
int main()
{
    int i,a[3][3],b[3][1],j,sum=0;
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
                if(i==j)
                {
                sum=sum+a[i][j];
                }
            }
        }
    cout << sum;
}
