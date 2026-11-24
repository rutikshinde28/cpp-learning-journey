#include<iostream>
#include<string>
using namespace std;

class Vehicle{
protected:
    string name;
    int model;
    int tyres;

public:

    Vehicle(string _name, int _model, int _tyres){
        cout << "I am inside Vehicle constructor." << endl;

        this->name = _name;
        this->model = _model;
        this->tyres = _tyres;
    }

    void engine_start(){
        cout << name << " Engine is starting" << endl;
    }

    void engine_stop(){
        cout << name << " Engine is stopping" << endl;
    }

    string getName(){
        return name;
    }

    int getModel(){
        return model;
    }

    int getTyres(){
        return tyres;
    }

    ~Vehicle(){
        cout << "I am inside vehicle destructor" << endl;
    }
};


class Car : public Vehicle{
public:
    int noOfDoors;
    string transmissiontype;

    Car(string _name, int _model, int _tyres,
        int _noOfDoors, string _transmissiontype)
        : Vehicle(_name, _model, _tyres)
    {
        cout << "I am inside car constructor." << endl;

        this->noOfDoors = _noOfDoors;
        this->transmissiontype = _transmissiontype;
    }

    void startAc(){
        cout << "AC has been started " << name << endl;
    }

    ~Car(){
        cout << "I am inside Car destructor" << endl;
    }
};

class Motorcycle : public Vehicle{
public:
    string handlebarstyle;
    string suspensionType;

    Motorcycle(string _name,int _model,int _tyres,
        string _handlebarstyle,string _suspensionType) 
        : Vehicle(_name,_model,_tyres){
        cout << "I am inside Motorcycle constructor" << endl;
        this -> handlebarstyle = _handlebarstyle;
        this -> suspensionType = _suspensionType;
        }
        
        void TurnLeft(){
            cout << ""<< this -> name << " is turning left! " << endl;
        }

        void TurnRight(){
            cout << ""<< this -> name << " is turning right! " << endl;
        }

        ~Motorcycle(){
        cout << "I am inside Motorcycle destructor" << endl;;
    }
};

int main(){

    Car A("Fortuner_Legender", 123, 4, 4, "Manual");

    cout << A.getName() << " "
         << A.getModel() << " "
         << A.noOfDoors << " "
         << A.getTyres() << " "
         << A.transmissiontype << endl;

    A.engine_start();
    A.engine_stop();
    A.startAc();

    cout << "\n";
    Motorcycle M("Royal Enfield" , 350 , 2 , "normal" , "Medium");
    cout << M.getName() << " " 
        << M.handlebarstyle << " " 
        << M.suspensionType << endl;

    M.engine_start();
    M.engine_stop();
    M.TurnLeft();
    M.TurnRight();



    return 0;
}