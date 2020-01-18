


#include "CustomThrow.h"

int subSubFuntionThrow() {
   CUSTOM_THROW("subSubFuntionThrow");
}

int subFunctionThrow() {
   CUSTOM_THROW("subFuntionThrow");
   subSubFuntionThrow();
   CUSTOM_THROW("subFuntionThrow");
}

int main()
{
   try
   {
      subFunctionThrow();
   }
   catch(const std::exception& e)
   {
      std::cerr << "Exception Encountered: " << e.what() << '\n';
   }
   
   return 0;
}
