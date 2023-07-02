#include <iostream>
// 第一个C++代码
int main()
{
    int v1, v2;
    int n = 100, sum ;
    while ( n > 0)
    {
        n -= 1;
        sum += n;
    }
    std::cout << "hello world!" << std::endl;
    std::cin >> v1 >> v2;
    std::cout<<"v1:"<<v1<<"v2:"<<v2<<std::endl;
    return 0;
}
