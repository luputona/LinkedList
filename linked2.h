#pragma once

class C_LINKED2
{
private:
	struct S_NODE
	{
		int nData;
		S_NODE *pNode;
				
	};
private:
	S_NODE * m_pMainNode;
	S_NODE ** m_ppLastNode;
public:
	C_LINKED2();
	void addData(int nData);
	void printData();
	void deleteIndex(int nIndex);
	void deleteData(int nValue);
};