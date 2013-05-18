//#define WS_DEBUG
//#define SHOW_TABLES_CONTENT

#ifdef WS_DEBUG
#define WS_dputs(str) printf("%s %d:  %s\n", __func__, __LINE__, str)
#define WS_dprintf(fmt, args...) printf("%s %d:  "fmt"\n", __func__, __LINE__, ##args)
#define WSMSGLog(fmt, ...) NSLog((@"%s:%d " fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define WSLogEnter  NSLog(@"%s:%d %@", __FUNCTION__, __LINE__, @"Enter -->");
#define WSLogExit   NSLog(@"%s:%d %@", __FUNCTION__, __LINE__, @"<--Exist");
#else
#define WS_dputs(str)
#define WS_dprintf(fmt, args...)
#define WSMSGLog(fmt, ...)
#define WSLogEnter  
#define WSLogExit   
#endif

#define WSLog(fmt, ...) NSLog((@"%s:%d " fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)

