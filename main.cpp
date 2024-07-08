#include<iostream>
using namespace std;

void a(int w, int h);
void s(int w, int h);
void b(int w , int h);

int main()
{
    b(10,10);

    cout<<endl<<endl<<endl;
}

void b(int w , int h)
{
    for (int i = 0; i < h; ++i) {
        cout << "*"; 

        for (int j = 0; j < w; ++j) {
            if ((i == 0 || i == h - 1 || i == h/2) && j < w - 1) {
                std::cout << "*";
            }
            // Print the right side of the B
            else if (j == w - 1 && i != 0 && i != h - 1 && i != h/2) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        std::cout <<endl;
    }


}


void a(int w, int h)
{
    for(int i=0;i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (i==0)||
                (i==(h/2))||
                (j==0)||
                (j==w-1)
            ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
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