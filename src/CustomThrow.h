
#ifndef CUSTOM_THROW_H
#define CUSTOM_THROW_H

#include <iostream>
#include <sstream>
#include <string>
#include <exception>

#define CUSTOM_THROW(message) throw CustomThrow(message, __FILE__, __LINE__ )

class CustomThrow : public std::exception {
private:
   std::string m_Message;
   std::string m_FileName;
   unsigned int m_FileLineNumber;
   std::string m_FullMessage;
   void buildFullMessage();

public:
   CustomThrow(const std::string& message, const std::string& fileName, unsigned int fileLineNumber);
   CustomThrow(const char* message, const std::string& fileName, unsigned int fileLineNumber);
   CustomThrow(const std::string& message, const char* fileName, unsigned int fileLineNumber);
   CustomThrow(const char* message, const char* fileName, unsigned int fileLineNumber);

   virtual const char* what() const throw();

};

#endif