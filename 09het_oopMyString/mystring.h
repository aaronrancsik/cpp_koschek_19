/**
 * @author Hőgyes Norbert
 */

#include <iostream>
using namespace std;

class CMyString {


	private:

        static int i_counter;
		char *	m_pchData;
		int		m_nDataLength;
	public:

		CMyString();
		CMyString(const char * psz);
		CMyString(char ch, int nRepeat = 1);
		~CMyString();

		int getObjectCount();
        int	 GetLength() const;
        char GetAt(int nIndex) const;
        void SetAt(int nIndex, char ch);
        void Append(const char * psz);
        void Display() const;
        void Reverse();
        CMyString&  operator=(const CMyString & str);
        CMyString(const CMyString & str);

        friend ostream &operator<<(ostream &os, const CMyString &myString);

    char & operator [] (int index);

};

class CMyStringException
{
	private:
		const char * m_message;
	public:
		CMyStringException();
		CMyStringException(const char * message);
		~CMyStringException();

	const char * getMessage();
};
