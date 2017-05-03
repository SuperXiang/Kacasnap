#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// The information of the program is controlled by 
// the following attributes. You can change the information
// of the program by changing the attibutes
//
[assembly:AssemblyTitleAttribute("Kacasnap")];
[assembly:AssemblyDescriptionAttribute("")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("Microsoft China")];
[assembly:AssemblyProductAttribute("Kacasnap")];
[assembly:AssemblyCopyrightAttribute("Copyright (c) 2012")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];

//
// The version information of the program consists of the following:
//
//      The major version
//      The minor version
//      The internal version number
//      Revision number
//
// You can assign all the values or use the default value of "revision number" 
// and "the internal version number" as following:

[assembly:AssemblyVersionAttribute("1.0.*")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];

[assembly:SecurityPermission(SecurityAction::RequestMinimum, UnmanagedCode = true)];
