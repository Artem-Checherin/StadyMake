#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
    cout<<"Добро пожаловать в Казино-Роял\n";
    cout<<"Сыграем в кости?\n";
    cout<<"Ты загадываешь число - я бросаю кость.\n";
    cout<<"Если ты угадал с трех попыток - ты выиграл\n";
    cout<<"Нет - проиграл, и настало время отчислений\n";
    srandom(time(nullptr));
    for (int i = 0; i<3; i++) {
        cout<<"введите число от 1 до 6 : ";
        int n;
        cin >> n;
        if (!cin.good()) {
            cerr<<"Это было число?\n";
            return 2;
        }
        if ( ! isspace(cin.peek())) {
            cerr<<"Хвосты обрубаем\n";
            return 2;
        }
        if ( (n<1) || (n>6)) {
            cerr<<"С таким числом ты сразу проиграл\n";
            return 2;
        }
        int rr = random() % 6 + 1;
        cout<<"Выпало число "<<rr<<endl;
        if (n == rr) {
            cout<<"Ты читер!!!\n";
            return 0;
        }
    }
    cout<<"Может в любви повезет?\n";
    return 1;
}