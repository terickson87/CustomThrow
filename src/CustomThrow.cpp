
#include "CustomThrow.h"

CustomThrow::CustomThrow(const std::string& message, const std::string& fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber) {
}

CustomThrow::CustomThrow(const char* message, const std::string& fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber) {
}

CustomThrow::CustomThrow(const std::string& message, const char* fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber) {
}

CustomThrow::CustomThrow(const char* message, const char* fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber) {
   
}

const char* CustomThrow::what() const throw() {
   std::ostringstream oStringBuilder;
   oStringBuilder << "Exception:";
   oStringBuilder << "File: " << m_FileName;
   oStringBuilder << ", Line: " << m_FileLineNumber;
   oStringBuilder << ", " << m_Message;
   std::string fullMessage = oStringBuilder.str();
   return fullMessage.c_str();
}