#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
    int age,standard;
    string first_name,last_name;
    public:
    int get_age(){
        return age;
    }
    void set_age(int i){
        age=i;
    }
    int get_standard(){
        return standard;
    } 
    void set_standard(int j){
        standard=j;
    }
    string get_first_name(){
        return first_name;
    }
    void set_first_name(string h){
        first_name=h;
    }
    string get_last_name(){
        return last_name;

    }
    void set_last_name(string a){
        last_name=a;
    }
    string to_string(){
        string s;
        stringstream z,x;
        z<<age;
        x<<standard;
        string q=z.str();
        string w=x.str();
        s=q+","+first_name+","+last_name+","+w;
        return s;
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
