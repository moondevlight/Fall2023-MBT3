#include <iostream>
using namespace std;
const int n=2;
//if we want 3*3 matrix we can put 3 instead of 2
class matrix 
{
  int x[n][n];
  public:
  matrix();
  void input();
  matrix addition(matrix y);
  matrix subtraction(matrix y);
  matrix multipication(matrix y);
  matrix inverse();
  void print();
};
matrix::matrix()
{
   for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         x[i][j]=0;
}
void matrix::input()
{
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
     {
        cout<<"enter number";
        cin>>x[i][j];
     }
}
matrix matrix::addition(matrix y)
{
    matrix c;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        c.x[i][j]=x[i][j]+y.x[i][j];
    return c;
}
matrix matrix::subtraction(matrix y)
{
    matrix c;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        c.x[i][j]=x[i][j]-y.x[i][j];
    return c;
}
matrix matrix::multipication(matrix y)
{
    matrix c;
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          for(int k=0;k<n;k++)
              c.x[i][j]+=x[k][i]*y.x[j][k];
    return c;
}
matrix matrix::inverse()
{
  matrix c;
  for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
        c.x[i][j]=x[j][i];
  return c;
}
void matrix::print()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix m1,m2,addition,subtraction,multipication,inverse;
    m1.input();
    m2.input();
    addition=m1.addition(m2);
    cout<<"addition is : "<<endl;
    addition.print();
    cout<<endl;
    subtraction=m1.subtraction(m2);
    cout<<"subtraction is : "<<endl;
    subtraction.print();
    cout<<endl;
    multipication=m1.multipication(m2);
    cout<<"multipication is : "<<endl;
    multipication.print();
    cout<<endl;
    inverse=m1.inverse();
    cout<<"inverse matrix 1 is : "<<endl;
    inverse.print();
    return 0;
}
