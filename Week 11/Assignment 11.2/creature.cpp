/*/*
   CH-230-A
   a11_p2.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}



//Adding two clases with special constructors:


//First the elf class:
class Elf: public Creature
{
    public:
        Elf();
        void aim() const;
    private:
        int distancetotarget;
        
};

Elf::Elf():distancetotarget(12)
{

    cout<<"Elf constructor has beencalled"<<endl;
}

void Elf::aim() const
{
    cout<<"Aim method has been called"<<endl;
    cout<<"An elf can aim at a distance of maximum"<<distancetotarget+13<<"meters."<<endl;
}



//Second the healer class:
class Healer: public Creature
{
    public:
        Healer();
        void heal() const;
    private:
        int hp;    
};
Healer::Healer():hp(50)
{

    cout<<"Healer constructor has beencalled"<<endl;
}

void Healer::heal() const
{
    cout<<"Heal method has been called"<<endl;
    cout<<"A healer can heal a maximum of "<<hp<<"hp."<<endl;
}


int main()
{ 
    cout << "Creating an Creature.\n"<<endl;;
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n"<<endl;
    Wizard w;
    w.run();
    w.hover();

 //Calling and creating the new classes

    cout<<"Creating an Elf.\n"<<endl;
    Elf e;
    e.aim();

    cout<<"Creating a Healer.\n"<<endl;
    Healer h;
    h.heal(); 

    return 0;
    
}