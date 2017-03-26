#ifndef CHATSACDCPS_H
#define CHATSACDCPS_H

#include "ChatDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define Chat_ChatMessageTypeSupport DDS_TypeSupport

 Chat_ChatMessageTypeSupport
Chat_ChatMessageTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
Chat_ChatMessageTypeSupport_register_type (
    Chat_ChatMessageTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
Chat_ChatMessageTypeSupport_get_type_name (
    Chat_ChatMessageTypeSupport _this
    );

#ifndef _DDS_sequence_Chat_ChatMessage_defined
#define _DDS_sequence_Chat_ChatMessage_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    Chat_ChatMessage *_buffer;
    DDS_boolean _release;
} DDS_sequence_Chat_ChatMessage;

 DDS_sequence_Chat_ChatMessage *DDS_sequence_Chat_ChatMessage__alloc (void);
 Chat_ChatMessage *DDS_sequence_Chat_ChatMessage_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_Chat_ChatMessage_defined */

#define Chat_ChatMessageDataWriter DDS_DataWriter

#define Chat_ChatMessageDataWriter_enable DDS_Entity_enable

#define Chat_ChatMessageDataWriter_get_status_changes DDS_Entity_get_status_changes

#define Chat_ChatMessageDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define Chat_ChatMessageDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_ChatMessageDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define Chat_ChatMessageDataWriter_get_listener DDS_DataWriter_get_listener

#define Chat_ChatMessageDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define Chat_ChatMessageDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define Chat_ChatMessageDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define Chat_ChatMessageDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define Chat_ChatMessageDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define Chat_ChatMessageDataWriter_get_publication_match_status DDS_DataWriter_get_publication_match_status

#define Chat_ChatMessageDataWriter_get_publisher DDS_DataWriter_get_publisher

#define Chat_ChatMessageDataWriter_get_qos DDS_DataWriter_get_qos

#define Chat_ChatMessageDataWriter_get_topic DDS_DataWriter_get_topic

#define Chat_ChatMessageDataWriter_set_listener DDS_DataWriter_set_listener

#define Chat_ChatMessageDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
Chat_ChatMessageDataWriter_register_instance (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data
    );

 DDS_InstanceHandle_t
Chat_ChatMessageDataWriter_register_instance_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_unregister_instance (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_unregister_instance_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_write (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_write_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_dispose (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_dispose_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_writedispose (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_writedispose_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataWriter_get_key_value (
    Chat_ChatMessageDataWriter _this,
    Chat_ChatMessage *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_ChatMessageDataWriter_lookup_instance (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *key_holder
    );

#define Chat_ChatMessageDataReader DDS_DataReader

#define Chat_ChatMessageDataReader_enable DDS_Entity_enable

#define Chat_ChatMessageDataReader_get_status_changes DDS_Entity_get_status_changes

#define Chat_ChatMessageDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define Chat_ChatMessageDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_ChatMessageDataReader_create_querycondition DDS_DataReader_create_querycondition

#define Chat_ChatMessageDataReader_create_readcondition DDS_DataReader_create_readcondition

#define Chat_ChatMessageDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define Chat_ChatMessageDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define Chat_ChatMessageDataReader_get_listener DDS_DataReader_get_listener

#define Chat_ChatMessageDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define Chat_ChatMessageDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define Chat_ChatMessageDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define Chat_ChatMessageDataReader_get_qos DDS_DataReader_get_qos

#define Chat_ChatMessageDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define Chat_ChatMessageDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define Chat_ChatMessageDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define Chat_ChatMessageDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define Chat_ChatMessageDataReader_get_subscriber DDS_DataReader_get_subscriber

#define Chat_ChatMessageDataReader_get_subscription_match_status DDS_DataReader_get_subscription_match_status

#define Chat_ChatMessageDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define Chat_ChatMessageDataReader_set_listener DDS_DataReader_set_listener

#define Chat_ChatMessageDataReader_set_qos DDS_DataReader_set_qos

#define Chat_ChatMessageDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_read (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_take (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_next_sample (
    Chat_ChatMessageDataReader _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_next_sample (
    Chat_ChatMessageDataReader _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_instance (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_instance (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_next_instance (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_next_instance (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_next_instance_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_next_instance_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_return_loan (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReader_get_key_value (
    Chat_ChatMessageDataReader _this,
    Chat_ChatMessage *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_ChatMessageDataReader_lookup_instance (
    Chat_ChatMessageDataReader _this,
    const Chat_ChatMessage *key_holder
    );

#define Chat_ChatMessageDataReaderView DDS_DataReaderView

#define Chat_ChatMessageDataReaderView_enable DDS_Entity_enable

#define Chat_ChatMessageDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_ChatMessageDataReaderView_get_qos DDS_DataReaderView_get_qos

#define Chat_ChatMessageDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define Chat_ChatMessageDataReaderView_set_qos DDS_DataReaderView_set_qos

#define Chat_ChatMessageDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define Chat_ChatMessageDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define Chat_ChatMessageDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define Chat_ChatMessageDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_next_sample (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_next_sample (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_instance (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_instance (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_next_instance (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_next_instance (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_return_loan (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_next_instance_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_next_instance_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_get_key_value (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_ChatMessageDataReaderView_lookup_instance (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *key_holder
    );


#define Chat_NameServiceTypeSupport DDS_TypeSupport

 Chat_NameServiceTypeSupport
Chat_NameServiceTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
Chat_NameServiceTypeSupport_register_type (
    Chat_NameServiceTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
Chat_NameServiceTypeSupport_get_type_name (
    Chat_NameServiceTypeSupport _this
    );

#ifndef _DDS_sequence_Chat_NameService_defined
#define _DDS_sequence_Chat_NameService_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    Chat_NameService *_buffer;
    DDS_boolean _release;
} DDS_sequence_Chat_NameService;

 DDS_sequence_Chat_NameService *DDS_sequence_Chat_NameService__alloc (void);
 Chat_NameService *DDS_sequence_Chat_NameService_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_Chat_NameService_defined */

#define Chat_NameServiceDataWriter DDS_DataWriter

#define Chat_NameServiceDataWriter_enable DDS_Entity_enable

#define Chat_NameServiceDataWriter_get_status_changes DDS_Entity_get_status_changes

#define Chat_NameServiceDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define Chat_NameServiceDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_NameServiceDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define Chat_NameServiceDataWriter_get_listener DDS_DataWriter_get_listener

#define Chat_NameServiceDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define Chat_NameServiceDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define Chat_NameServiceDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define Chat_NameServiceDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define Chat_NameServiceDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define Chat_NameServiceDataWriter_get_publication_match_status DDS_DataWriter_get_publication_match_status

#define Chat_NameServiceDataWriter_get_publisher DDS_DataWriter_get_publisher

#define Chat_NameServiceDataWriter_get_qos DDS_DataWriter_get_qos

#define Chat_NameServiceDataWriter_get_topic DDS_DataWriter_get_topic

#define Chat_NameServiceDataWriter_set_listener DDS_DataWriter_set_listener

#define Chat_NameServiceDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
Chat_NameServiceDataWriter_register_instance (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data
    );

 DDS_InstanceHandle_t
Chat_NameServiceDataWriter_register_instance_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_unregister_instance (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_unregister_instance_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_write (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_write_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_dispose (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_dispose_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_writedispose (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_writedispose_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NameServiceDataWriter_get_key_value (
    Chat_NameServiceDataWriter _this,
    Chat_NameService *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_NameServiceDataWriter_lookup_instance (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *key_holder
    );

#define Chat_NameServiceDataReader DDS_DataReader

#define Chat_NameServiceDataReader_enable DDS_Entity_enable

#define Chat_NameServiceDataReader_get_status_changes DDS_Entity_get_status_changes

#define Chat_NameServiceDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define Chat_NameServiceDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_NameServiceDataReader_create_querycondition DDS_DataReader_create_querycondition

#define Chat_NameServiceDataReader_create_readcondition DDS_DataReader_create_readcondition

#define Chat_NameServiceDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define Chat_NameServiceDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define Chat_NameServiceDataReader_get_listener DDS_DataReader_get_listener

#define Chat_NameServiceDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define Chat_NameServiceDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define Chat_NameServiceDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define Chat_NameServiceDataReader_get_qos DDS_DataReader_get_qos

#define Chat_NameServiceDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define Chat_NameServiceDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define Chat_NameServiceDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define Chat_NameServiceDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define Chat_NameServiceDataReader_get_subscriber DDS_DataReader_get_subscriber

#define Chat_NameServiceDataReader_get_subscription_match_status DDS_DataReader_get_subscription_match_status

#define Chat_NameServiceDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define Chat_NameServiceDataReader_set_listener DDS_DataReader_set_listener

#define Chat_NameServiceDataReader_set_qos DDS_DataReader_set_qos

#define Chat_NameServiceDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
Chat_NameServiceDataReader_read (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_take (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_read_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_take_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_read_next_sample (
    Chat_NameServiceDataReader _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_take_next_sample (
    Chat_NameServiceDataReader _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_read_instance (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_take_instance (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_read_next_instance (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_take_next_instance (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_read_next_instance_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_take_next_instance_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_return_loan (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReader_get_key_value (
    Chat_NameServiceDataReader _this,
    Chat_NameService *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_NameServiceDataReader_lookup_instance (
    Chat_NameServiceDataReader _this,
    const Chat_NameService *key_holder
    );

#define Chat_NameServiceDataReaderView DDS_DataReaderView

#define Chat_NameServiceDataReaderView_enable DDS_Entity_enable

#define Chat_NameServiceDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_NameServiceDataReaderView_get_qos DDS_DataReaderView_get_qos

#define Chat_NameServiceDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define Chat_NameServiceDataReaderView_set_qos DDS_DataReaderView_set_qos

#define Chat_NameServiceDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define Chat_NameServiceDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define Chat_NameServiceDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define Chat_NameServiceDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_next_sample (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_next_sample (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_instance (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_instance (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_next_instance (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_next_instance (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_return_loan (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_next_instance_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_next_instance_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NameServiceDataReaderView_get_key_value (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_NameServiceDataReaderView_lookup_instance (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *key_holder
    );


#define Chat_NamedMessageTypeSupport DDS_TypeSupport

 Chat_NamedMessageTypeSupport
Chat_NamedMessageTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
Chat_NamedMessageTypeSupport_register_type (
    Chat_NamedMessageTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
Chat_NamedMessageTypeSupport_get_type_name (
    Chat_NamedMessageTypeSupport _this
    );

#ifndef _DDS_sequence_Chat_NamedMessage_defined
#define _DDS_sequence_Chat_NamedMessage_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    Chat_NamedMessage *_buffer;
    DDS_boolean _release;
} DDS_sequence_Chat_NamedMessage;

 DDS_sequence_Chat_NamedMessage *DDS_sequence_Chat_NamedMessage__alloc (void);
 Chat_NamedMessage *DDS_sequence_Chat_NamedMessage_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_Chat_NamedMessage_defined */

#define Chat_NamedMessageDataWriter DDS_DataWriter

#define Chat_NamedMessageDataWriter_enable DDS_Entity_enable

#define Chat_NamedMessageDataWriter_get_status_changes DDS_Entity_get_status_changes

#define Chat_NamedMessageDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define Chat_NamedMessageDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_NamedMessageDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define Chat_NamedMessageDataWriter_get_listener DDS_DataWriter_get_listener

#define Chat_NamedMessageDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define Chat_NamedMessageDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define Chat_NamedMessageDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define Chat_NamedMessageDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define Chat_NamedMessageDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define Chat_NamedMessageDataWriter_get_publication_match_status DDS_DataWriter_get_publication_match_status

#define Chat_NamedMessageDataWriter_get_publisher DDS_DataWriter_get_publisher

#define Chat_NamedMessageDataWriter_get_qos DDS_DataWriter_get_qos

#define Chat_NamedMessageDataWriter_get_topic DDS_DataWriter_get_topic

#define Chat_NamedMessageDataWriter_set_listener DDS_DataWriter_set_listener

#define Chat_NamedMessageDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
Chat_NamedMessageDataWriter_register_instance (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data
    );

 DDS_InstanceHandle_t
Chat_NamedMessageDataWriter_register_instance_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_unregister_instance (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_unregister_instance_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_write (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_write_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_dispose (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_dispose_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_writedispose (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_writedispose_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataWriter_get_key_value (
    Chat_NamedMessageDataWriter _this,
    Chat_NamedMessage *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_NamedMessageDataWriter_lookup_instance (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *key_holder
    );

#define Chat_NamedMessageDataReader DDS_DataReader

#define Chat_NamedMessageDataReader_enable DDS_Entity_enable

#define Chat_NamedMessageDataReader_get_status_changes DDS_Entity_get_status_changes

#define Chat_NamedMessageDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define Chat_NamedMessageDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_NamedMessageDataReader_create_querycondition DDS_DataReader_create_querycondition

#define Chat_NamedMessageDataReader_create_readcondition DDS_DataReader_create_readcondition

#define Chat_NamedMessageDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define Chat_NamedMessageDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define Chat_NamedMessageDataReader_get_listener DDS_DataReader_get_listener

#define Chat_NamedMessageDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define Chat_NamedMessageDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define Chat_NamedMessageDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define Chat_NamedMessageDataReader_get_qos DDS_DataReader_get_qos

#define Chat_NamedMessageDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define Chat_NamedMessageDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define Chat_NamedMessageDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define Chat_NamedMessageDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define Chat_NamedMessageDataReader_get_subscriber DDS_DataReader_get_subscriber

#define Chat_NamedMessageDataReader_get_subscription_match_status DDS_DataReader_get_subscription_match_status

#define Chat_NamedMessageDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define Chat_NamedMessageDataReader_set_listener DDS_DataReader_set_listener

#define Chat_NamedMessageDataReader_set_qos DDS_DataReader_set_qos

#define Chat_NamedMessageDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_read (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_take (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_next_sample (
    Chat_NamedMessageDataReader _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_next_sample (
    Chat_NamedMessageDataReader _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_instance (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_instance (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_next_instance (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_next_instance (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_next_instance_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_next_instance_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_return_loan (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReader_get_key_value (
    Chat_NamedMessageDataReader _this,
    Chat_NamedMessage *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_NamedMessageDataReader_lookup_instance (
    Chat_NamedMessageDataReader _this,
    const Chat_NamedMessage *key_holder
    );

#define Chat_NamedMessageDataReaderView DDS_DataReaderView

#define Chat_NamedMessageDataReaderView_enable DDS_Entity_enable

#define Chat_NamedMessageDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define Chat_NamedMessageDataReaderView_get_qos DDS_DataReaderView_get_qos

#define Chat_NamedMessageDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define Chat_NamedMessageDataReaderView_set_qos DDS_DataReaderView_set_qos

#define Chat_NamedMessageDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define Chat_NamedMessageDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define Chat_NamedMessageDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define Chat_NamedMessageDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_next_sample (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_next_sample (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_instance (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_instance (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_next_instance (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_next_instance (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_return_loan (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_next_instance_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_next_instance_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_get_key_value (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
Chat_NamedMessageDataReaderView_lookup_instance (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *key_holder
    );

#endif
