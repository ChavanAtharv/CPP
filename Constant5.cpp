 #include<iostream>
 using namespace std;
 
 class Demo
 {
    public:
        int i;
        const int j;
        // Parameterised constructor with DEFAULT values
        Demo(int x = 10, int y = 20) : j(y) 
        {
           i = x;  
        }
        void fun()
        {
            int a = 10;
            const int b = 20;    // constant variable
            i++;
            j++;
            a++;
            b++;
        }
        void gun() const        // constant behaviour
        {
           int a = 10;
           const int b = 20;
           i++;   // NA(23)
           j++;   // NA(23)
           a++;   // A (25)
           b++;   // NA (26)
        }
        
 };
 
 int main()
 {
    Demo obj1(11,21);         // 11    21    
    const Demo obj2(11,21);   // 11    21  // Constant object 
    obj 
   
    return 0;
 }
