#include"Server.h"

int main(int argc, char* argv[])
{
	int flag = 0;
	Server::__start(argc,argv);
	while (flag == 0)Server::__trans(flag);
	Server::__end();
	system("pause");
}