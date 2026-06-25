#include<iostream>
#include<string>
#include<set>
#include<algorithm>
class attendance
{
    public:
    std::multiset<int> ms;
    void add()
    {
        int roll;
        std::cout<<"Enter your roll number : ";
        std::cin>>roll;
        ms.insert(roll);
    }
    void total()
    {
        int roll;
        std::cout<<"Enter your roll number : ";
        std::cin>>roll;
        std::cout<<"----------Your--Overall--Attendance----------"<<std::endl;
        std::cout<<ms.count(roll)<<std::endl<<"------------------------------------------------"<<std::endl;
    }
    void show()
    {
        std::cout<<"----------Total--Entry----------"<<std::endl;
        for(int x:ms)
        {
            std::cout<<x<<std::endl;
        }
        std::cout<<"------------------------------------------------"<<std::endl;
    }
    void menu()
    {
        int n;
        do
        {
            std::cout<<"1.Mark Attendance"<<std::endl
            <<"2.Count Attendance of student"<<std::endl
            <<"3.Show all entry"<<std::endl
            <<"4.Exit"<<std::endl
            <<"Your Choice : ";
            std::cin>>n;
            switch (n)
            {
            case 1:
                add();
                break;
            case 2:
                total();
                break;
            case 3:
                show();
                break;
            }
        } while (n!=4);
        
    }
};
int main()
{
    attendance a;
    a.menu();
    return 0;
}
