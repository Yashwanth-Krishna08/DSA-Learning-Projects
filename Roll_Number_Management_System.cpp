#include<iostream>
#include<set>
#include<algorithm>
class room
{
    public:
    std::set<int> rolls;
    void menu()
    {
        int n;
        do
        {
            std::cout<<"1.Add Roll Number"<<std::endl
            <<"2.Search Roll Number"<<std::endl
            <<"3.Remove Roll Number"<<std::endl
            <<"4.Show All Roll Numbers"<<std::endl
            <<"5.Exit";
            std::cin>>n;
            switch (n)
            {
            case 1:
                Add();
                break;
            case 2:
                search();
                break;
            case 3:
                Remove();
                break;
            case 4:
                display();
                break;
            }
        } while (n!=5);
        
    }
    void Add()
    {
        int roll;
        std::cout<<"Enter Roll number: ";
        std::cin>>roll;
        rolls.insert(roll);
    }
    void search()
    {
        int roll;
        std::cout<<"Enter Roll number: ";
        std::cin>>roll;
        if(rolls.find(roll)!=rolls.end())
        {
            std::cout<<roll<<" Found"<<std::endl;
        }
        else
        {
            std::cout<<roll<<" Not Found"<<std::endl;
        }
        
    }
    void Remove()
    {
        int roll;
        std::cout<<"Enter Roll number: ";
        std::cin>>roll;
        rolls.erase(roll); 
    }
    void display()
    {
        for(int x:rolls)
        {
            std::cout<<x<<std::endl;
        }
    }
};
int main()
{
    room r;
    r.menu();
    return 0;
}
