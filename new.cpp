/*** Unit of compilation    *****
 *** Library of new functions **/
#include "new.hpp"

complex::complex(const double real, const double imag):m_real(real),m_imaginary(imag)
{
}

int complex::FailFunction()
// Дурацкий метод. нужен только для того, чтобы посмотреть, как отменять изменения git-ом
{
	return -1;
}

