#ifndef CHATDCPS_H
#define CHATDCPS_H

#include <dds_dcps.h>


#define Chat_MAX_NAME                  32L

typedef DDS_string Chat_nameType;
 Chat_nameType *Chat_nameType__alloc (DDS_unsigned_long len);

#ifndef _Chat_ChatMessage_defined
#define _Chat_ChatMessage_defined
#ifdef __cplusplus
struct Chat_ChatMessage;
#else /* __cplusplus */
typedef struct Chat_ChatMessage Chat_ChatMessage;
#endif /* __cplusplus */
#endif /* _Chat_ChatMessage_defined */
 Chat_ChatMessage *Chat_ChatMessage__alloc (void);

struct Chat_ChatMessage {
    DDS_long userID;
    DDS_long index;
    DDS_string content;
    DDS_long userAge;
};

#ifndef _Chat_NameService_defined
#define _Chat_NameService_defined
#ifdef __cplusplus
struct Chat_NameService;
#else /* __cplusplus */
typedef struct Chat_NameService Chat_NameService;
#endif /* __cplusplus */
#endif /* _Chat_NameService_defined */
 Chat_NameService *Chat_NameService__alloc (void);

struct Chat_NameService {
    DDS_long userID;
    Chat_nameType name;
};

#ifndef _Chat_NamedMessage_defined
#define _Chat_NamedMessage_defined
#ifdef __cplusplus
struct Chat_NamedMessage;
#else /* __cplusplus */
typedef struct Chat_NamedMessage Chat_NamedMessage;
#endif /* __cplusplus */
#endif /* _Chat_NamedMessage_defined */
 Chat_NamedMessage *Chat_NamedMessage__alloc (void);

struct Chat_NamedMessage {
    DDS_long userID;
    Chat_nameType userName;
    DDS_long index;
    DDS_string content;
};

#endif
