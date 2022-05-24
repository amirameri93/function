#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h;
	cout<<"saale tavalod ra vared konid";
	cin>>a;
	b=1400-a;
	cout<<"maahe tavalod ra vared konid";
	cin>>c;
	cout<<"alan che maahi ast?";
	cin>>g;
	cout<<"che roozi be donya amadid?";
	cin>>e;
	cout<<"emroz che roozi ast?";
	cin>>h;
	if(e>h)
	{
		d=g-c-1;
		f=30+h-e;
			}else(e<=h);
			{
				d=g-c;
				f=h-e;
			}

	cout<<b<<" saal va "<<d<<" maah va "<<f<<" rooz darid.";
	
	
	
	
	
	
	return 0;
}