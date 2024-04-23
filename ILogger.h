#include <string>
class ILogger{
    public:
    virtual void write(std::string message)=0;
};