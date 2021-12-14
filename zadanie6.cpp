#include <iostream>
#include <string>

using namespace std;
 
int main()
{
    setlocale( LC_ALL, "C.UTF-8" );
	
  int Spolgloski=0,Samogloski=0;
  string tekst;
   

  string spolgloski="bcćdfghjklmnprstwzźżBCĆDFGHJKLMNPRSTWZŹŻ";
  string samogloski="aąeęiouyAĄEĘIOUY";
  
  string spolgloski1="czdzdźdżchszCZDZDŹDŻCHSZ";
  
  cout << "Wprowadz tekst: ";
  getline(cin,tekst);
 
 	for(int i=0;i<spolgloski1.length();i+=2)
 	{
 		string wyraz="";
 		wyraz+=spolgloski1[i];
 		wyraz+=spolgloski1[i+1];
 		
		size_t found1=tekst.find(wyraz);
		if((found1<tekst.length())&&(tekst.length()>0)&&(found1+1<=tekst.length()))
		{
			tekst[found1]=' ';
			tekst[found1+1]=' ';
				
			Spolgloski++;
			i-=2;
		}
		cout<<tekst<<endl;
	}
 
  
    for(int i=0; i<tekst.length(); i++) 
	{
        for(int j=0; j<spolgloski.length(); j++) 
		{
            if (tekst[i]==spolgloski[j])
			 Spolgloski++;
		}
    }

 	for(int i=0; i<tekst.length(); i++) 
	{
        for(int j=0; j<samogloski.length(); j++) 
		{
            if (tekst[i]==samogloski[j])
            Samogloski++;
		}
    }
    
  cout << "ilosc Spolglosek: " << Spolgloski << endl;
  cout << "ilosc Samogloski: " << Samogloski << endl;

}  