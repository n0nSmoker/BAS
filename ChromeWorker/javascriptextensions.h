#ifndef JAVASCRIPTEXTENSIONS_H
#define JAVASCRIPTEXTENSIONS_H

#include <string>

class JavaScriptExtensions
{
public:
    JavaScriptExtensions();
    std::string GetUserAgentExtension(const std::string& UserAgent);
    std::string GetLanguage(const std::string& Language);

    std::string GetBasicExtension(bool IsRecord);
    std::string GetJqueryExtension();
};

#endif // JAVASCRIPTEXTENSIONS_H
