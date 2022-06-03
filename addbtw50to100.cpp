#include <iostream>
int main()
{
    int x,sum=0;
    std::cout<<"plz enter your num"<<std::endl;
    std::cin>>x;
    if(x>100||x<50)
     {
     std::cout<<"number is not in concern"<<std::endl;
     return 0;
     }
    if(100<=x<=50)
        {
            while (x<=100)
            {
                sum+=x;
                x++;
            }
        } 
    std::cout<<"the sum is "<< sum<<std::endl;
    return 0;     
}
