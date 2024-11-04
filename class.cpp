/*#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);//declration
    void getdata(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
        

        

    }
    
};
void Employee ::/*scope resolution */ /*setdata(int a1, int b1,int  c1){
        a=a1;
        b=b1;
        c=c1;
    }
    int main(){
        Employee renuka;
      // renuka.a=23; error ayega kyuki a private data hai.
      // (note: declared private here int a,b,c;)
         
        renuka.d=34;
        renuka.e=43;
        renuka.setdata(1,2,3);
        renuka.getdata();
        return 0;
    }*/
    #include<iostream>
    using namespace std;
    class student{
        private:
        char name[20];
        int scholar;
        public:
        void getdata();
        void display()
        {
            cout<<"Your Name is : "<<name<<endl;
            cout<<"your scholar number is : "<<scholar<<endl;
        }
    };
    void student::getdata(void)
    {
        cout<<"Enter the name :"<<endl;
        cin>>name;
        cout<<"Enter the scholar number:"<<endl;
        cin>>scholar;
    }

 int main(){
    student stu;
   // stu.roll =101;private 
    stu.getdata();
    stu.display();
    return 0;

    
 }