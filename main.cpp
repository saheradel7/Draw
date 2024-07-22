#include<iostream>
using namespace std;

void a(int w , int h);
void s(int w , int h);
void b(int w , int h);
void c(int h , int w);
void d(int h , int w);
void e(int w , int h);
void f(int w , int h);
void g(int h , int w);
void h(int h , int w);
void i(int h , int w);
void j(int h , int w);
void k(int h , int w);
void l(int h , int w);
void m(int h , int w);
void n(int h , int w);

int main()
{
    m(14,14);

    cout<<endl<<endl<<endl;
}

void m(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==0)
                ||(j==w-1)
                ||(j==i+1 && j<=w/2)
                ||(j==w-(i+1) && j>w/2)
            
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}

void n(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==0)
                ||(j==w-1)
                ||(j==i)
            
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}

void l(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==0)
                ||(i==h-1)
            
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}
void k(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==0)
                ||(j==(h/2)-(i))
                ||(i>h/2 && j==(h/2)+(i-h))
            
            )
            {
                cout<<"*";
            }
            else{
                cout<<"  ";
            }
        }
        cout<< endl;
    }
}

void j(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==w/2)
                ||(i==0 && j ==(w/2)+1)
                ||(i==0 && j ==(w/2)-1)
                ||(i==0 && j ==(w/2)+2)
                ||(i==0 && j ==(w/2)-2)
                ||(j==0 && i>h-(h/3))
                ||(i==h-1 && j < w/2)
            
            
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}

void i(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==w/2)
                ||(i==0 && j ==(w/2)+1)
                ||(i==0 && j ==(w/2)-1)
                ||(i==h-1 && j ==(w/2)+1)
                ||(i==h-1 && j ==(w/2)-1)
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}


void h(int h , int w)
{
    for(int i = 0 ; i<h ; i++)
    {
        for(int j =0 ; j< w ; j++)
        {
            if(
                (j==0)
                ||(j ==w-1)
                ||(i==h/2)
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}

void g(int h, int w)
{
    for(int i =0 ; i<h; i++)
    {
        for(int j =0 ;j<w;j++)
        {
            if(
                (i==0)
                ||(i==h/2 && j>w/2)
                ||(i==h-1)
                ||(j==0)
                ||(i>h/2 && j==w-1)
            )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


void f(int w,int h)
{
    for(int i =0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(
                (i==0)
                ||(i==h/2)
                ||(j==0)
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
void e(int w, int h)
{
    for(int i =0 ; i<h ;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(
                (i==0)
                ||(i==h/2)
                ||(i==h-1)
                ||(j==0)
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


void d(int h , int w)
{
    for(int i = 0 ; i<h/2;i++)
    {
        cout<<"*";
        for(int j =0;j<w;j+=w)
        {
            for (int x=0;x<=i;x+=1)
            {
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=h/2;i>=0;i--)
    {
        cout<<"*";
        for(int x= i ; x>0;x--)
        {
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    }
}

void c(int h, int w){
    for(int i =0 ; i<h ; i++)
    {
        for(int j = 0 ; j< w; j++)
        {
            if(
                (i==0)
                ||(i==h-1)
                ||(j==0)
            )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
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
        cout <<endl;
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