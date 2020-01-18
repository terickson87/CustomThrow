
#include "CustomThrow.h"

CustomThrow::CustomThrow(const std::string& message, const std::string& fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber), m_FullMessage("") {
   this->buildFullMessage();
}

CustomThrow::CustomThrow(const char* message, const std::string& fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber), m_FullMessage("") {
   this->buildFullMessage();
}

CustomThrow::CustomThrow(const std::string& message, const char* fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber), m_FullMessage("") {
   this->buildFullMessage();
}

CustomThrow::CustomThrow(const char* message, const char* fileName, unsigned int fileLineNumber)
   : m_Message(message), m_FileName(fileName), m_FileLineNumber(fileLineNumber), m_FullMessage("") {
   this->buildFullMessage();
}

const char* CustomThrow::what() const throw() {
   return m_FullMessage.c_str();
}

void CustomThrow::buildFullMessage() {
   std::ostringstream oStringBuilder;
   oStringBuilder << "Exception: " << m_Message << ". ";
   oStringBuilder << "File: " << m_FileName;
   oStringBuilder << ", Line: " << m_FileLineNumber << "." << std::endl;
   std::string fullMessage = oStringBuilder.str();
   m_FullMessage = fullMessage.c_str();
}