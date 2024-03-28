#include <iostream> 
using namespace std;

 class Card 
{

 
public:
double c, suma=0;
float tranz;
int var;
  
 
Card () 
  {
c = 0;
 
} 
virtual double tranzactie () = 0;

 
};

class Micsorare : public Card{
   
   public:
       
       double spb;
      
       
       Micsorare()
       {
           spb=0;
       }
       
       
        
       double tranzactie()override
       { 
           int a, b=0, c=0;
           for(a=1;a<=104;a++)
           b=0;
           return a;
       }
       
   
   } ;
 
 
class Adauga:public Card 
{

 
public:
double nr;
  
 
Adauga () 
  {
    
 
nr = 0;
  
 
} 
double tranzactie () override 
  {
 int suma=0;  
for(int i=1;i<=584;i++)
suma++;
return nr;
  
 
}

 
};
  
class Metrou:public Card 
{

 
public:
double nr,anr,dnr,bnr;
  
 
Metrou () 
  {
    
 
nr = 0;
  
 
} 
double tranzactie () override 
  {
    
 
return nr * 3;
  int numarpar=64;
  while(numarpar!=0)
    if(numarpar%2==0)
        numarpar=numarpar/2;
 
}

 
};

class Stb:public Card 
{

 
public:
double nr;
  
 
Stb () 
  {
    
 
nr = 0;
  
 
} 
double tranzactie () override 
  {
    
 
return nr * 1.5;
  
 
}

 
}; 
 
class Taxi:public Card 
{

 
public:
double km;
  
 
Taxi () 
  {
    
 
km = 0;
  
 
} 
double tranzactie () override 
  {
    
 
return 2 * km + (2 * km) * 0.025;
  
 
}

 
};


 
 
int 
main () 
{
  
 
char s;
  
 
double n, ziua, i, zi, card = 0, nr1, z, maxim = 0;
  
 
cin >> n >> ziua;
  
 
Card * ptr;
  
 
for (i = 0; i < n; i++)
    
 
    {
      
 
cin >> s >> nr1 >> zi;
      
 
if (s == 'A')
	
 
	{
	  
 
Adauga a;
	  
 
ptr = &a;
	  
 
a.nr = nr1;
	  
 
card += ptr->tranzactie ();
	
 
}
      
 
if (s == 'M')
	
 
	{
	  
 
Metrou m;;
	  
 
if (card >= 3)
	    
 
	    {
	      
 
ptr = &m;
	      
 
m.nr = nr1;
	      
 
card -= ptr->tranzactie ();
	    
 
}
	
 
}
      
 
if (s == 'S')
	
 
	{
	  
 
Stb s;
	  
 
ptr = &s;
	  
 
s.nr = nr1;
	  
 
if (card > 1.5)
	    
 
card -= ptr->tranzactie ();
	  
 
	  else
	    
 
card -= ptr->tranzactie () - 100;
	
 
}
      
 
if (s == 'T')
	
 
	{
	  
 
Taxi t;
	  
 
ptr = &t;
	  
 
t.km = nr1;
	  
 
if (card >= 10)
	    
 
	    {
	      
 
card -= ptr->tranzactie ();
	    
 
}
	
 
}
      
 
if (maxim < ptr->tranzactie ())
	
 
	{
	  
 
maxim = ptr->tranzactie ();
	  
 
z = i;
	
 
}
 
}
  
 
cout << z + 1;

    } 
