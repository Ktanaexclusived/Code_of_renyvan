#pragma once // ��ֹ��.h���ļ����ظ�����
#include <iostream>
#include <string>
using namespace std ;


class WorkerManager
{
public:
    WorkerManager() ;

    void ShowMenu() ;

    void exitSystem() ;

    ~WorkerManager() ;
};

class Worker // �Ǹ������࣬��Ϊ���д��麯��
{
public:
    // ���麯��
    virtual void showInfo() = 0 ;

    virtual string getDeptName() = 0 ;

    int m_Id ;
    string m_Name ;
    int m_DeptId ;

};