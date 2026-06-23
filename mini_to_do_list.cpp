#include<iostream>
#include<stack>
#include<string>
class list
{
    
    public:
    std::string s;
    int i;
};
class data
{
    public:
    std::stack<list> li;
    void menu()
    {
        int choice;
        list l;
        do
        {
            std::cout<<"1.Add tasks"<<std::endl
            <<"2.Complete tasks"<<std::endl
            <<"3.View pending tasks"<<std::endl
            <<"4.Exit"<<std::endl
            <<"Your choice : ";
            std::cin>>choice;
            switch (choice)
            {
            case 1:
                Add();
                break;
            case 2:
                Delete();
                break;
            case 3:
                view();
                break;
            }
        } while (choice!=4);
    }
    void Add()
    {
        list l;
        std::cin.ignore();
        std::cout<<"Enter the list : "<<std::endl;
        getline(std::cin,l.s);
        l.i=l.i+1;
        li.push(l);
    }
    void Delete()
    {
        if(!li.empty())
        {
            li.pop();
            std::cout<<"Deleted !!"<<std::endl;
        }
        else
        {
            std::cout<<"No task left !"<<std::endl;
            menu();
        }
        
    }
    void view()
    {
        std::stack<list> temp=li;
        std::cout<<"--------To--Do--List-----------"<<std::endl;
        while(!temp.empty())
        {
            std::cout<<"* "<<temp.top().s<<std::endl;
            temp.pop();
        }
        std::cout<<"--------------------------------"<<std::endl;
    }
};
int main()
{
    data d;
    d.menu();
    return 0;
}
