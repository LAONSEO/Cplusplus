
#include <iostream>

class C_ANIMAL
{
public:
	virtual void print() { printf("동물\n"); };
};

class C_DOG : public C_ANIMAL
{
public:
	void funcDog() {};
	void print() { printf("개\n"); };
};

class C_CAT : public C_ANIMAL
{
	void funcCat() {};
	void print() { printf("고양이\n"); };
};

int main()
{
	//C_ANIMAL* pAnimal{};
	C_ANIMAL* arAnimal[5]{};
	C_DOG cDog{};
	C_CAT cCat{};

	//pAnimal = &cDog;
	//pAnimal->print(); // 동물

	//cDog.print(); // 개
	//cDog.C_DOG::print(); // 개
	//cDog.C_ANIMAL::print(); // 동물

	arAnimal[0] = new C_CAT{};
	arAnimal[1] = new C_DOG{};
	arAnimal[2] = new C_CAT{};
	arAnimal[3] = new C_DOG{};
	arAnimal[4] = new C_CAT{};

	for (int i = 0; i < 5; i++)
	{
		arAnimal[i]->print();
	}
}