#include <iostream>
#include <istream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>




using namespace std;

int fact(int f)
{
    if (f < 0)
        return 0;
    if (f == 0)
        return 1;
    else
    {
        return f * fact(f - 1);
    }
}

int evklid(int b, int c)
{
    if (c == 0)
        return b;
    return evklid(c, b % c);
}

int sum(int* array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

void eRevers(int* array, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

int max(int* array, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max) max = array[i];

    }
    return max;
}
int min(int* array, int size)
{
    int min = 100;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min) min = array[i];

    }
    return min;
}

double srednee(int a, int b)
{
    double sred;
    sred = double(a + b) / 2;
    return sred;
}

int fibonachi(int a)
{
    if (a == 0) return 0;
    if (a == 1) return 1;
    return fibonachi(a - 1) + fibonachi(a - 2);
}

double sredneeArray(int* array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return double(sum)/size;
}

int gl(string str)
{
    int gl = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            gl++;
        }
    }
    return gl;
}


    int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    
    int n,b,c,d,k=-1;
    double a;
    const int size = 10;
    int array[size];

    cout << "Введите номер задания: ";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << "Введите число с плавающей точкой: ";
        cin >> a;
        cout << "Число в формате научной нотации: " << scientific << setprecision(6) << a;
        break;
    }

    case 2: 
    {
        cout << "Введите число: ";
        cin >> b;
        if (b % 2 == 0)
            cout << "Число чётное";
        else cout << "Число нечётное";
        break;
    }
    case 3:
    {
        cout << "Введите число: ";
        cin >> b;
        for (int i = 2; i < b; i++)
        {
            if (b % i == 0) k = k + 1;
        }
        if (k==-1) cout << "Число простое";
        else cout << "Число непростое";
        break;
    }
    case 4:
    {
        cout << "Введите число: ";
        cin >> b;
        cout << "Факториал числа: "<<fact(b);
        break;
    }

    case 5: 
    {    
        cout << "Введите первое число: ";
        cin >> b;
        cout << "Введите второе число: ";
        cin >> c;
        cout << "НОД двух чисел равен: "<<evklid(b,c);
        break;
    }

    case 6:
    {
        cout << "Таблица умножения : "<<endl;
        for (int i = 1; i < 11; i++)
        {
            for (int j = 1; j < 11; j++)
            {
                cout << i << "*" << j << "=" << i * j<<endl;
            }
            cout << endl;
        }
        break;
    }
    case 7:
    {
        int sum = 0;
        cout << "Введите число: ";
        cin >> b;
        for (int i = 0; i <= b; i++)
        {
            if (i % 2 == 0) sum += i;
         }
        cout << "Сумма всех чётных чисел до N равна:  "<< sum;
        break;
    }

    case 8: 
    {
        char znak;
        cout << "Введите первое число: ";
        cin >> b;
        cout << "Введите второе число: ";
        cin >> c;
        cout << "Введите знак операции: ";
        cin >> znak;
        switch (znak)
        {
        case '+':
        {
            d = b + c;
            break;
        }
        case '-':
        {
            d = b - c;
            break;
        }
        case '*':
        {
            d = b * c;
            break;
        }
        case '/':
        {
            d = b / c;
            break;
        }
        }
        cout << b << znak << c << "=" << d;
        break;
    }

    case 9:
    {
        cout << "Введите число: ";
        cin >> b;
        switch (b)
        {
        case 1: 
        {
            cout << "Понедельник";
            break;
        }
        case 2:
        {
            cout << "Вторник";
            break;
        }
        case 3: 
        {
            cout << "Среда "; 
            break;
        }
        case 4:
        {
            cout << "Четверг ";
            break;
        }
        case 5:
        {
            cout << "Пятница ";
            break;
        }
        case 6:
        {
            cout << "Суббота ";
            break;
        }
        case 7:
        {
            cout << "Воскресенье ";
            break;
        }
        default : 
            cout << "Вы ввели не то число! ";
        }
    }
    case 10:
    {
        
        for (int i = 0; i < 10; i++)
        {
            array[i] = 1 + rand() % 20;
        }

        cout << "Исходный массив: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << "  ";
        }
        int* arr = array;
        cout << endl;
        cout << "Сумма элементов массива: " << sum(arr, size);
        break;
    }

    case 11:
    {
        for (int i = 0; i < 10; i++)
        {
            array[i] = 1 + rand() % 20;
        }

        cout << "Исходный массив: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << "  ";
        }
        int* arr = array;
        cout << endl;
        eRevers(arr, size);
        cout << "Реверсивный массив: ";
        for (int i = 0; i < 10; i++)
        {
            cout << array[i] << "  ";
        }
        break;
    }

    case 12:
    {
        for (int i = 0; i < 10; i++)
        {
            array[i] = 1 + rand() % 20;
        }

        cout << "Исходный массив: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << "  ";
        }
        int* arr = array;
        cout << endl;

        cout << "Минимальный элемент массива: " << min(arr, size) << endl;
        cout << "Максимальный элемент массива: " << max(arr, size) << endl;
        break;
    }

    case 13:
    {
        // я не понимаю как делать это задание ААААААААА а у даника я не хочу контрл ц контрл в 
    }

    case 14:
    {
        cout << "Введите первое число: ";
        cin >> b;
        cout << "Введите второе число: ";
        cin >> c;
        cout << "Среднее значение двух чисел равно: " << srednee(b,c);
        break;
    }
    case 15:
    {
        cout << "Введите номер числа Фибоначчи, который необходимо найти: ";
        cin >> n;
        cout << "Число Фибоначчи равно: " << fibonachi(n);
    }

    case 16: 
    {
        for (int i = 0; i < 10; i++)
        {
            array[i] = 1 + rand() % 20;
        }

        cout << "Исходный массив: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << "  ";
        }
        int* arr = array;
        cout << endl;

        cout << "Среднее значение: " << sredneeArray(arr,size) << endl;
    }

    case 17:
    {
        string str;
        cout << "Введите строку символов на английском: ";
        cin >> str;
        cout << "Гласные: " << gl(str) << endl;
        cout << "Согласные: " << str.length()-gl(str);
    }

    }
}


