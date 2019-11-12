// kellie Henderson, Dr_T, 11/12//19

#include <iostream>
#include<string>
using namespace std;


class CollegeCourse
  {
    protected:
      string department;
      int courseNum;
      int creditHours;
      double tuition;
    public:             // the initalizer list method
      CollegeCourse(string d, int cN, int cH, double t) : department(d), courseNum(cN), creditHours(cH), tuition(t) {}

      void showCollegeCourse() 
      { 
        cout << department << " " << courseNum << " " << creditHours << " credits. Tuition: $" << tuition << endl;

       }


  };
class LabCourse : public CollegeCourse
{
  private:
    double labFee = 30.25;
  public:     // the childs syntax via the initalizer list method.
    LabCourse(string d, int cN, int cH, double t) : CollegeCourse(d,cN,cH,t){ } 
    double getLabFee() const {return labFee;}
    

  void setlabFee(double lf){labFee = lf;}
  
  void showLabCourse()
  {
    showCollegeCourse();
    cout << "\nplus lab fee: $" << labFee << " for a grand total of: $" << (tuition + labFee) << endl;
  }
};


int main()
{
double lf ;
CollegeCourse cc("ENG" , 121, 3, 333.33); // instantiate parent constructor.
LabCourse lc ("CIS", 250, 4, 444.44); //instantiate the child constuctor
cc.showCollegeCourse();
lc.showLabCourse();
cout << "What is the new lab fee?" << endl;
cin >> lf;

lc.setlabFee(lf);
lc.showLabCourse();


return 0;
}