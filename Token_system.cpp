#include<iostream>
#include<queue>
class token
{
    public:
    std::queue<int> q;
    void menu()
    {
        int i=1;
        int choice;
        std::cout<<"------Token--System--------"<<std::endl;
        do
        {
            std::cout<<"1.Add token"<<std::endl
            <<"2.Serve Customer"<<std::endl
            <<"3.Show next token"<<std::endl
            <<"4.Show all waiting tokens"<<std::endl
            <<"5.Show waiting count"<<std::endl
            <<"6.Exit"<<std::endl;
            std::cin>>choice;
            switch (choice)
            {
            case 1:
                q.push(i);
                i++;
                break;
            case 2:
                if(!q.empty())
                {
                    q.pop();
                }
                else
                {
                    std::cout<<"No Tokens left !!"<<std::endl;
                }
                break;
            case 3:
                if(!q.empty())
                {
                    std::cout<<q.front()<<std::endl;
                }
                else
                {
                    std::cout<<"No Tokens left !!"<<std::endl;
                }
                break;
            case 4:
                showwaiting();
                break;
            case 5:
                std::cout<<"Number of tokens left : "<<q.size()<<std::endl;
                break;            
            }
        } while (choice!=6);
        if(!q.empty())
        {
            std::cout<<"You cannot leave without serving waiting customers !!"<<std::endl;
            menu();
        }
        else
        {
             std::cout<<"--------------Thank--You-------------"<<std::endl;
        }
    }
    void showwaiting()
    {
        if(!q.empty())
        {
            std::cout<<"Waiting tokens :"<<std::endl;
            std::queue<int> temp=q;
            while(!temp.empty())
            {
                std::cout<<temp.front()<<std::endl;
                temp.pop();
            }
        }
        else
        {
            std::cout<<"No tokens left !!"<<std::endl;
        }
    }
};
int main()
{
    token t;
    t.menu();
    return 0;
}
