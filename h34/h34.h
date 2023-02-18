/*
 *	@file h34.h
 *  @author Brian Cao
 *  @version Spring 2022
 */
#ifndef H34_H_
#define H34_H_

#include <string>

/////// Declare all of your classes here ////////////////
/////// In this order: Worker, SalariedWorker, HourlyWorker
class Worker 
{
	public:
	virtual ~Worker() = default;
	Worker(const std::string &name, double rate);
	std::string getName() const;
	double getRate() const;
	virtual std::string payInfo(int hours) const = 0;
   
    std::string name;
    double rate;
};

class SalariedWorker : public Worker 
{
	SalariedWorker(const std::string& name, double rate);
	std::string payInfo(int hours) const;
};

class HourlyWorker : public Worker 
{
	HourlyWorker(const std::string& name, double rate);
    std::string payInfo(int hours) const;
};




#endif
