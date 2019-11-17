#include "myMath.h"
#define e 2.718281828

double Pow(double x,int y)
{
    int i=0,howMany=0;
    double ans=1;

    if(y<0)
      {
          howMany=-1*y;
      }
    else
      {
          howMany=y;
      }
      
    for(i=0;i<howMany;i++)
    {
        ans=ans*x;
    }

    if(y>=0) 
    {
       return ans;
    }
    else
    {
        double ans1=0;
        ans1=(1/ans);
        return ans1;
    }

}

double Exp(int x)
{
    int i=0,howMany=0;
    double ans=1;

    if(x<0)
      {
          howMany=-1*x;
      }
    else
      {
          howMany=x;
      }
      
    for(i=0;i<howMany;i++)
    {
        ans=ans*e;
    }
    if(x>=0) 
    {
       return ans;
    }
    else
    {
        double ans1=0;
        ans1=(1/ans);
        return ans1;
    }
  
   
    
}

