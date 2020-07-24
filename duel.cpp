#include<iostream>
#include<string.h>
using namespace std;
class Health{
	public:
	static int Health_1;//turn=0
	static int Health_2;//turn=1
	static int tries_1;
	static int tries_2;
	static int refill_1;
	static int refill_2;
};
int Health::Health_1=100;
int Health::Health_2=100;
int Health::tries_1=0;
int Health::tries_2=0;
int Health::refill_1=1;
int Health::refill_2=1;
class Spells
{
	public:
  	void A()
  	{   if(Health::tries_1<=3)
  	{
  	    if(Health::Health_2>=24)
		  {
  		Health::Health_2=Health::Health_2-24;
	  }
	  else
	  {
	  	Health::Health_2=0;
	  }
}
}
   void a()
   {
     if(Health::tries_2<=3)
    {
        if(Health::Health_1>=24)
		  {
  		Health::Health_1=Health::Health_1-24;
	  }
	  else
	  {
	  	Health::Health_1=0;
	  }	
	   Health::tries_2++;
}
}
  	void B()
  	{   
	  if(Health::tries_1<=3)
  	{
  	    if(Health::Health_2>=34)
		  {
  		Health::Health_2=Health::Health_2-34;
	  }
	  else
	  {
	  	Health::Health_1;
	  }
}
}
    void b()
    {
 if (Health::tries_2<=3)
{
if(Health::Health_1>=24)
		  {
  		Health::Health_1=Health::Health_1-34;
	  }	
}
}
  	void C()
  	{   if(Health::tries_1<=3)
  	{
  	    if(Health::Health_2>=40)
		  {
  		Health::Health_2=Health::Health_2-40;
	  }
	  else
	  {
	  	Health::Health_2=0;
	  }
	   Health::tries_1++;
}  
}
    void c()
    {
  if (Health::tries_2<=3)
{
if(Health::Health_1>=40)
		  {
  		Health::Health_1=Health::Health_1-40;
	  }
	  else
	  {
	  	Health::Health_1=0;
	  }	
}
}
  	void R()
  	{   if(Health::tries_1<=3)
  	{
  	    if(Health::Health_2<=80)
		  {
  		Health::Health_2=Health::Health_2+20;
	  }
	  else
	  {
	  	Health::Health_2=100;
	  }
	   Health::tries_1++;
	   Health::refill_1--;
}
}
void r()
{
 if (Health::tries_2<=3&&Health::refill_2==1)
{
if(Health::Health_1<=80)
		  {
  		Health::Health_1=Health::Health_1+20;
	  }
	  else
	  {
	  	Health::Health_1=100;
	  }	
	   Health::tries_2++;
	   Health::refill_2--;
}
}	
};
	void done_1(int turn)
	{
	Spells s1;
	cout<<"Player 1 turn\n";
	cout<<"Enter 1 for Spell A"<<"\n"<<"Enter 2 for Spell B"<<"\n"<<"Enter 3 for Spell C"<<"\n"<<"Enter 4 for refill \n";
	int o;
	cin>>o;
	if(o==1||o==2||o==3)
	{
	cout<<"Enter 7 for Counter Spell X"<<"\n"<<"Enter 8 for Counter Spell Y"<<"\n"<<"Enter 9 for Counter Spell Z"<<"\n";
	int h;
	cin>>h;
	if(o==2&&h==9)
	{
		s1.B();
	}
	else if(o==1&&h==8)
	{
		s1.A();
	}
	else if(o==3&&h==7)
	{
		s1.C();
	}
	else
	{
		cout<<"\nCountered\n";
	}
}

else if(o==4)
{
	if(Health::refill_1==1)
{
	s1.R();
	turn++;
	}
	else
	{   do
	{
		cout<<"\n refill can't be done more than once\n";
}
        while(o==4);
	}
}
else
{
	do{
		cout<<"Write a proper value\n";
	done_1(turn);
}
	while(o!=1||o!=2||o!=3||o!=4);
} 
}
void done_2(int turn)
    {
    	Spells s2;
    cout<<"Player 2 turn\n";
	cout<<"Enter 1 for Spell A"<<"\n"<<"Enter 2 for Spell B"<<"\n"<<"Enter 3 for Spell C"<<"\n"<<"Enter 4 for refill \n";
	int m;
	cin>>m;
	if(m==1||m==2||m==3)
	{
	cout<<"Enter 7 for Counter Spell X"<<"\n"<<"Enter 8 for Counter Spell Y"<<"\n"<<"Enter 9 for Counter Spell Z"<<"\n";
	int f;
	cin>>f;
	if(m==2&&f==9)
	{
		s2.b();
	}
	else if(m==1&&f==8)
	{
		s2.a();
	}
	else if(m==3&&f==7)
	{
		s2.c();
	}
	else
	{
		cout<<"\nCountered\n";
	}
}

else if(m==4)
{
	if(Health::refill_2==1)
	{
	s2.r();
	turn--;
}
      else
      {
      	do
      	{
      		cout<<"\n refill can't be done more than once\n";
		  }
		  while(m==4);
	  }
}
else
{
	do{
		cout<<"Write a proper value\n";
	done_2(turn);
}
	while(m!=1||m!=2||m!=3||m!=4);
}
  	}
int main()
{    
	int t=0;
	for(t=0;t<4;t++)
	{
    done_1(t);
    cout<<"\n";
    done_2(t);
}
    cout<<"\n";
	cout<<"Health of Player 1:"<<Health::Health_1;
	cout<<"\n";
	cout<<"Health of Player 2:"<<Health::Health_2;
	if(Health::Health_1>Health::Health_2)
	{
		cout<<"\nPlayer 1 won";
	}
	else if(Health::Health_2>Health::Health_1)
	{
		cout<<"\nPlayer 2 won";
	}
	else
	{
		cout<<"\nTied";
	}
	return 0;
}


   

