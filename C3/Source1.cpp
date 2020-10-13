#include"Header.h"
int main()
{
	int dapan;
	srand(time(NULL));
	int res = rand() % (100 - 0 + 1);
	cout << "\nRandom so thu nhat la :" <<res<< endl;
	srand(time(NULL));
	int res2 = rand() % (100 - 0 + 1);
	cout << "\nRandom so thu nhat la :" << res2 << endl;
	int kq = res + res2;
	do
	{
		cout << "\nTong 2 so la bao nhieu:";
		cin >> dapan;
		if (dapan!=kq)
		{
			cout << "\nBan da nhap sai " << endl;
		}
	} while (dapan==kq);
	cout << "\nBan da tra loi dung , kq la " << kq<<endl;
	return 0;
}