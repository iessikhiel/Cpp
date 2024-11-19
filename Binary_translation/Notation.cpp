#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

int main()
{
	setlocale(LC_ALL, "RU");

	std::cout << "=| Перевод в доичную систему счисления |=" << std::endl;

	int i = 0;
	float num, num_after, num_afterc;
	int num_i;

	std::string res = "";
	std::string res_after = "";

	std::cout << std::endl << "Число: ";
	std::cin >> num;

	std::cout << "_____________________________________" << std::endl;

	num_i = trunc(num);
	num_after = num - floor(num);
	num_afterc = num_after;

	while (num_i >= 2 || num_i != 0)
	{
		res.insert(0, std::to_string(num_i % 2));
		num_i /= 2;
	}

		while(i < 12)
		{
			if (num_after - floor(num_after) == 0)
				break;

			num_after *= 2;

			if (trunc(num_after) == 1)
				res_after.append("1");
			else if (trunc(num_after) == 0)
				res_after.append("0");

			num_after = num_after - floor(num_after);
			i++;
		}


	if (num_afterc == 0)
		std::cout << "Результат: " << (res);
	else
		std::cout << "Результат: " << (res) << "," << (res_after);

	return 0;
}
