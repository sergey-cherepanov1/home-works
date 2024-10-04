/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment2b
*/

#include <iostream>

int main()
{
	while (true)
	{
		std::string str;
		std::cout << "Введите строку в формате ОПЗ:" << std::endl;
		std::getline(std::cin, str);
		int *start = new int[str.length()];
		for (int i = 0; i < str.length(); i++)
		{
		        switch (str[i])
		        {
		                case '+':
		                        *(start - 2) = *(start - 2) + *(start - 1);
		                        start--;
		                        i++;
		                        break;
				case '-':
		                        *(start - 2) = *(start - 2) - *(start - 1);
		                        start--;
		                        i++;
		                        break;
				case '*':
		                        *(start - 2) = *(start - 2) * *(start - 1);
		                        start--;
		                        i++;
		                        break;
				case '/':
		                        *(start - 2) = *(start - 2) / *(start - 1);
		                        start--;
		                        i++;
		                        break;
		                default:
		                        std::string temp;
		                        while (str[i] != ' ')
		                        {
		                                temp += str[i];
		                                i++;
		                        }
		                        *start = stoi(temp);
		                        start++;
		        }
		}
		start--;
		std::cout << "Ответ: " << *start << std::endl;
		delete[] start;
	}
}
