/*
 * The information in this file is
 * Copyright(c) 2009 Todd A. Johnson
 * and is subject to the terms and conditions of the
 * GNU Lesser General Public License Version 2.1
 * The license text is available from   
 * http://www.gnu.org/licenses/lgpl.html
 */

#include "RasterMathException.h"

#include <sstream>

std::string RasterMathException::defaultMessage(const std::string& prefix, const char* pFileName, int line)
{
   std::stringstream s;
   s << prefix << std::endl << "File: " << pFileName << std::endl << "Line: " << line;
   return s.str();
}
