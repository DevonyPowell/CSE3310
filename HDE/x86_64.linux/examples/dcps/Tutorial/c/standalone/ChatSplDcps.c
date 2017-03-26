#if defined (__cplusplus)
extern "C" {
#endif

#include "ChatSplDcps.h"
#include "ChatDcps.h"

const char *
__Chat_ChatMessage__name(void)
{
    return (const char*)"Chat::ChatMessage";
}

const char *
__Chat_ChatMessage__keys(void)
{
    return (const char*)"userID";
}

const char *
__Chat_NameService__name(void)
{
    return (const char*)"Chat::NameService";
}

const char *
__Chat_NameService__keys(void)
{
    return (const char*)"userID";
}

const char *
__Chat_NamedMessage__name(void)
{
    return (const char*)"Chat::NamedMessage";
}

const char *
__Chat_NamedMessage__keys(void)
{
    return (const char*)"userID";
}

/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 138 */
#include <v_kernel.h>
#include <v_topic.h>
#include <string.h>
#include <os_report.h>

/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 212 */
c_bool
__Chat_ChatMessage__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    Chat_ChatMessage *from = (Chat_ChatMessage *)_from;
    struct _Chat_ChatMessage *to = (struct _Chat_ChatMessage *)_to;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 292 */
    to->userID = (c_long)from->userID;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 292 */
    to->index = (c_long)from->index;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 298 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->content) {
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 325 */
        to->content = c_stringNew(base, from->content);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::ChatMessage.content' of type 'c_string' is NULL.");
        result = FALSE;
    }
#else
    to->content = c_stringNew(base, from->content);
#endif
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 292 */
    to->userAge = (c_long)from->userAge;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 244 */
    (void) base;
    return result;
}

/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 212 */
c_bool
__Chat_NameService__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    Chat_NameService *from = (Chat_NameService *)_from;
    struct _Chat_NameService *to = (struct _Chat_NameService *)_to;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 292 */
    to->userID = (c_long)from->userID;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 537 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 298 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 303 */
        if (((unsigned int)strlen(from->name)) <= 32) {
            to->name = c_stringNew(base, from->name);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NameService.name' of type 'C_STRING<32>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NameService.name' of type 'C_STRING<32>' is NULL.");
        result = FALSE;
    }
#else
    to->name = c_stringNew(base, from->name);
#endif
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 244 */
    (void) base;
    return result;
}

/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 212 */
c_bool
__Chat_NamedMessage__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    Chat_NamedMessage *from = (Chat_NamedMessage *)_from;
    struct _Chat_NamedMessage *to = (struct _Chat_NamedMessage *)_to;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 292 */
    to->userID = (c_long)from->userID;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 537 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 298 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->userName) {
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 303 */
        if (((unsigned int)strlen(from->userName)) <= 32) {
            to->userName = c_stringNew(base, from->userName);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NamedMessage.userName' of type 'C_STRING<32>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NamedMessage.userName' of type 'C_STRING<32>' is NULL.");
        result = FALSE;
    }
#else
    to->userName = c_stringNew(base, from->userName);
#endif
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 292 */
    to->index = (c_long)from->index;
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 491 */
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 298 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->content) {
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 325 */
        to->content = c_stringNew(base, from->content);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NamedMessage.content' of type 'c_string' is NULL.");
        result = FALSE;
    }
#else
    to->content = c_stringNew(base, from->content);
#endif
/* Code generated in file: /home/dds/OvernightTests/tmp.j3XyO86N0W/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 244 */
    (void) base;
    return result;
}

#include <dds_dcps_private.h>

void
__Chat_ChatMessage__copyOut(void *_from, void *_to)
{
    struct _Chat_ChatMessage *from = (struct _Chat_ChatMessage *)_from;
    Chat_ChatMessage *to = (Chat_ChatMessage *)_to;
    to->userID = (DDS_long)from->userID;
    to->index = (DDS_long)from->index;
    DDS_string_replace (from->content ? from->content : "", &to->content);
    to->userAge = (DDS_long)from->userAge;
}

void
__Chat_NameService__copyOut(void *_from, void *_to)
{
    struct _Chat_NameService *from = (struct _Chat_NameService *)_from;
    Chat_NameService *to = (Chat_NameService *)_to;
    to->userID = (DDS_long)from->userID;
    DDS_string_replace (from->name ? from->name : "", &to->name);
}

void
__Chat_NamedMessage__copyOut(void *_from, void *_to)
{
    struct _Chat_NamedMessage *from = (struct _Chat_NamedMessage *)_from;
    Chat_NamedMessage *to = (Chat_NamedMessage *)_to;
    to->userID = (DDS_long)from->userID;
    DDS_string_replace (from->userName ? from->userName : "", &to->userName);
    to->index = (DDS_long)from->index;
    DDS_string_replace (from->content ? from->content : "", &to->content);
}

#include <dds_dcps_private.h>

Chat_nameType *Chat_nameType__alloc (DDS_unsigned_long len)
{
    return (Chat_nameType *)DDS_string_alloc (len);
}

Chat_ChatMessage *Chat_ChatMessage__alloc (void)
{
    DDS_boolean Chat_ChatMessage__free (void *object);

    return (Chat_ChatMessage *)DDS__malloc (Chat_ChatMessage__free, 0, sizeof(Chat_ChatMessage));
}

DDS_boolean Chat_ChatMessage__free (void *object)
{
    Chat_ChatMessage *o = (Chat_ChatMessage *)object;

    DDS_string_clean (&o->content);
    return TRUE;
}

Chat_NameService *Chat_NameService__alloc (void)
{
    DDS_boolean Chat_NameService__free (void *object);

    return (Chat_NameService *)DDS__malloc (Chat_NameService__free, 0, sizeof(Chat_NameService));
}

DDS_boolean Chat_NameService__free (void *object)
{
    Chat_NameService *o = (Chat_NameService *)object;

    DDS_string_clean (&o->name);
    return TRUE;
}

Chat_NamedMessage *Chat_NamedMessage__alloc (void)
{
    DDS_boolean Chat_NamedMessage__free (void *object);

    return (Chat_NamedMessage *)DDS__malloc (Chat_NamedMessage__free, 0, sizeof(Chat_NamedMessage));
}

DDS_boolean Chat_NamedMessage__free (void *object)
{
    Chat_NamedMessage *o = (Chat_NamedMessage *)object;

    DDS_string_clean (&o->userName);
    DDS_string_clean (&o->content);
    return TRUE;
}

const char * Chat_ChatMessage_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"Chat\"><Struct name=\"ChatMessage\"><Member name=\"userID\">",
"<Long/></Member><Member name=\"index\"><Long/></Member><Member name=\"content\"><String/></Member><Member name=\"userAge\">",
"<Long/></Member></Struct></Module></MetaData>"};
const c_ulong  Chat_ChatMessage_metaDescriptorArrLength = 3;
const char * Chat_NameService_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"Chat\"><TypeDef name=\"nameType\"><String length=\"32\"/></TypeDef>",
"<Struct name=\"NameService\"><Member name=\"userID\"><Long/></Member><Member name=\"name\"><Type name=\"nameType\"/>",
"</Member></Struct></Module></MetaData>"};
const c_ulong  Chat_NameService_metaDescriptorArrLength = 3;
const char * Chat_NamedMessage_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"Chat\"><TypeDef name=\"nameType\"><String length=\"32\"/></TypeDef>",
"<Struct name=\"NamedMessage\"><Member name=\"userID\"><Long/></Member><Member name=\"userName\"><Type name=\"nameType\"/>",
"</Member><Member name=\"index\"><Long/></Member><Member name=\"content\"><String/></Member></Struct></Module>",
"</MetaData>"};
const c_ulong  Chat_NamedMessage_metaDescriptorArrLength = 4;
#if defined (__cplusplus)
}
#endif
