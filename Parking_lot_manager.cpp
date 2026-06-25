#include<iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
class parkingspot
{
    public:
    std::unordered_set<std::string> cars;
    void addcar()
    {
        std::string number;
        std::cout<<"Enter car's number(without blank spaces) : ";
        std::cin>>number;
        cars.insert(number);
    }
    void exitcar()
    {
        std::string number;
        std::cout<<"Enter car's number(without blank spaces) : ";
        std::cin>>number;
        if(cars.find(number)!=cars.end())
        {
            cars.erase(number);
        }
        else
        {
            std::cout<<"Number not fount !!"<<std::endl;
        }
    }
    void searchcar()
    {
        std::string number;
        std::cout<<"Enter car's number(without blank spaces) : ";
        std::cin>>number;
        if(cars.find(number)!=cars.end())
        {
            std::cout<<"Found ";
        }
        else
        {
            std::cout<<"Number not fount !!"<<std::endl;
        }
    }
    void show()
    {
        for(std::string x:cars)
        {
            std::cout<<x<<std::endl;
        }
    }
    void menu()
    {
        int choice;
        do
        {
            std::cout<<"1. Enter Car"<<std::endl
            <<"2. Exit Car"<<std::endl
            <<"3. Search Car"<<std::endl
            <<"4. Show Parked Cars"<<std::endl
            <<"5. Count Cars"<<std::endl
            <<"6. Exit"<<std::endl
            <<"Your Choice : ";
            std::cin>>choice;
            switch (choice)
            {
            case 1:
                addcar();
                break;
            case 2:
                exitcar();
                break;
            case 3:
                searchcar();
                break;
            case 4:
                show();
                break;
            case 5:
                std::cout<<"Number for cars parked : "<<cars.size()<<std::endl;
                break;       
            }
        } while (choice!=6);
        
    }
    
};
int main()
{
    parkingspot p;
    p.menu();
    return 0;
}
