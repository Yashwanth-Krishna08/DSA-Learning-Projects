#include<iostream>
#include<stack>
#include<string>
class bracket
{
    public:
    std::string s;
    std::stack<char> p;
    void input()
    {
        std::cout<<"Enter data : ";
        std::cin>>s;
        for(char c:s)
        {
            p.push(c);
        }
    }
    void display()
    {
        std::stack<char> r=p;
        while(!r.empty())
        {
            std::cout<<r.top()<<std::endl;
            r.pop();
        }
    }
    void check()
    {
        int i=0;
        std::stack<char> temp =p;
        while(!temp.empty())
        {
            if(temp.top()==')')
            {
                i++;
                temp.pop();
            }
            else if(temp.top()=='(')
            {
                i--; 
               if(i<0)
               {
                    std::cout<<"Invalid"<<std::endl;
                    return ;
               }
               temp.pop();
            }
        }
        if(i==0)
        {
            std::cout<<"Valid !"<<std::endl;
        }
        else if(i>0)
        {
            std::cout<<"Invalid !"<<std::endl;
        }
    }
};
int main()
{
    bracket b;
    b.input();
    b.display();
    b.check();
    return 0;
}
