#include "DynArray.hh"



DynArray::DynArray(void):
	m_capacity(DYN_ARRAY_DEFAULT_SIZE), 
	m_size(0), 
	m_data(new int[m_capacity]){ 
};

DynArray::DynArray(size_t size, const int& value) :
	m_size(size), 
	m_capacity(size), 
	m_data(new int [size])	
{
	fill(begin(), end(), value);
};

DynArray::DynArray(int* arr, int size) :
	m_size(size), 
	m_capacity(size), 
	m_data(new int [size]) {

};

DynArray::DynArray(int *arr, size_t size):m_size(size), m_capacity(size), m_data() {
	
};

DynArray::~DynArray(void) {
	delete
};

DynArray& DynArray::operator=(const DynArray &x) {
	m_capacity = x.m_capacity;
	m_size = x.m_size;
	m_data = x.m_data;
};

int *DynArray::begin(void) const {
	return &m_data[0];
};

int *DynArray::end(void) const {
	return &m_data[m_capacity];
};

void DynArray::resize(size_t n) {
	m_capacity = n;
		m_size = n;
};

void DynArray::reserve(size_t n) {
	m_capacity = n;
};

void DynArray::shrink(void) {
	m_capacity = m_size;
};

bool DynArray::empty(void)const {
	return m_size < 0;
};

size_t DynArray::capacity(void) const {
	return m_capacity;
};

size_t DynArray::size(void) const {
	return m_size;
};

static void copy(int *first, int *last, int *dest) {

};

void DynArray::push(const int &val) {
	if (m_capacity <= m_size){
	}
	else {
		int *temp;
		temp = new int[m_capacity++];
		m_size++;
		for (int i =0; i > m_size; i++){
			temp[i] = m_data[i];
		}
		delete[] m_data;
		m_data = temp;
	}
	m_data[m_size-1] = val;
};












