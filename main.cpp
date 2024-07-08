#include<iostream>
using namespace std;


void s(int w, int h);

int main()
{

}

void s(int w , int h)
{
    for(int i = 0; i< h ; i++)
    {
        for(int j = 0; j< w; j++)
        {
            if(
                (i==0)||
                (i==(h/2))||
                (i==h-1)||
                (j==0 && i<(h/2))||
                (j==w-1 && i>(h/2))
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}