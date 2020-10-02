#include<iostream>
using namespace std;
int ground[101];
int groundnumber;
struct old
{
    int oldmax;
    int oldmin;
    int maxoldnumber;
    int minoldnumber;
}old1={0,0,1,1};
int main()
{int tmp=0,max,min,_max,_min,pingjun;
    cout<<"please cin groundnumber:";
    cin>>groundnumber;
    for(int i=1;i<=groundnumber;i++)
    {cout<<"ground["<<i<<"]:"<<endl;
        cin>>ground[i];
    }
    max=ground[1];
    old1.oldmax=ground[1];
    min=ground[1];
    old1.oldmin=ground[1];
   _max=1;_min=1;
    for(int i=2;i<=groundnumber;i++)
    {   cout<<"########################"<<endl;
        cout<<endl;
        cout<<"now i is"<<i<<endl;
        cout<<endl;
        cout<<"########################"<<endl;
       if(ground[i]>max)
       {
           max=ground[i];
           _max=i;
      cout<<"max::::"<<"ground["<<old1.maxoldnumber<<"]:"<<old1.oldmax<<"->"<<"ground["<<_max<<"]:"<<max<<endl;

           old1.oldmax=max;
           old1.maxoldnumber=i;
       }
       else
           cout<<"max"<<"NO calculation"<<endl;
       if(ground[i]<min)
       {
           min=ground[i];
           _min=i;
           cout<<"min::::"<<"ground["<<old1.minoldnumber<<"]:"<<old1.oldmin<<"->"<<"ground["<<_min<<"]:"<<min<<endl;

            old1.oldmin=min;
            old1.minoldnumber=i;

       }
       else
           cout<<"min"<<"No calculation"<<endl;
       tmp=tmp+ground[i];
           pingjun=tmp/groundnumber;
    }
    cout<<"max is "<<"ground["<<_max<<"]:"<<max<<endl;
    cout<<"min is "<<"ground["<<_min<<"]:"<<min<<endl;
    cout<<"pingjun is:"<<pingjun<<endl;
}
