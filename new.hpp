/* Header file of new library ********
 * file new.hpp               *******/

class complex{
public:
	complex(const double real, const double imag);
	int FailFunction();
private:
	double m_real;
	double m_imaginary;
};
