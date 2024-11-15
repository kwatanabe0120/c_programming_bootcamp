# include <stdio.h>

// Leap = 1, not leap 0,
int isLeapyear(int year)
{
	if (year % 400 == 0)
		return 1;
	else if (year % 100 == 0)
		return 0;
	else if (year % 4 == 0)
		return 1;
	else 
		return 0;
}

int main ()
{
	int year, month, day;
	int isLeap;
	printf("Enter today (day month year): ");
	scanf("%d %d %d", &day, &month, &year);

	// Leap = 1, not leap 0,
	isLeap = isLeapyear(year);

	// 31日かつ31日まである月だった場合　と　30日かつ30日までしかない月は月のカウンターを１つ追加して、１ヶ月すすめる 
	if (((month == 1 || month == 3 || month == 5 || month == 8 || month == 10 || month == 12) && day == 31) || (month == 4 || month == 6 || month == 7 || month == 9 || month == 11) && day == 30)
	{
		day = 1;
		month += 1;
		// 加えて12月の場合は年を一年追加して1月に戻す
		if (month == 13)
			{
				year += 1;
				month = 1;
			}
	}
	else if (month == 2 &&  isLeap == 1 && day == 28) 
		{
			day += 1;
		}
	else if (month == 2 &&  isLeap == 1 && day == 29) 
		{
			day = 1;
			month += 1;
		}
	else if (month == 2 &&  isLeap == 0 && day == 28) 
		{
			day = 1;
			month += 1;
		}
	else 
	{
		day +=1;
	}

	printf("%d %d %d", day, month, year);

	return 0;
}