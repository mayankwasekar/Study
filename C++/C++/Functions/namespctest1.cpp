int age = 21;

namespace Jack
{
	int age = 23;
}

int main(void)
{
	int age = 25;

	return age + ::age + Jack::age;
}





