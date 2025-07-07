/*
   CH-230-A
   a11_p6.h
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

class Vector{
	private:
		int size;
		double *v;
	public:	

        //Constructor:
		Vector();
		Vector(int, double *);
		Vector(const Vector&);

        //Deconstructor:
		~Vector(); 

        //The setters:
        void setSize(int);
        void setPointer (double *);

		//The Getters: 
		int getSize() const;
		double* getPointer() const;

		//Methods:
		void printVector() const;
		double norm();
		Vector add(const Vector&) const;
		Vector diff(const Vector&) const;
		double scalar(const Vector&);

};