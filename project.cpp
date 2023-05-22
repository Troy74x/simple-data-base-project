#include <bits/stdc++.h>
using namespace std;
int main()
{
    //              *****simple students database*****

    string name[4][4] =
    {
          //0         //1            //2         //3
        { "kareem"  , "mohamed"    , "ahmed"   , "zeyad" },//0
        { "mahmmoud", "abdelrahman", "osama"   , "islam" },//1
        { "omar"    , "amr"        , "assem"   , "adel"  },//2
        { "hazem"   , "mohab"      , "youssef" , "ayman" },//3

    };
    int id[4][4] =
    {

          //0         //1         //2         //3
        { 221050104 , 221050101 , 221050102 , 221050103 },//0
        { 221050105 , 221050106 , 221050107 , 221050108 },//1
        { 221050109 , 221050110 , 221050111 , 221050112 },//2
        { 221050113 , 221050114 , 221050115 , 221050116 },//3

    };
    double gpa[4][4] =
    {

          //0   //1   //2   //3
        { 3.4 , 2.4 , 3.6 , 3.9 },//0
        { 3.8 , 1.8 , 1.7 , 2.5 },//1
        { 2.9 , 3.0 , 2.5 , 2.9 },//2
        { 2.8 , 2.3 , 3.6 , 1.3 },//3

    };




    //welcome messages
    cout<<"-----welcome to students database-----"<<endl;
    int orders=INT_MAX;

    while(orders--)
    {

    cout<<"-----what do you want to do?-----"<<endl;
    cout<<"0) end program"           <<endl;
    cout<<"1) inquire about student" <<endl;
    cout<<"2) view enrolled students"<<endl;
    cout<<"3) add student"           <<endl;
    cout<<"4) remove student"        <<endl;
    cout<<"5) count empty places"    <<endl;

    int choice; cin>>choice;

    if(choice==0)
    {
        cout<<"-----program ended successfully-----"<<endl;
        return 0;
    }

    else if(choice==1)
    {
        cout<<"-----enter student id-----"<<endl;
        int student_id; cin>>student_id;

        for(int row=0;row<4;row++)
        {
            for(int column=0;column<4;column++)
            {
                if(id[row][column]==student_id)
                {
                    cout<<"name : "<<name[row][column]<<endl;
                    cout<<"gpa  : "<<gpa[row][column]<<endl;
                }
            }
        }
    }

    else if(choice==2)
    {
        for(int row=0;row<4;row++)
        {
            for(int column=0;column<4;column++)
            {
                cout<<"name : "<<name[row][column]<<" "<<id[row][column]<<endl;
            }
        }
    }

    else if(choice==3)
    {
        bool test = 0;

        for(int row=0;row<4;row++)
        {
            for(int column=0;column<4;column++)
            {
                if(name[row][column]=="x")
                {
                    test = 1;
                }
            }
        }

        if(test==0)
        {
            cout<<"-----sorry there is no empty place-----"<<endl;
            cout<<"-----you have to remove 1 student atleast-----"<<endl;
        }

        else
        {
            cout<<"enter student name"<<endl;
            string student_name; cin>>student_name;
            cout<<"enter student id"<<endl;
            int student_id;      cin>>student_id;
            cout<<"enter student gpa"<<endl;
            double student_gpa;  cin>>student_gpa;

            for(int row=0;row<4;row++)
            {
                for(int column=0;column<4;column++)
                {
                    if(name[row][column]=="x")
                    {
                        name[row][column] = student_name;
                        gpa [row][column] = student_gpa;
                        id  [row][column] = student_id;
                    }
                }
            }
            cout<<"-----student has been added successfully-----"<<endl;

        }
    }

    else if(choice==4)
    {
        cout<<"-----enter student id that you want to remove-----"<<endl;
        int student_id; cin>>student_id;

        for(int row=0;row<4;row++)
        {
            for(int column=0;column<4;column++)
            {
                if(id[row][column]==student_id)
                {
                    name[row][column] = "x";
                    gpa [row][column] =  0;
                    id  [row][column] =  0;
                }
            }
        }
        cout<<"-----student has been removed successfully-----"<<endl;
    }

    else if(choice==5)
    {
        int counter = 0;

        for(int row=0;row<4;row++)
            {
                for(int column=0;column<4;column++)
                {
                    if(name[row][column]=="x")
                    {
                        counter++;
                    }
                }
            }

            cout<<"there is "<<counter<<" empty places"<<endl;
    }
}
}
