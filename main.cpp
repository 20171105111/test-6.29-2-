//
//  main.cpp
//  test 6.29 （2）
//
//  Created by 徐涛 on 2018/6/29.
//  Copyright © 2018年 徐涛. All rights reserved.
//


#include<iostream>
#include<string>
using namespace std;
int main()
{   char name[20];
    char studentID[20];
    char Class[20];
    char sex[20];
    char birthday[20];
    char phonenumber[20];
    cout<<"请输入姓名:"<<endl;
    cin>>name;
    cout<<"请输入学号:"<<endl;
    cin>>studentID;
    cout<<"请输入班级:"<<endl;
    cin>>Class;
    cout<<"请输入性别:"<<endl;
    cin>>sex;
    cout<<"请输入生日:"<<endl;
    cin>>birthday;
    cout<<"请输入电话号:"<<endl;
    cin>>phonenumber;
    int n;
    cout<<"请输入评委数:"<<endl;
    cin>>n;
    int score[20];
    double average;
    int i,j;
    int sum=0;
    cout<<"请分别输入分数"<<endl;
    
    for(j=0;j<n;j++)
    {
        cin>>score[j];
    }
    int max=score[0],min=score[0];
    for(j=0;j<n;j++)
    {
        if(score[j]>max)max=score[j];
        if(score[j]<min)min=score[j];
        sum+=score[j];
    }
    sum=sum-max-min;
    average=sum/(n-2);
    cout<<name<<" "<<average<<endl;
    
    return 0;
}
