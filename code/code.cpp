#include <iostream>
#include <string>
using namespace std;

void test1()
{
    string str1 = "abcdefg";
    string subStr = str1.substr(1, 3); // ��1��λ�ã���ȡ3���������ַ�
    cout << subStr << endl;            // �����bcd
}

// ʵ�ò���
void test2()
{
    string email = "hello@sina.com";
    // ���ʼ���ַ�л�ȡ�û���Ϣ
    int pos = email.find("@");
    cout << pos << endl;
    string username = email.substr(0, pos); // �����hello
    cout << username << endl;
}

int main()
{
    test1();
    test2();
    return 0;
}