#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
private:
    int age;
    std::string  first_name;
    std::string  last_name;
    int standard;  
  public :
  void set_age(int age)
  {
      this->age = age;
  }
  void set_standard(int standard)
  {
      this->standard = standard;
  }
  void set_first_name(std::string first_name) 
  {
      this->first_name = first_name;
  }
  void set_last_name(std::string last_name)
  {
      this->last_name = last_name;
  }
  int get_age(void){
      return this->age;
  }
  int get_standard(void){
      return this->standard;
  }
  std::string get_first_name(void)
  {
      return this->first_name;
  }
  std::string get_last_name(void)
  {
      return this->last_name;
      
  }
    std::string to_string(void)
    {
        std::string fullstring ;
        fullstring = std::to_string(age)+","+first_name+","+last_name+","+std::to_string(standard);
        return fullstring;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
