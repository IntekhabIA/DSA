#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Animal {
    //state or Properties
    private:
    int weight;
    public:
        int age;
        string type;

        //Constructor
        Animal()
        {
            cout << "Constructor called" << endl;
            this->weight = 0;
            this->age = 0;
            this->type = "";
        }

        //Parameterised Constructor
        Animal(int age)
        {
            cout << "Parametrised Constructor" << endl;
        }

        Animal (int age, int weight)
        {
            this->age = age;
            this->weight = weight;
            cout << "Parameterised Constructor 2 Called" << endl;
        }

        Animal (int age, int weight, string type)
        {
            this->age = age;
            this->weight = weight;
            this->type = type;
            cout << "Paramerterised Constructor 3 called" << endl;
        }

        //Copy Constructor
        Animal (Animal &obj)
        {
            this->age = obj.age;
            this->weight = obj.weight;
            this->type = obj.type;
            cout << "I am inside copy constructor" << endl;
            cout << this->age << endl;
        }

         //behaviour
        void eat()
        {
            cout << "Eating" << endl;
        }

        void sleep()
        {
            cout << "Sleeping" << endl;
        }

        int getWeight()
        {
            return weight;
        }

        void setWeight(int weight)
        {
            this->weight = weight;
        }

        //Destructor
        ~Animal(){
            cout << "Inside destructor" << endl;
        }
    
};

int main()
{
    // //Object Creation
 
    // //Static
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.type = "Lion";
    // cout << "Age of ramesh is: " << ramesh.age << endl;
    // cout << "Type of ramesh is: " << ramesh.type << endl;
    // ramesh.setWeight(105);
    // cout << "Weight :" << ramesh.getWeight() << endl;


    // //Dynamic Memory
    // Animal* kamlesh = new Animal;
    // (*kamlesh).age = 24;
    // (*kamlesh).type = "Dog";
    // cout << "Age of Kamelesh is :" << (*kamlesh).age << endl;
    // cout << "Type of Kamlesh is: " << (*kamlesh).type << endl;

    // //alternate
    // kamlesh->age = 34;
    // kamlesh->type = "Billi";
    // cout << kamlesh->age;
    // cout << kamlesh ->type;

    // kamlesh->eat();
    // kamlesh->sleep();

    // kamlesh->setWeight(200);
    // cout << kamlesh->getWeight() << endl;

    // Animal a(80,90,"bug");
    // Animal q(60,50,"cat");
    // Animal* b = new Animal(78,9,"horse");

    // Animal c = a;
    // Animal d(q);
    // cout << c.type << endl;
    // cout << d.type << endl;

    //Destructor
    Animal s; 

    Animal *m = new Animal;
    
    //manually calling destructor
    delete m;

}