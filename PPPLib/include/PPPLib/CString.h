#ifndef NOVAC_PPPLIB_CSTRING_H
#define NOVAC_PPPLIB_CSTRING_H

#include <string>

namespace novac
{
	class CString
	{
	public:

		// ---------------------- Construction -----------------------
		CString();

		CString(const CString& other);

		CString(const char* other);

		CString(const std::string& other);

		~CString()
		{
		}

		// --------------------- Properties -----------------------

		size_t GetLength() const { return m_data.size(); }

		// --------------------- Formatting -----------------------
		void Format(const char* format, ...);

		// ---------------------- Extracting substrings -----------------------

		CString Left(int nChars) const;
		CString Left(size_t nChars) const;
		CString Right(int nChars) const;
		CString Right(size_t nChars) const;

		// ---------------------- Conversion -----------------------

		// explicit conversion to const char*
		operator const char*() const { return m_data.c_str(); }

		// explicit conversion to std::string
		std::string ToStdString() const { return std::string{m_data}; }

	private:
		std::string m_data;
	};
}

#endif // !NOVAC_PPPLIB_CSTRING_H
