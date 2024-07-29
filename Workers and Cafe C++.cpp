#include <iostream>
#include <vector>

using namespace std;


class Human {
    string Name;
    string LastName;
    string Sex;
    int Age;
    
    public:
    
    void print()
    {
        cout << Name << " " << LastName << " " << Sex << " " << Age << endl;
    }
    
    Human(string p_name, string p_lastname, string p_sex, int p_age)
    {
        Name = p_name;
        LastName = p_lastname;
        Sex = p_sex;
        Age = p_age;
    }
    
    Human()
    {
        
    }
    
    
    void setName(string Name)
    {
        this->Name = Name;
    }

    string getName()
    {
        return Name;
    }
    
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
    
    string getLastName()
    {
        return LastName;
    }
    
    void setSex(string Sex)
    {
        this->Sex = Sex;
    }
    
    string getSex()
    {
        return Sex;
    }
    
    void setAge(int Age)
    {
        this->Age = Age;
    }
    
    int getAge()
    {
        return Age;
    }

};


class Cafe{
    
    string NameCafe;
    string Company;
    string Country;
    string Street;
    vector <Human> workers;
    
    public:
    
    void setNameCafe(string NameCafe)
    {
        this->NameCafe = NameCafe;
    }

    string getNameCafe()
    {
        return NameCafe;
    }
    
    void setCompany(string Company){
        this->Company = Company;
    }
    
    string getCompany(){
        return Company;
    }
    
    void setCountry(string Country){
        this->Country = Country;
    }
    
    string getCountry(){
        return Country;
    }
    
    void setStreet(string Street){
        this->Street = Street;
    }
    
    string getStreet(){
        return Street;
    }
    
    void setWorkers(vector <Human> workers)
    {
        this->workers = workers;
    }
    
    void printWorkers()
    {
        for (Human human : workers)
        {
            cout << human.getName() << endl;
            cout << human.getLastName() << endl;
            cout << human.getSex() << endl;
            cout << human.getAge() << endl;
        }
    }
    

};

int main()
{
    setlocale(LC_ALL, "Russian");
    vector <Human> humans;
    int count;
    cout << "Сколько людей хотите добавить сотрудников?: ";
    cin >> count;
    
    for(int i = 0; i < count; i++){
        Human human;
        string name;
        cout << "Введите имя сотрудника: ";
        cin >> name;
        human.setName(name);
        string lastname;
        cout << "Введите фамилию сотрудника: ";
        cin >> lastname;
        human.setLastName(lastname);
        string sex;
        cout << "Введите пол сотрудника: ";
        cin >> sex;
        human.setSex(sex);
        int age;
        cout << "Введите возраст сотрудника: ";
        cin >> age;
        human.setAge(age);
        humans.push_back(human);
    }

    Cafe cafe;
    cafe.setNameCafe("Name: MacDonalds");
    cafe.setCompany("Company: American");
    cafe.setCountry("Country: America");
    cafe.setStreet("Street: West Vest 28.");
    cafe.setWorkers(humans);
    
    cout << cafe.getNameCafe() << endl;
    cout << cafe.getCompany() << endl;;
    cout << cafe.getStreet() << endl;
    cout << cafe.getCountry() << endl;
    cafe.printWorkers();
    
    cout << endl;

    return 0;
}





