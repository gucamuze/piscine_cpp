#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _max_size(0), _cur_size(0) {}
Span::Span(unsigned int N) : _max_size(N), _cur_size(0) {
	this->_vector = std::vector<int>(N);
}
Span::Span(const Span &src) {*this = src;}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_max_size = rhs._max_size;
		this->_cur_size = rhs._cur_size;
		this->_vector = rhs._vector;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Span const &i)
{
	std::vector<int>	vector = i.getVector();
	unsigned int		size = i.getCurSize();

	for (size_t i = 0; i < size; i++)
		o << "Span["<<i<<"] value => " << vector.at(i) << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	Span::addNumber(int number)
{
	if (this->_cur_size < this->_max_size) {
		this->_vector.push_back(number);
		this->_cur_size++;
	}
	else throw Span::MaxSizeReachedException();
}

void	Span::fillIt(void)
{
	std::srand(std::time(0));
	std::vector<int>	filledVector(this->_max_size);
	std::cout << "size 1 " << this->_vector.capacity() << std::endl;
	std::generate(filledVector.begin(), filledVector.end(), rand);
	// this->_vector = filledVector;
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_cur_size < 2)
		throw Span::NoSpanFoundException();
	std::vector<int>	sorted_vector = this->_vector;
	std::vector<int>	results(sorted_vector.size());
	
	std::sort(sorted_vector.begin(), sorted_vector.end());
	std::adjacent_difference(
		sorted_vector.begin(),
		sorted_vector.end(),
		results.begin()
	);
	results.erase(results.begin()); // delete first as its just the first elem
	std::for_each(results.begin(), results.end(), abs);
    std::vector<int>::const_iterator min = std::min_element(
		results.begin(),
		results.end()
	);
	return *min;
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_cur_size < 2)
		throw Span::NoSpanFoundException();

    std::vector<int>::const_iterator max = std::max_element(
		_vector.begin(),
		_vector.end()
	);
    std::vector<int>::const_iterator min = std::min_element(
		_vector.begin(),
		_vector.end()
	);
	// std::cout << "min => " << *min << "\tmax => " << *max << std::endl;
	return *max - *min;
}

void	Span::printSpan(void) const
{
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int const		&Span::getCurSize() const
{
	return this->_cur_size;
}
std::vector<int> const	&Span::getVector() const
{
	return this->_vector;
}

/*
** -------------------------------- EXCEPTIONS --------------------------------
*/

const char	*Span::MaxSizeReachedException::what() const throw()
{
	return "Span max size reached";
}
const char	*Span::NoSpanFoundException::what() const throw()
{
	return "No span can be found";
}

/* ************************************************************************** */