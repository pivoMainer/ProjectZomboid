#include <iostream>
using namespace std;

int getLen(int num){
    int lenght  = 1;
    if (num < 0){
        lenght++;
        num = -num;
    }
    while (num >= 10)
    {
        lenght ++;
        num = num/10;
    }
    return lenght;
}

char* inttoDec(int num){
    int maxLen = getLen(num);
    int num_1 = num;
    char* Ddec = new char[maxLen + 3];
    int i = maxLen + 1;
    int abs_num = abs(num_1);
    while (abs_num > 0){
        Ddec[i] = '0' + abs_num % 10;
        abs_num /= 10;
        i--;
    }
    if (num == 0){
        Ddec[0] = '0';
        Ddec[1] = 'd';
        Ddec[2] = '0';
    }
    if (num > 0){
        Ddec[0] = '0';
        Ddec[1] = 'd';
    }
    if (num < 0){
        Ddec[0] = '-';
        Ddec[1] = '0';
        Ddec[2] = 'd';
    }
    Ddec[maxLen + 2] = '\0';
    return Ddec;
}
int main(){
    cout << inttoDec(-36023) << std::endl;
    return 0;
}