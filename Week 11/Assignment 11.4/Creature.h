/*
   CH-230-A
   a11_p3.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

//In this file the classes are being initialized.



//The creature class and its parameters:
class Creature 
{
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};


//The Healer class and its parameters:
class Healer: public Creature
{
    public:
        Healer();
        void heal() const;
    private:
        int hp;    
};



//The Elf class and its parameters:
class Elf: public Creature
{
    public:
        Elf();
        void aim() const;
    private:
        int distancetotarget;
        
};


//The Wizar class and its parameters:
class Wizard : public Creature
 {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};