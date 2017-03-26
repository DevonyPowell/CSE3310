#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif
#ifndef CCPP_CHAT_H
#define CCPP_CHAT_H

#include "ccpp.h"
#include "Chat.h"
#include "ChatDcps.h"
#include <orb_abstraction.h>
#include "ChatDcps_impl.h"

#endif /* CCPP_CHAT_H */

#ifdef CHAT_DCPS_TYPESUPPORT_DEFINED
#ifndef CHAT_DCPS_HPP_
#define CHAT_DCPS_HPP_
#include "dds/dds.hpp"

REGISTER_TOPIC_TRAITS(::Chat::ChatMessage)
REGISTER_TOPIC_TRAITS(::Chat::NameService)
REGISTER_TOPIC_TRAITS(::Chat::NamedMessage)

#endif
#endif
