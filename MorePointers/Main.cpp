#include <iostream>
#include <ctime>
#include <cstdlib>




template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template < typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;



	// Создание нейтрального указателя. Способ № 1
	int* pn1 = 0;
	if (pn1 != 0)
		std::cout << *pn1 << std::endl;
	else
		std::cout << "Указатель не инициализирован!\n";

	//Создание нейтрального указателя. Способ № 2
	int* pn2 = NULL;
	if (pn1 != NULL)
		std::cout << *pn2 << std::endl;
	else
		std::cout << "Указатель не инициализирован!\n";
	
	//Создание нейтрального указателя. Способ № 3
	int* pn3 = nullptr;
	if (pn3 != nullptr)
		std::cout << *pn3 << std::endl;
	else
		std::cout << "Указатель не инициализирован!\n";
	

	// Модификации уазателей

	n = 10; m = 20;
	//Указатель на константу. Может быть объявлен без инициализации и может быть перенаправлен 
	//на другую объласть памяти, но с его помощью НЕЛЬЗЯ менять значение пямяти, на которую он направлен.
	const int* mp1;
	mp1 = &n;
	mp1 = &m;
	// *mp1 = 30; // Ошибка!
	std::cout << *mp1 << std::endl;


	//Указатель - констната или константный указатель. Не может быть объявлен без инициализациии не может
	//быть перенаправлен на другую объласть памяти. В остольном ограничнений нет.

	int* const mp2 =  &n;
	// mp2 = &m; // ОШИБКА!
	*mp2 = 15;
	std::cout << *mp2 << std:: endl;

	//Константный указатель на константу. Не может быть объявлен без инициализации и не может быть
	//перенаправлен на другую область памяти. С его помощью нельязя менять значения переменой, на которую он направлен
	const int* const mp3 = &n;
	//mp3 = &m; // ОШИБКА!
	//*mp3 = 25; // ОШИБКА!
	std::cout << *mp3 << std::endl;





	return 0;
}