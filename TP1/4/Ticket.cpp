
#include <iostream>
#include <vector>

class Ticket
{
	static int i;  // number of the next ticket
	static int j;  // number of the next ticket to be checked

public:
	Ticket()
	{
		i++;
	}
		
	~Ticket(){};
	
	static void appel()
	{
		j++;
	}
	
	static int getCounti()
	{
		return i;
	}
	
	static int getCountj()
	{
		return j;
	}	

	static bool check()
	{
		return i == j;
	}

};

//Static class member initialization
//must be put somewhere once and only once outside of a header

int Ticket::i = 0;
int Ticket::j = 0;

int main()
{
	for (int n=0; n<10; n++)
	{
	
		//getCount can be called without an object
		
		Ticket* ticket = new Ticket;
		int ticket_number = Ticket::getCounti();
		Ticket::appel();
		int ticket_check_number = Ticket::getCountj();
		
		
		std::cout << "Ticket number:" << ticket_number << ", "\
		<< "Ticket being checked:" << ticket_check_number << ", if successful: "\
		 << Ticket::check() << std::endl;
		
	}
}

