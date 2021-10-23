#include"Client.h"

int main(int argc, char* argv[])
{
	int flag = 0;//定义传输结束标志
	Client::__connect(argc,argv);
	while (flag == 0)Client::__trans(flag);
	Client::__exit();
	system("pause");
	return 0;
}