#include<iostream>
#include<string>
#include<map>
#include<algorithm>
class phonebook
{
    public:
    std::map<std::string,std::string> data;
    void input()
    {
        std::string name,number;
        std::cout<<"============Add=Contact============"<<std::endl;
        std::cout<<"Enter the name of contact(without blank space) : ";
        std::cin>>name;
        number=checknum();
        if(data.find(name)!=data.end())
        {
            std::cout<<"Contact Already Exists !!"<<std::endl;
        }
        else
        {
            data[name]=number;
            std::cout<<"Contact Added Successfully !!"<<std::endl;
        }
    }
    std::string checknum()
    {
        std::string number;
        do
        {
            std::cout<<"Enter the phone number : ";
            std::cin>>number;
            if(number.length()!=10)
            {
                std::cout<<"Invalid Input !!"<<std::endl;
            }
        } while (number.length()!=10);
        return number;
    }
    void search()
    {
        std::string name;
        std::cout<<"Enter the name of contact(without blank space) : ";
        std::cin>>name;
        if(data.find(name)!=data.end())
        {
            std::cout<<name<<" : "<<data[name];
        }
        else
        {
            std::cout<<"Contact not found !!"<<std::endl;
        }
    }
    void remove()
    {
        std::string name;
        std::cout<<"Enter the name of contact(without blank space) : ";
        std::cin>>name;
        if(data.find(name)!=data.end())
        {
            data.erase(name);
            std::cout<<"Deleted "<<name<<"..."<<std::endl;
        }
        else
        {
            std::cout<<"Contact not found !!"<<std::endl;
        }
    }
    void showall()
    {
        for(auto x:data)
        {
            std::cout<<x.first<<" : "<<x.second<<std::endl;
        }
    }
    void updateno()
    {
        std::string name,number;
        std::cout<<"Enter the name of contact(without blank space) : ";
        std::cin>>name;
        if(data.find(name)!=data.end())
        {
            std::cout<<"Enter new phone number : ";
            std::cin>>number;
            data[name]=number;
            std::cout<<"Updated "<<name<<"..."<<std::endl;
        }
        else
        {
            std::cout<<"Contact not found !!"<<std::endl;
        }
    }
    void menu()
    {
        int choice;
        do
        {
            std::cout<<"=============PhoneBook================"<<std::endl;
            std::cout<<"1. Add Contact"<<std::endl
            <<"2. Search Contact"<<std::endl
            <<"3. Delete Contact"<<std::endl
            <<"4. Show All Contacts"<<std::endl
            <<"5. Update Phone Number"<<std::endl
            <<"6. Exit"<<std::endl
            <<"Your choice : ";
            std::cin>>choice;
            switch (choice)
            {
            case 1:
                input();
                break;
            case 2:
                search();
                break;
            case 3:
                remove();
                break;
            case 4:
                showall();
                break;
            case 5:
                updateno();
                break;
            }
        } while (choice!=6);
        std::cout<<"----------------------Thank--You-------------------------"<<std::endl;
    }
};
int main()
{
    phonebook p;
    p.menu();
    return 0;
}
