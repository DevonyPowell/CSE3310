#include "ChatSplDcps.h"
#include "Chat_DCPS.hpp"

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

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>
#include <org/opensplice/core/EntityRegistry.hpp>

c_bool
__Chat_ChatMessage__copyIn(
    c_base base,
    class ::Chat::ChatMessage *from,
    struct _Chat_ChatMessage *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->userID = (c_long)from->userID_;
    to->index = (c_long)from->index_;
#ifdef OSPL_BOUNDS_CHECK
        to->content = c_stringNew(base, from->content_.c_str());
#else
            to->content = c_stringNew(base, from->content_.c_str());
#endif
    to->userAge = (c_long)from->userAge_;
    return result;
}

c_bool
__Chat_NameService__copyIn(
    c_base base,
    class ::Chat::NameService *from,
    struct _Chat_NameService *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->userID = (c_long)from->userID_;
#ifdef OSPL_BOUNDS_CHECK
        if(((unsigned int)from->name_.length())) <= 32){
            to->name = c_stringNew(base, from->name_.c_str());
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NameService.name' of type 'C_STRING<32>' is out of range.");
            result = OS_C_FALSE;
        }
#else
            to->name = c_stringNew(base, from->name_.c_str());
#endif
    return result;
}

c_bool
__Chat_NamedMessage__copyIn(
    c_base base,
    class ::Chat::NamedMessage *from,
    struct _Chat_NamedMessage *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->userID = (c_long)from->userID_;
#ifdef OSPL_BOUNDS_CHECK
        if(((unsigned int)from->userName_.length())) <= 32){
            to->userName = c_stringNew(base, from->userName_.c_str());
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Chat::NamedMessage.userName' of type 'C_STRING<32>' is out of range.");
            result = OS_C_FALSE;
        }
#else
            to->userName = c_stringNew(base, from->userName_.c_str());
#endif
    to->index = (c_long)from->index_;
#ifdef OSPL_BOUNDS_CHECK
        to->content = c_stringNew(base, from->content_.c_str());
#else
            to->content = c_stringNew(base, from->content_.c_str());
#endif
    return result;
}

INSTANTIATE_TYPED_REGISTRIES(::Chat::ChatMessage)

void
__Chat_ChatMessage__copyOut(
    void *_from,
    void *_to)
{
    struct _Chat_ChatMessage *from = (struct _Chat_ChatMessage *)_from;
    class ::Chat::ChatMessage *to = (class ::Chat::ChatMessage *)_to;
    to->userID_ = (::DDS::Long)from->userID;
    to->index_ = (::DDS::Long)from->index;
    to->content_ = (from->content ? from->content : "");
    to->userAge_ = (::DDS::Long)from->userAge;
}

INSTANTIATE_TYPED_REGISTRIES(::Chat::NameService)

void
__Chat_NameService__copyOut(
    void *_from,
    void *_to)
{
    struct _Chat_NameService *from = (struct _Chat_NameService *)_from;
    class ::Chat::NameService *to = (class ::Chat::NameService *)_to;
    to->userID_ = (::DDS::Long)from->userID;
    to->name_ = (from->name ? from->name : "");
}

INSTANTIATE_TYPED_REGISTRIES(::Chat::NamedMessage)

void
__Chat_NamedMessage__copyOut(
    void *_from,
    void *_to)
{
    struct _Chat_NamedMessage *from = (struct _Chat_NamedMessage *)_from;
    class ::Chat::NamedMessage *to = (class ::Chat::NamedMessage *)_to;
    to->userID_ = (::DDS::Long)from->userID;
    to->userName_ = (from->userName ? from->userName : "");
    to->index_ = (::DDS::Long)from->index;
    to->content_ = (from->content ? from->content : "");
}

