#include "include.h"

//�ѡ�.h���ļ���Ĺ��캯��������������ȫ��
WorkerManager::WorkerManager()
{
    cout << "1���캯��" << endl ;
}

void WorkerManager::ShowMenu()
{
    cout<< "-------------------------------------" << endl ;
    cout<< "-------��ӭʹ��ְ������ϵͳ��--------" << endl ;
    cout<< "------------0.�˳�-------------------" << endl ;
    cout<< "------------1.����Ա����Ϣ-----------" << endl ;
    cout<< "------------2.��ʾԱ����Ϣ-----------" << endl ;
    cout<< "------------3.ɾ��Ա����Ϣ-----------" << endl ;
    cout<< "------------4.�޸�Ա����Ϣ-----------" << endl ;
    cout<< "------------5.����Ա����Ϣ-----------" << endl ;
    cout<< "------------6.���ձ������-----------" << endl ;
    cout<< "------------7.��������ĵ�-----------" << endl ;
    cout<< "-------------------------------------" << endl ;
    cout << endl ;
}

void WorkerManager::exitSystem()
{
    cout << "\nbye~\n" << endl ;
    system("pause") ;
    exit(0) ;
}

WorkerManager::~WorkerManager()
{
    cout << "1��������" << endl ;
}