// test01.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	C_LINKED2 cLinked;
	cLinked.addData(1);
	cLinked.addData(3);
	cLinked.addData(3);
	cLinked.addData(3);
	cLinked.addData(1);
	cLinked.printData();
	cLinked.deleteData(3);
	cLinked.printData();
	cLinked.addData(999);
	cLinked.printData();
	
	return 0;
}

