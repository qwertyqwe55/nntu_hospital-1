#include "Patient.hpp"
#include <iostream>
#include <fstream>
using namespace std;

/**
 * @brief Реализация класса Patient
 *  
 * @param name ФИО пациента
 * @param diagnosis Диагноз пациента
 * @param departament Отделение, в котором лежит пациент
 * @param days Дней госпитализации
 * @param date Дата, когда пациент был госпитализирован
 */


Patient::Patient(){
		_name = "";
		_diagnosis = "";
		_department = "";
		_days = 0;
		_date = "";
		_next = NULL;
}

Patient::Patient(string name, string diagnosis, string department, int days, string date){
	_name = name;
	_diagnosis = diagnosis;
	_department = department;
	_days = days;
	_date = date;
	_next = NULL;
}

/**
 * @brief Метод, который меняет имя пациента на другое
 * 
 * @code
 * void Patient::setName(string name){
		_name = name;
    }
	@endcode
 */ 

void Patient::setName(string name){
	_name = name;
}

/**
 * @brief Метод, который меняет диагноз пациента на другой
 * 
 * @code
 *	void Patient::setDiagnosis(string diagnosis){
		_diagnosis = diagnosis;
	}
	@endcode
 */ 


void Patient::setDiagnosis(string diagnosis){
	_diagnosis = diagnosis;
}

/**
 * @brief Метод, который меняет отделение пациента на другое
 * 
 * @code
 	void Patient::setDepartment(string department){
		_department = department;
	}
	@endcode
 */ 

void Patient::setDepartment(string department){
	_department = department;
}

/**
 * @brief Метод, который меняет количество дней госпитализации пациента на другое
 * 
 * @code
	void Patient::setDays(int days){
		_days = days;
	}
	@endcode
 */ 

void Patient::setDays(int days){
	_days = days;
}

/**
 * @brief Метод, который меняет дату, когда пациента госпитализировали на другую
 * 
 * @code
	void Patient::setDate(string date){
		_date = date;
	}
	@endcode
 */ 

void Patient::setDate(string date){
	_date = date;
}


void Patient::setNext(Patient* next){
	_next = next;
}


void Patient::print(){
        cout << "Name: " << _name << endl;
        cout << "diagnosis: " << _diagnosis << endl;
        cout << "department:" << _department << endl;
        cout << "days:" << _days << endl;
        cout << "date: " << _date << endl;
}



/**
 *  @return Имя пациента
 */ 
string Patient::getName(){
	return _name;
}

/**
 *  @return Диагноз пациента
 */ 

string Patient::getDiagnosis(){
	return _diagnosis;
}

/**
 *  @return Отделение, в котором лежит пациент
 */ 

string Patient::getDepartment(){
	return _department;
}

/**
 *  @return Количество дней госпитализации пациента
 */ 

int Patient::getDays(){
	return _days;
}

/**
 *  @return Дату госпитализации пациента
 */ 

string Patient::getDate(){
	return _date;
}	

Patient* Patient::next(){
	return _next;	
}
