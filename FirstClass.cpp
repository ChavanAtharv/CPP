 #i0nclude<iostream>
 using namespace std;
 // Class Declaration
 class Maths
 {
     public:   // Access Specifier
     int iNo1; // Characteristics
     int iNo2; // Characteristics
     
     Maths()              // Constructor (Default)
     {
        cout<<"Inside Default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
     }
 
     Maths(int A, int B) // Constructor (Parameterised)
     {
        cout<<"Inside Parameterised constructor\n";
        iNo1 = A;
        iNo1 = B;
     }
     
     ~Maths()
     {
        cout<<"Inside Destructor\n";
        // Destructor
     }
     // int Addition(Maths *this)
     int Addition()   // Behaviour
     {
        return iNo1 + iNo2;
     }
     // int Substraction(Maths *this)
     int Substraction()  // Behaviour
     {
         return iNo1 - iNo2;
     }
 };
 
 int main()
 {  
    cout<<"Inside main funtion\n";
    
    Maths mobj1;
    Maths mobj2(11,10);
    int ret = 0;
    
    ret = mobj2.Addition(); // ret = Addition(&mobj2);
    // ret = Additon(200);
    cout<<"Addition is : "<<ret<<"\n";
    
    ret = mobj1.Substraction();
    // ret = Substracton(100)
    cout<<"Substraction is : "<<ret<<"\n";
    
     return 0;
 }
