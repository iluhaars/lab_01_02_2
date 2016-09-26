#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <iostream>

using namespace std;

struct date
{
	int day;
	int month;
	int year;
}dat;

struct da
{
	int mas_day[100];
	int mas_month[100];
	int mas_year[100];
}d;

class Date
{
	int n;
	int i;
public:
	int kol()
	{
		printf("введите количество лет:	");
		scanf("%d", &n);
		return n;
	}
	void zapis()
	{
		for (i = 0; i < n; i++)
		{
			printf("введите день, мес€ц и год:	");
			scanf("%d %d %d", &dat.day, &dat.month, &dat.year);
		}
	}
	void show()
	{
		for (i = 0; i < n; i++)
		{
			printf("%d.%d.%d", dat.day, dat.month, dat.year);
			printf("\n");
		}
	}
	void zapis1()
	{
		for (i = 0; i < n; i++)
		{
			printf("введите день:	");
			scanf("%d", &d.mas_day[i]);
			printf("введите мес€ц:	");
			scanf("%d", &d.mas_month[i]);
			printf("введите год:	");
			scanf("%d", &d.mas_year[i]);
		}
	}
	void show1()
	{
		for (i = 0; i < n; i++)
		{
			printf("%d.%d.%d", d.mas_day[i], d.mas_month[i], d.mas_year[i]);
			printf("\n");
		}
	}
	friend class frien;
}s1;



class frien
{
	int days;
	int days_1;
	int days_2;
	int i;
	int y;
	int z;
public:
	void vvod()
	{
		printf("введите день событи€:	");
		scanf("%d", &days_1);
		printf("введите день второго событи€:");
		scanf("%d", &days_2);
	}
	void sravn()
	{
		i = 0;
		if (days_1 == d.mas_day[i])
			y = i;
		else i++;
		if (days_2 == d.mas_day[i])
			z = i;
		else i++;
		days = (d.mas_day[z] - d.mas_day[y]) + ((d.mas_month[z] - d.mas_month[y]) * 30) + ((d.mas_year[z] - d.mas_year[y]) * 365);
		printf("%d", &days);
	}
}s2;

