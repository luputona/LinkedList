#include "stdafx.h"

C_LINKED2::C_LINKED2() :
m_pMainNode(NULL),
m_ppLastNode(NULL)
{
	m_ppLastNode = &m_pMainNode;
}
void C_LINKED2::addData(int nData)
{
	
	*m_ppLastNode = new S_NODE;
	(*m_ppLastNode)->nData = nData;
	(*m_ppLastNode)->pNode = NULL;
	m_ppLastNode = &(*m_ppLastNode)->pNode;
}
void C_LINKED2::printData()
{
	
	S_NODE *pTmpNode = m_pMainNode;
	while(pTmpNode)
	{
		printf("%d\n" , pTmpNode->nData);
		pTmpNode = pTmpNode->pNode;
	}
	printf("-----------\n");
}
void C_LINKED2::deleteIndex(int nIndex)
{
	S_NODE **ppFindNode = &m_pMainNode;
	int nCount = 0;
	
	while(nCount < nIndex && *ppFindNode)
	{		
		ppFindNode = &(*ppFindNode)->pNode;
		nCount++;
	}
	if (!*ppFindNode)
		return;

	S_NODE *pDelNode = *ppFindNode;
	*ppFindNode = pDelNode->pNode;
	delete pDelNode;
	pDelNode = NULL;
	
	if (!*ppFindNode)	
		m_ppLastNode = ppFindNode;
	
}
void C_LINKED2::deleteData(int nValue)
{
	S_NODE**ppFindNode = &m_pMainNode;
	

	while(*ppFindNode)
	{	
		if ((*ppFindNode)->nData == nValue)
		{			
			S_NODE *pDelNode = *ppFindNode;
			*ppFindNode = pDelNode->pNode;

			if (!*ppFindNode)	
				m_ppLastNode = ppFindNode;

			delete pDelNode;			
			pDelNode = NULL;
		}
		else
			ppFindNode = &(*ppFindNode)->pNode;
	}

}
