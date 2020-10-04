#include <cmath>
#include <iostream>
int min(int a, int b) {
	if (a < b)
	{
		return a;
	}
	return b;
}
int max(int a, int b) {
	if (a > b)
	{
		return a;
	}
	return b;
}
/*void z1(double a)
{
	if (a > 0)
	{
		std::cout << a + 1 << std::endl;
	}
	else
	{
	 
		std::cout << a << std::endl;
	}
}

void z2(double a)
{
	if (a > 0)
	{
		std::cout << a + 1 << std::endl;
	}
	else
	{
		std::cout << a - 2 << std::endl;
	}
}

void z3(int a)
{
	if (a > 0)
	{
		std::cout << a + 1 << std::endl;
	}
	if (a < 0)
	{
		std::cout << a - 2 << std::endl;
	}
	else
	{
		std::cout << (a = 10) << std::endl;
	}
}

void z4(int a, int b, int c)
{
	int result = 0;
	if (a >0)
	{
		result += 1;
	}
	if (b > 0)
	{
		result += 1;
	}
	if (c > 0)
	{
		result += 1;
	}
	std::cout << result << std::endl;
}

void z5(int a, int b, int c)
{
	int result = 0;
	int resulm = 0;
	if (a > 0)
	{
		result += 1;
	}
	else
	{
		resulm += 1;
	}
	if (b > 0)
	{
		result += 1;
	}
	else
	{
		resulm += 1;
	}
	if (c > 0)
	{
		result += 1;
	}
	else
	{
		resulm += 1;
	}
	std::cout << result << std::endl;
	std::cout << resulm << std::endl;
}

void z6(double a, double b)
{
	if (a > b)
	{
		std::cout << a << std::endl;
	}
	else
	{
		std::cout << b << std::endl;
	}
}

void z7(double a, double b)
{
	if (a > b)
	{
		std::cout << 1 << std::endl;
	}
	else
	{
		std::cout << 2 << std::endl;
	}
}

void z8(double a, double b)
{
	if (a > b)
	{
		std::cout << a<<b << std::endl;
	}
	if (b > a)
	{
		std::cout << b<<a << std::endl;
	}
}

void z9(double a, double b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
		std::cout << a << " " << b;
	}
	else
	{
		std::cout << a << b;
	}
}

void z10(double a, double b)
{
	if (a != b)
	{
		std::cout << a + b << std::endl;
	}
	if (a == b)
	{
		a = 0;
		b = 0;
		std::cout << a<<b << std::endl;
	}
}

int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
	void z11(int a, int b)
	{
		if (a == b)
		{
			a = 0;
			b = 0;
		}
		else
		{
			a = max(b, a);
			b = max(b, a);
		}
		std::cout << a << b << std::endl;
	}
	
	int min(int x, int y)
	{
		if (x < y)
		{
			return x;
		}
		else
		{
			return y;
		}
	
	}
	void z12(double a, double b, double c)
	{
		std::cout << min(min(a, b), c);
	}
void if11(int a, int b)
{
	if (a > b) {
		std::cout << a << " " << a << std::endl;
	}
	if (b > a)
	{
		std::cout << b << " " << b << std::endl;
	}
	else {
		std::cout << 0 << " " << 0 << std::endl;
	}
}

//13
void if13(int a, int b, int c)
{
	std::cout << min(min(a, b), c);
}
void if14(int a, int b, int c)
{
	int maximal = max(max(a, b), c);
	int minimal = min(min(a, b), c);
	std::cout << minimal <<" " << maximal;
}
void if15(int a, int b, int c)
{
	int maximal = max(max(a, b), c);
	int average = min(max(a, b), c);
	std::cout << maximal + average << std::endl;
}
void if16(double a, double b, double c)
{
	if (a < b && b<c)
	{
		std::cout << a * 2 << " " << b * 2 << " " << c * 2 << std::endl;
	}
	else
	{
		std::cout << a * (-1) << " " << b * (-1) << " " << c * (-1) << std::endl;
	}
}
void if17(double a, double b, double c)
{
	if (a<b && b<c || a>b && b>c)
	{
		std::cout << a * 2 << " " << b * 2 << " " << c * 2 << std::endl;
	}
	else
	{
		std::cout << a * (-1) << " " << b * (-1) << " " << c * (-1) << std::endl;
	}
}
void if18(int a, int b, int c)
{
	if (a != b && b == c || a != c && b == c)
	{
		std::cout << 1 << std::endl;
	}
	if (b != c && a == c || b != a && a == c)
	{
		std::cout << 2 << std::endl;
	}
	if (c!=a && a==b|| c!=b && b==a)
	{
		std::cout << 3 << std::endl;
	}
}
void if19(int a, int b, int c, int d)
{
	if (a != b && b == c && c == d && b == d || a != c && c == d && b == c && d == b || a != d && b == d && c == d && b == c)
	{
		std::cout << 1 << std::endl;
	}
	if (b != a && a == c && c == d && d == a || b != c && c == a && d == c && d == a || b != d && d == a && d == c && c == a)
	{
		std::cout << 2 << std::endl;
	}
	if (c != a && a == b && a == d && d == b || c != b && b == a && b == d && d == a || c != d && a == d && b == d && a == b)
	{
		std::cout << 3 << std::endl;
	}
	if (d != a && a == b && a == c && c == a || d != b && b == a && b == c && c == a || d != c && a == c && c == b && b == a)
	{
		std::cout << 4 << std::endl;
	}
}
void if20(double a, double b, double c)
{
	if ((b - a) > (c - a)) {
		std::cout << c << " " << c - a << std::endl;
	}
	if ((b - a) < (c - a))
	{
		std::cout << b << " " << b - a << std::endl;
	}
	if((b-a)==(c-a))
	{
		std::cout << "error" << std::endl;
	}
}
void if21(int x, int y)
{
	if (x == 0 && y == 0)
	{
		std::cout << 0 << std::endl;
	}
	if (x != 0 && y != 0)
	{
		std::cout << 3 << std::endl;
	}
	if (x != 0 && y == 0 || x == 0 && y != 0)
	{
		std::cout << 1 << std::endl;
	}

}
void if22(int x, int y)
{
	if (x > 0 && y > 0)
	{
		std::cout << 1 << std::endl;
	}
	if (x < 0 && y > 0)
	{
		std::cout << 2 << std::endl;
	}
	if

		(x < 0 && y < 0)
	{
		std::cout << 3 << std::endl;
	}
	if (x > 0 && y < 0)
	{
		std::cout << 4 << std::endl;
	}
}
void if24(int x)
{
	if (x > 0)
	{
		std::cout << 2 * sin(x) << std::endl;
	}
	else
	{
		std::cout << 6 - x << std::endl;
	}
}
void if25(int x)
{
	if (x < -2 && x>2)
	{
		std::cout << 2 * x << std::endl;;
	}
	else
	{
		std::cout << 6 - x<<std::endl;;
	}
}
void if26(int x)
{
	if (x <= 0) {
		std::cout << -x<<std::endl;
	}
	if (x > 0 && x < 2)
	{
		std::cout<< std::pow(x, 2)<<std::endl;
	}
	else {
		std::cout << 4 << std::endl;
	}
}
void if27(int x)
{
	if (x < 0)
	{
		std::cout << 0 << std::endl;
	}
	if (((x % 2 == 0) <= x) && (x % 2 != 1) < x)
	{
		std::cout<< 1<<std::endl;
	}
	else
	{
		std::cout << -1 << std::endl;
	}
}
void if28(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0 && x % 400 != 0)) {
		std::cout << "the year is high" << std::endl;
	}
	else {
		std::cout << "Year don't is hight" <<std::endl;
	}
}
void if29(int a)
{
	if (a % 2 == 0) {
		std::cout << "even " << std::endl;
	}
	if (a % 2 != 0) {
		std::cout << "not even " << std::endl;
	}
	if (a < 0) {
		std::cout << "negative " << std::endl;
	}
}
void if30(int a)
{
	if (a > 9 && a < 100 && a % 2 == 0)
	{
		std::cout <<"Even double_count" << std::endl;
	}
	if (a > 9 && a < 100 && a % 2 != 0)
	{
		std::cout << "not_Even double_count" << std::endl;
	}
	if (a > 99 && a < 1000 && a % 2 != 0)
	{
		std::cout << "Not_even tripl_count" << std::endl;
	}
	if (a > 99 && a < 1000 && a % 2 == 0)
	{
		std::cout << "even tripl_count" << std::endl;
	}
}
void z1a(int x, int y, int z)
{
	std::cout << min((x, y), z) + max(x, y)<<std::endl;
}

void z2a(int x, int y, int z)
{
	std::cout << max((x, y), z) + min(x, y)<<std::endl;
}
void z3a(int x1, int x2, int x3, int x4)
{
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4 << std::endl;
}
void z4a(int x1, int x2, int x3, int x4)
{
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4 << std::endl;
}
void z5a(int x1, int x2, int x3, int x4)
{
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 <= x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4 << std::endl;
}
void z6a(int x1, int x2, int x3, int x4)
{
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 < x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4 << std::endl;
}
void z7a(int x, int y, int z)
{
	if (x > y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y > z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x > y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout  << x << " " << y << " " << z<<std::endl;
}
void z8a(int x, int y, int z)
{
	if (x <= y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y <= z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x <= y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z << std::endl;
}
void z9a(int x1, int y1, int x2, int y2)
{
	std::cout << max(((x1, y1), x2), y2) << std::endl;
}
void z10a(int x1, int y1, int x2, int y2)
{
	std::cout << min(((x1, y1), x2), y2) << std::endl;
}
void z11a(int x1, int y1, int x2, int y2)
{
	std::cout << min(((x1, y1), x2), y2) + min((x1, x2), y1) << std::endl;
}
void z12a(int x1, int y1, int x2, int y2)
{
	std::cout << max(((x1, y1), x2), y2) + max((x1, x2), y1) << std::endl;
}*/
void z1b(int x, int y, int z)
{
	if (x <= y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y <= z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x <= y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z<<std::endl;
}
void z2b(int x, int y, int z)
{
	if (x > y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y > z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x > y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z<<std::endl;
}
void z3b(int x1, int x2, int x3, int x4)
{
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 > x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	if (x2 > x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	std::cout << x1 << ' '<< x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z4b(int x1, int x2, int x3, int x4)
{
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 < x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	std::cout <<x1 << ' ' << x2 << ' ' << x3 <<' ' << x4<<std::endl;
}
void z5b(int x1, int x2, int x3, int x4)
{
	if (x2 > x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 <= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 <= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout <<x1 <<' ' <<x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z6b(int x1, int x2, int x3, int x4)
{
	if (x2 < x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;

	}
	if (x1 >= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 >= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z7b(int x1, int x2, int x3, int x4)
{
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 <= x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 <= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	if (x2 <= x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z8b(int x1, int x2, int x3, int x4)
{
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x1 > x2)
	{
		int swap3 = x1;
		x1 = x2;
		x2 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z9b(int x1, int x2, int x3, int x4)
{
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z10b(int x1, int x2, int x3, int x4)
{
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x1 > x2)
	{
		int swap3 = x1;
		x1 = x2;
		x2 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z11b(int x1, int x2, int x3, int x4)
{
	if (x2 > x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 <= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 <= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
void z12b(int x1, int x2, int x3, int x4)
{
	if (x2 < x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 >= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 >= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4<<std::endl;
}
int main()
{
	//z1(1);
	//z2(-1);
	//z3(0);
	//z4(2,3,4);
	//z5(2, 3, -1);
	//z6(4, 3);
//	z7(1, 4);
	//z8(3, 2);
	//z9(3, 2);
	//z10(3, 0);
	//z11(4,6);
//	z12(2,3,5);
	//if11(1, 0);
	//if13(2, 1, 4);
	//if16(4,6,5);
//	if17(4, 3, 4);
//	if18(2,1,2);
//	if19(2,4,2,2);
	//if20(2,5,4);
	//if21(0, 0);
	//if22(1,2);
	//if24(1);
//	if25(1);
	//if26(1);
	//if27(1);
	//if28(1);
	//if29(1);
	//if30(101);
	//z1a(3, 5, 2);
	//z2a(2, 6, 4);
	//z3a(3, 2, 5, 4);
	//z4a(3, 2, 5, 4);
	//z5a(3, 2, 5, 4);
	//z6a(3, 2, 5, 4);
	//z7a(2, 5, 3);
	//z8a(4, 2, 7);
	//z9a(4, 2, 7, 3);
	//z10a(4, 2, 7, 2);
	//z11a(2, 5, 2, 6);
	//z12a(2, 5, 2, 6);
	z1b(9, 5, 7);
	z2b(3,6,2);
	z3b(2, 5, 2, 4);
	z4b(4, 2, 7, 1);
	z5b(1,4,4,1);
	z6b(2, 6, 8, 3);
	z7b(2, 6, 6, 2);
	z8b(9, 8, 2, 7);
	z9b(5, 2, 8, 1);
	z10b(3, 2, 7, 4);
	z11b(4, 2, 4, 1);
	z12b(4, 2, 7, 1);
	return 0;
}