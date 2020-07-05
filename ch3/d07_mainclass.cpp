//
// Created by 15755 on 2020/7/2.
//

#include <iostream>
#include <string.h>

using namespace std;

/*
 * ���캯��
 * 1��û�з���ֵ
 * 2���������ƺ�������ͬ
 *
 * ��������
 * 1��û�з���ֵ
 * 2���������ƺ�������ͬ
 *
 * c/c++��������ڶ�����ֻ��ͨ��malloc ��colloc��̬����Ĵ���ڶ���
 * �����ľֲ��������Ǵ����ջ�У������������Լ���̬����
 *
 * �ڶ��д����Ķ�����߱�����Ҫ�����߱���ȥ����������������
 * ջ���Ǳ������Լ�ȥ�ͷ�
 */
class Test {
private:
    int a;//��ĳ�Ա����
    char *p;

public:
    Test() {//���캯�� ��ʼ������
        a = 10;
        // p = (char *)"sjklajsda";
        p = (char *) malloc(100);//��p�����ڶ���������һ���ڴ�
        strcpy(p, "11111111");
        cout << "���캯��" << endl;
    }

    ~Test() {//�������� �ͷ���Դ�Ĺ���
        //���������ǵ����ǵĶ�������֮ǰ�ɱ���������ȥ���õ�
        if (p != NULL) {
            free(p);//�ͷ�p
            p = NULL;
        }
        cout << "��������" << endl;
    }

    void print() {//��Ա����
        cout << sizeof(p) << endl;
        cout << "a: " << a << " p:" << p << endl;
    }
};

void objTest() {
    Test t1;//����һ������
    t1.print();
}

int main01() {
    objTest();


    return 0;
}

class Test2 {
public:
    void init(int a, int b) {
        m_a = a;
        m_b = b;
    }

    Test2() {//�޲ι��캯�� ������������ͻ���һ��Ĭ�ϵ��޲ι��캯��
        m_a = 0;
        m_b = 0;
        cout << "�޲�:" << m_a << " " << m_b << endl;
    }

    Test2(int a) {
        m_a = a;
        m_b = 0;
        cout << "�в�: " << m_a << " " << m_b << endl;
    }

    Test2(const Test2 &obj) {//��һ���������캯��
        m_a = obj.m_a;
        cout << "��Ҳ�ǹ��캯��: " << m_a << " " << m_b << endl;
    }

    ~Test2(){//��������
        cout << "��������:" << "m_a:" << m_a << " m_b:" << m_b << endl;
    }

    void print() {
        cout << "print: " << m_a << " " << m_b << endl;
    }

    int getA() {
        return m_a;
    }

private:
    int m_a;
    int m_b;
};

void objTest2() {
    Test2 t1;//�����޲εĹ��캯��
}

void objTest3() {
    //��һ�ֵ����вι��췽��
    //c++�������Զ����ö�Ӧ�Ĺ��캯��
    Test2 t1(1);//�����вι��캯��
    //�ڶ��ֵ��÷���
    Test2 t2 = (2);//�൱��c++�� =�� ������ǿ�������˹��캯��
    //�����ֵ��ù��췽��
    Test2 t3 = Test2(2);
    t1 = t3;//��t3 copy �� t1 ��ֵ����

    //�������캯���ĵ���
    Test2 t4 = t3;//�����˿������캯��
    Test2 t7(t4);//�����˿������캯��
    Test2 t8 = Test2(t7);//���ÿ������캯��

}

void objTest4() {
    Test2 t1;
    t1.init(2, 3);

    Test2 tArr[3];
    tArr[0].init(1, 2);
    tArr[1].init(1, 2);
    tArr[2].init(1, 2);
}

//�������캯������ʱ��
//1����������t2ʵ�γ�ʼ���β�t��ʱ�򣬻��Զ����ÿ������캯��
void copyTest(Test2 t) {//�����ֿ�����������ʱ��
    cout << t.getA() << endl;
}

//�����ֵ��ÿ�������ʱ��
Test2 getTest2() {
    Test2 t(4);
    return t;
}

void objTest5() {
    Test2 t(1);
    Test2 t2 = t;//��һ�ֿ�����������ʱ��

    Test2 t3(t2);//�ڶ��ֿ�����������ʱ��
    t2.print();

    copyTest(t2);//����ÿ������캯��
};

void objTest6() {
    Test2 t = getTest2();
    t.print();
}

int main2() {
//    objTest2();
//    objTest3();
//    objTest4();
    //   objTest5();
    objTest6();
    return 0;
}



int main(){
    //��ʼ���б�


    return 0;
}

