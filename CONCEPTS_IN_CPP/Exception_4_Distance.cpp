#include <iostream>
#include <string>

using namespace std;

class Distance
{
  private:
    int feet;
    float inches;

  public:
    class InchesEx
      {
        public:
            string origin;
            float iValue;

            InchesEx(string org, float in)
                {
                    origin = org;
                    iValue = in;
                }
      };
    
    Distance()
        {
            feet = 0; inches = 0.0;
        }

    Distance(int ft, float in)
        {
            if(in >= 12.0)
             throw InchesEx("2-arg Constructor", in);

            feet = ft; 
            inches = in;
        }

    void getdist()
        {
            cout << "\nEnter Feet: "; cin >> feet;
            cout << "\nEnter Inches: "; cin >> inches;

            if(inches >= 12.0)
                throw InchesEx("getdist() Function", inches);
        }

    void showdist()
        {
            cout << feet << "\'-" << inches << '\"';
        }

    
};
int main()
{
    try
        {
            Distance d1(17,23.5);
            Distance d2;
            d2.getdist();

            cout << "\nDistance 1: "; d1.showdist();
            cout << "\nDistance 2: "; d2.showdist();
        }
    catch(Distance::InchesEx ix)
        {
            cout << "\nInitialization Error in " << ix.origin 
                 << ".\n Inches value of " << ix.iValue << " is too large."; 
        }

    cout << endl;

  return 0;
}
