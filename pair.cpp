#include <iostream>
#include <stdlib.h>
using namespace std;

void pairing(int *a, int n)
    {
        int z=0,q=100,t,r,s;
        for (int p=0;p<100;p++)
        {
            for (int i = 0; i < n-1; i++)
            {
                for (int j = i+1; j< n; j++)
                {
                    if (p== abs(a[i]+a[j]))
                    {
                        t=abs(abs(a[i])-abs(a[j]));
                        if(t<q)
                        {
                            q=t;
                            r=a[i];
                            s=a[j];
                        }
                        z++;

                    }
                }
            }
            if (z>0)
            {
                cout<<"The required pair is:"<<endl;
                cout<<"["<<r<<","<<s<<"]";
                return;
            }
            
        }
    }

int main()
    {
        int n;
        cout<<"Enter the size of array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array"<<endl;
        for (int i=0;i<n; i++) cin>>a[i];
        pairing(a,n);
    }
