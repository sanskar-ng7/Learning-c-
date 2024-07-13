#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int width;
    public:
    void input_data()
    {
        cout<<"Enter length:\n";
        cin>>length;
        cout<<"enter width:\n";
        cin>>width;
    }
void calpart()
{ 
    int area= length*width;
    cout<<"The area of rectangle is"<<area<<endl;
    }
};
int main()
{
    rectangle data;
    cout<<"Enter Info Here:\n";
    data.input_data();
    cout<<"Here is the Output\n";
    data.calpart();
}