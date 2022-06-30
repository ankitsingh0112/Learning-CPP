#include<iostream>
#include<string>
using namespace std;

class Cars{
    private:
    // member variables or data member
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

    public:
    // memeber function
    void setData(string cname, string mname, string ftype, float m, double p)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void diaplayData()
    {
        cout << "\tCar Properties :-"<<endl<<endl;
        cout << "Company Name -> "<<company_name<<endl;
        cout << "Model Name -> "<<model_name<<endl;
        cout << "Fuel Type -> "<<fuel_type<<endl;
        cout << "Mileage -> "<<mileage<<" kmpl"<<endl;
        cout << "Price -> "<<price<<" Cr*"<<endl;
    }
};


int main()
{
    Cars car1; // car1 is an object to class Cars
    car1.setData("Roll Royce", "Phantom", "Petrol", 7.19, 9.58);
    car1.diaplayData();
    return 0;
}