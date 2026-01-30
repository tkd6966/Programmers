using namespace std;

long long solution(int price, int money, int count)
{
    long long sumprice = 0;
    
    for (int i = 1; i <= count; i++)
    {
        sumprice += price * i;
    }
    if (sumprice <= money) return 0;

    return sumprice - money;
}