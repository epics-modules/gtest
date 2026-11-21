/* RTEMS entry point shared by the sample test harnesses. */
#include <epicsExit.h>
#include <epicsGeneralTime.h>

extern void epicsRunSampleTests(void);

int main(int argc, char **argv)
{
    generalTimeReport(1);
    epicsRunSampleTests();
    epicsExit(0);
    return 0;
}
