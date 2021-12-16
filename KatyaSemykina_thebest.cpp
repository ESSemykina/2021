/*
#include <iostream>
#include <fstream>

int main()
{
	/*int M[10000];
	
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
		std::cin >> M[i];

	// Обработка
	// 1. Определить, есть ли простое число в последовательности
	bool isPrimeInSequence = false;
	for (int i = 0; i < n; i++)
	{
		int x = M[i];
		bool isPrime = true;
		for (int d = 2; d < x - 1; d++)
			if (x % d == 0)
			{
				isPrime = false;
				break;
			}

		if (isPrime)
		{
			std::cout << "Prime" << std::endl;
			isPrimeInSequence = true;
			break;
		}
		else
			std::cout << "Not prime" << std::endl;
	}

	// 2. Отсортировать последовательность по невозрастанию
	std::cout << isPrimeInSequence << std::endl;

	if (isPrimeInSequence == false)
	{
		// Сортировка
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if (M[i] <= M[j])
				{
					int tmp = M[i];
					M[i] = M[j];
					M[j] = tmp;
				}
	}


	for (int i = 0; i < n; i++)
		std::cout << M[i] << " ";



	int M[10000];
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
		std::cin >> M[i];

	bool isSort = true;
	for (int i = 0; i < n; i++)
	{
		bool katya = true;
		int x = M[i];
		
		int sum = 0;
		while(x>0)
		{
			sum += x % 10;
			x = x / 10;

			if (sum == 19)
			{
				katya = false;
				break;
			}
		
		}

		if (katya == false)
		{
			isSort = false;
		}
	}

	if (isSort)
	{
		std::cout << "111" << std::endl;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (M[i] <= M[j])
				{
					int tmp = M[i];
					M[i] = M[j];
					M[j] = tmp;

				}
	}

	for (int i = 0; i < n; i++)
		std::cout << M[i] << " ";

	}
	







#include <iostream>
int main()

{
	int M[1000];
	int first[1000];
	int min[1000];
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> M[i];

		int x = M[i];
		while (x > 9)
			x /= 10;

		first[i] = x;
		
		x = M[i];
		min[i] = 9;
		while (x > 0)
		{
			int d = x % 10;
			if (min[i] > d)
				min[i] = d;
			x = x / 10;
		}

	}

	for (int i = 0; i>n;i++)
		for (int j = i + 1; j > n; j++)
			if (first[i] <= first[j])
			{
				std::swap(first[i], first[j]);
			}
			else if (first[i] == first[j] && min[i] <= min[j])
			{
				std::swap(min[i], min[j]);
			}
			else if (first[i] == first[j] && min[i] == min[j])
			{
				std::swap(min[i], min[j]);
			}

	for (int i = 0; i < n; i++)
	{
		std::cout << M[i] << " " << first[i] << " " << min[i] << std::endl;
	}





	// Ввод последовательности
	// Заполнить массив с первыми цифрами чисел
	// Заполнить массив с наименьшими цифрами чисел


//3
#include <iostream>
#include <fstream>
#define N  100
#define M  100
int main()
{
	std::ifstream in("input.txt");

	int matrix[N][M];
	int	min;
	int min2;
	int sum = 0;
	min = INT_MAX;
	int n, m;
	in >> n >> m;
	
	// Ввод
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			in >> matrix[i][j];
	

	// Обработка
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = sum + matrix[i][j];
		}
		if (sum < min)
		{
			min = sum;
			min2 = i;
			sum = 0;
		}
		sum = 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (i == min2)
		{
			for (int j = 0; j < m; j++)
			{
				matrix[i][j] = min;
			}
		}
	}
	
	
	// Вывод
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

		std::cout << matrix[i][j] << " ";	
		}
	
	std::cout << std::endl;
	}
		



}



//5.1(4)
#include <iostream>
#include <string>


using namespace std;
int main()
{

	int a, b;
	cin >> a;
	char s[100];
	for (int i = 0; i < a; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < a; i++)
	{
		if ((s[i] == 'e') || (s[i] == 'y') || (s[i] == 'u') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'a') || (s[i] == 'E') || (s[i] == 'Y') || (s[i] == 'U') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'A'))
		{ }
		else
		{
			cout << s[i];
		}
	}
}
	


//5.2
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#define N 3

int main()
{
	std::string mas[N];
	for (int i = 0; i < N; i++)
	mas[i] = "";

		int flag;
		setlocale(LC_ALL,"Rus");
		SetConsoleCP(1251);
		std::string slovo;
		std::string text;
		std::fstream in("text.txt");

		in >> slovo;

		while (in >> text)
		{
			flag = 1;
			
			for (int i = 0; i < N; i++)
			
				if (mas[i] == text)
					flag = 0;
			

			if (flag == 1)

			{
				for (int i = 0; i < text.length(); i++)
				{
					for (int j = 0; j < slovo.length(); j++)
					{
						if (((int)text[i] == (int)slovo[j]) or ((int)text[i] + 32 == (int)slovo[j]) or ((int)text[i] == (int)slovo[j] + 32))
							flag = 0;

					}
				}
			
			}


			if (flag == 1)
			{
				if (text.length() > mas[N - 1].length())
					mas[N - 1] = text;
				for (int i = 0; i < N - 1; i++)
					for (int j = i + 1; j < N; j++)
						if (mas[i].length() < mas[j].length())
							std::swap(mas[i], mas[j]);


			}
		
		}
	
	
	for (int i = 0; i < N; i++)
		std::cout << mas[i] << " ";

}	


	
//6

#include <iostream>
#include <fstream>


int main()
{
	//матрица
	const int N = 100;
	const int M = 100;

	int matrix[N][M];
	int n, m;//кол-во строк и стобцов
	std::cin >> n >> m; 

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> matrix[i][j]; //ввод матрицы

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			std::cout << matrix[i][j] << " ";//вывод матрицы
		}

		std::cout << std::endl; // вывод каждой строчки отдельно
	}

	int min = matrix[0][0];
	//минимальное число
	for (int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) 
			if (min < matrix[i][j])
			{
				min = matrix[i][j];
			}

	
	
}*/





































//8
/*
#include <iostream>
int main()
{

	int n;
	std::cin >> n;
	int* M = new int[n];
	int* first = new int[n];
	int* min = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> M[i];
		int x = M[i];
		while (x > 9)
			x /= 10;
		first[i] = x;

		x = M[i];
		min[i] = 9;
		while (x > 0)
		{
			int d = x % 10;
			if (min[i] > d)
				min[i] = d;
			x = x / 10;
		}
	}
	for (int i = 0; i > n; i++)
		for (int j = i + 1; j > n; j++)
			if (first[i] <= first[j])
			{
				std::swap(first[i], first[j]);
			}
			else if (first[i] == first[j] && min[i] <= min[j])
			{
				std::swap(min[i], min[j]);
			}
			else if (first[i] == first[j] && min[i] == min[j])
			{
				std::swap(min[i], min[j]);
			}
	for (int i = 0; i < n; i++)
	{
		std::cout << M[i] << " " << first[i] << " " << min[i] << std::endl;
	}
	delete[] M;
	delete[] first;
	delete[] min;
}


#include <iostream>
#include <fstream>
#define N  100
#define M  100
int main()
{
	std::ifstream in("input.txt");

	int** matrix = new int* [N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int[M];

	int	min;
	int min2;
	int sum = 0;
	min = INT_MAX;
	int n, m;
	in >> n >> m;

	// Ввод
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			in >> matrix[i][j];


	// Обработка
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = sum + matrix[i][j];
		}
		if (sum < min)
		{
			min = sum;
			min2 = i;
			sum = 0;
		}
		sum = 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (i == min2)
		{
			for (int j = 0; j < m; j++)
			{
				matrix[i][j] = min;
			}
		}
	}


	// Вывод
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			std::cout << matrix[i][j] << " ";
		}

		std::cout << std::endl;
	}


	for (int i = 0; i < N; i++)
		delete[] matrix[i];

	delete[] matrix;




}

 //Задача 4
#include <iostream>
int main()
{
	int count = 0;
	for (int i = 0; i < 10; i++)
	
		for (int j = 0; j < 10; j++)

			for (int k = 0; k < 10; k++)

				for (int a = 0; a < 10; a++)

					for (int b = 0; b < 10; b++)

						for (int c = 0; c < 10; c++)

							if ((i + j + k) == (a + b + c))
							{
								count += 1;
							}
	std::cout << count << std::endl;

	
}
*/


//Задача 7.
//Вариант-4. 
//Дана последовательность натуральных чисел{ Aj }j = 1...n(n <= 10000).
//Удалить из последовательности числа, произведение цифр которых равно 144, а среди оставшихся продублировать числа, содержащие цифру 8.

#include <iostream>
#include <vector>
int proizvedenie(int a)
{
	int b = 1;
	int p = a;
	while (p > 0) {
		b = b * (p % 10);
		p = p / 10;
	}
	return(b);
}

int katya(int a)
{
	int b = 0;
	int p = a;
	while (p > 0)
	{
		if (p % 10 == 8)
		{
			b = 1;
		}
		p = p / 10;
	}
	return(b);
}
int main()
{
	std::vector<int> vec;

	int n;
	int a;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		vec.push_back(a);
	}

	
	for (int i = 0; i < vec.size(); i++)
	{
		if (proizvedenie(vec[i]) == 144)
		{
			vec.erase(vec.begin() + i);
	
			i = i - 1;
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		if (katya(vec[i])== 1)
		{
		
			vec.insert(vec.begin()+i, vec[i]);
				i = i +1;
		}
	}


	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ';

}

































