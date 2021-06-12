# include<stdlib.h>

#include<conio.h>
#include<iostream>
using namespace std;
int x=12,y=12,t;
int fx,fy;
char ch;

void addframe()
{
	system("cls");
	srand(5);
	fx=rand()%24;
	fy=rand()%24;
	int i,j,k;
	for(i=0;i<8;i++)
	{
		   	for(j=0;j<72;j++)
			cout<<" ";
			if(i!=7)
			cout<<endl;
	}


    for(i=0;i<24;i++)
    {  
    	if(i==0)
    	{
    		for(j=0;j<24;j++)
    		cout<<"*";
    		cout<<endl;
    		
		 }
          if(i==23)
          {          	
          		for(j=0;j<72;j++)
			cout<<" ";
          	for(j=0;j<24;j++)
    		cout<<"*";
          ;	
		  }
		else
		{
				for(j=0;j<72;j++)
			cout<<" ";
			for(j=0;j<24;j++)
			{
				if(i==y&&j==x)
				cout<<"0";
					 else if(j==(fx)&&i==(fy))
				cout<<"$";
				 else if(j==0||j==23)
				cout<<"*";
				else
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}

void move()
{

	if(kbhit())
	{
	    ch=getch();
             	switch (ch) 
				 {	
	               case 'a' :
	 	           {
	 		         t=1;
		           }break;
	               case 'd' :
		           {
			         t=2;
		           }break;
	               case 'w' :
		           {
			         t=3;
		           }break;
	               case 's' :
		           {
			         t=4;
		           }break;
	               default :
		            break;
	            }
    }   
}

void maincode()
{
	switch (t)
	{
	 case 1 :
	 	{
	        x--;
		 }break;
	case 2 :
		{
		   x++;
		}break;
	case 3 :
		{
			y--;
		}break;
	case 4:
		{
			y++;
		}break;
	}
}

int main()
{	
	while(1)
	{
	addframe();
	move();
	maincode();
   }
}
