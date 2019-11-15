#pragma once
#include <concrt.h>
#include "..\Log\tstring.h"
#include <exception>

class CYWSAException : public std::exception
{
public:
	CYWSAException(const char* file, const char* func, int line) throw();
	CYWSAException(const char* file, const char* func) throw();
	CYWSAException(const char* file) throw();
	CYWSAException() throw();
	virtual ~CYWSAException(){}

public:
	DWORD GetErrorCode() const;
	std::string GetMessage() const;
	const char* GetClassName() const;
	const char* what() const throw();
	const std::string& ToString() const;

protected:
	DWORD m_dwErrorCode;
	std::string m_sMessage;
	const char* m_szFile;
	const char* m_szFunc;
	int m_nLine;

private:
	mutable std::string m_sWhat;
};
