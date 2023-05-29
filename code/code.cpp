#include <iostream>
#include <string>
using namespace std;

void test1()
{
    string str1 = "abcdefg";
    string subStr = str1.substr(1, 3); // 从1号位置，截取3个连续的字符
    cout << subStr << endl;            // 输出：bcd
}

// 实用操作
void test2()
{
    string email = "hello@sina.com";
    // 从邮件地址中获取用户信息
    int pos = email.find("@");
    cout << pos << endl;
    string username = email.substr(0, pos); // 输出：hello
    cout << username << endl;
}

int main()
{
    test1();
    test2();
    return 0;
}