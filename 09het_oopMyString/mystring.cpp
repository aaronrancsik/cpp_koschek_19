/**
 * @author Hőgyes Norbert
*/

#include "mystring.h"
#include <cstring>
#include <iostream>


CMyStringException::CMyStringException() {
	m_message = NULL;
}

CMyStringException::CMyStringException(const char * s) {
	m_message = s;
}

const char * CMyStringException::getMessage() {
	return m_message;
}

CMyStringException::~CMyStringException() {

}


char * copystring(const char * s, char * d) {
	int i = 0;

	while (s[i] != '\0') {
		d[i] = s[i];
		i++;
	}

	return d;
}

int stringlegth(const char * s) {
	int i = 0;

	while (s[i] != '\0') {
		i++;
	}

	return i;
}

#ifdef DEBUG
    int CMyString::i_counter = 0;
#endif


CMyString::CMyString()
{

#ifdef DEBUG
    i_counter++;
#endif

	m_pchData		= NULL;
	m_nDataLength	= 0;
}

CMyString::CMyString(const char * psz)
{
#ifdef DEBUG
    i_counter++;
#endif

	if (psz == NULL || !stringlegth(psz))
	{
		m_pchData		= NULL;
		m_nDataLength	= 0;

		return;
	}

	m_nDataLength	= stringlegth(psz);
	m_pchData		= new char[m_nDataLength];

	copystring(psz, m_pchData);
}

CMyString::CMyString(char ch, int nRepeat)
{
#ifdef DEBUG
    i_counter++;
#endif
	m_nDataLength	= nRepeat;
	m_pchData		= new char[nRepeat];

	for (int i = 0; i < nRepeat; i++)
	{
		m_pchData[i] = ch;
	}
}

int CMyString::GetLength() const
{
	return m_nDataLength;
}

char CMyString::GetAt(int nIndex) const
{
	if (nIndex < 0 || nIndex > m_nDataLength - 1)
	{
		throw new CMyStringException("Index out of range");
	}

	return m_pchData[nIndex];
}

void CMyString::SetAt(int nIndex, char ch)
{
	if (nIndex < 0 || nIndex > m_nDataLength - 1)
	{
		throw new CMyStringException("Index out of range");
	}

	m_pchData[nIndex] = ch;
}

void CMyString::Append(const char * psz)
{
	int pszLength = strlen(psz);
	int newLength = pszLength + m_nDataLength;

	char * tmp = new char[newLength];

	copystring(m_pchData, tmp);
	copystring(psz, tmp + m_nDataLength);

	delete [] m_pchData;

	m_nDataLength = newLength;
	m_pchData = new char[m_nDataLength];

	copystring(tmp, m_pchData);
}

void CMyString::Display() const {
	cout << m_pchData << '\n';
}

void CMyString::Reverse() {
	char * tmp = new char[m_nDataLength];

	for (int i = 0; i < m_nDataLength ; i++)
	{
		tmp[i] = m_pchData[m_nDataLength - i - 1];
	}

	delete [] m_pchData;

	m_pchData = tmp;
}

CMyString::~CMyString() {
#ifdef DEBUG
    i_counter--;
#endif
	delete [] m_pchData;
}

CMyString& CMyString::operator=(const CMyString & str)
{
    if( &str  != this)
    {
        delete [] m_pchData;
        m_nDataLength = 0;

        if(&str != nullptr)
        {
            m_nDataLength	= str.m_nDataLength;
            m_pchData 		= new char[m_nDataLength+1];
            copystring(str.m_pchData, m_pchData);
        }

    }
    return *this;

}
CMyString::CMyString(const CMyString &str)
{
#ifdef DEBUG
    i_counter++;
#endif
    if(&str != nullptr)
    {
        m_nDataLength = str.m_nDataLength;
        m_pchData = new char[m_nDataLength + 1];
        copystring(str.m_pchData, m_pchData);
    }
}
int CMyString::getObjectCount()
{
    return i_counter;
}


char & CMyString::operator[](int index)
{
    if (index < 0 || index > m_nDataLength - 1)
    {
        throw new CMyStringException("Index out of range");
    }
    return  m_pchData[index];
}

ostream &operator<<(ostream &os, const CMyString &myString)
{
    os << myString.m_pchData;
    return os;
}
