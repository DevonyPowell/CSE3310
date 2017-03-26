#if defined (__cplusplus)
extern "C" {
#endif

#include "ChatSacDcps.h"
#include "ChatSplDcps.h"

#include <dds_dcps.h>
#include <dds_dcps_private.h>

DDS_sequence_Chat_ChatMessage *DDS_sequence_Chat_ChatMessage__alloc (void)
{
    return (DDS_sequence_Chat_ChatMessage *)DDS__malloc (DDS_sequence_free, 0, sizeof(DDS_sequence_Chat_ChatMessage));
}

Chat_ChatMessage *DDS_sequence_Chat_ChatMessage_allocbuf (DDS_unsigned_long len)
{
    DDS_boolean DDS_sequence_Chat_ChatMessage_freebuf (void *buffer);

    return (Chat_ChatMessage *)DDS_sequence_allocbuf (DDS_sequence_Chat_ChatMessage_freebuf, sizeof (Chat_ChatMessage), len);
}

DDS_boolean DDS_sequence_Chat_ChatMessage_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    Chat_ChatMessage *b = (Chat_ChatMessage *)buffer;
    DDS_unsigned_long i;
    void Chat_ChatMessage__free (void *object);

    for (i = 0; i < *count; i++) {
        Chat_ChatMessage__free (&b[i]);
    }
    return TRUE;
}

extern c_bool __Chat_ChatMessage__copyIn(c_base base, void *from, void *to);
extern void __Chat_ChatMessage__copyOut(void *from, void *to);
extern const char *Chat_ChatMessage_metaDescriptor[];
extern const c_ulong Chat_ChatMessage_metaDescriptorArrLength;

Chat_ChatMessageTypeSupport
Chat_ChatMessageTypeSupport__alloc (
    void
    )
{
    c_ulong i;
    os_size_t strlength =0;
    char * metaDescriptor;
    Chat_ChatMessageTypeSupport result;
    for (i = 0; i < Chat_ChatMessage_metaDescriptorArrLength; i++) {
        strlength +=strlen(Chat_ChatMessage_metaDescriptor[i]);
    }

    metaDescriptor = (char*)malloc(strlength+1);
    metaDescriptor[0] = '\0';
    for (i = 0; i < Chat_ChatMessage_metaDescriptorArrLength; i++) {
        strcat(metaDescriptor,Chat_ChatMessage_metaDescriptor[i]);
    }
	result = DDS__FooTypeSupport__alloc (
	    __Chat_ChatMessage__name(),
            __Chat_ChatMessage__keys(),
            metaDescriptor,
            NULL,
            (DDS_copyIn)__Chat_ChatMessage__copyIn,
            (DDS_copyOut)__Chat_ChatMessage__copyOut,
            (DDS_unsigned_long)(sizeof(Chat_ChatMessage)),
            (DDS_typeSupportAllocBuffer)DDS_sequence_Chat_ChatMessage_allocbuf
        );
    free(metaDescriptor);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageTypeSupport_register_type (
    Chat_ChatMessageTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooTypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
Chat_ChatMessageTypeSupport_get_type_name (
    Chat_ChatMessageTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS__FooTypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
Chat_ChatMessageDataWriter_register_instance (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
Chat_ChatMessageDataWriter_register_instance_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_unregister_instance (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_unregister_instance_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_write (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_write_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_dispose (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_dispose_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_writedispose (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_writedispose_w_timestamp (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataWriter_get_key_value (
    Chat_ChatMessageDataWriter _this,
    Chat_ChatMessage *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
Chat_ChatMessageDataWriter_lookup_instance (
    Chat_ChatMessageDataWriter _this,
    const Chat_ChatMessage *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_read (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_take (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_next_sample (
    Chat_ChatMessageDataReader _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_next_sample (
    Chat_ChatMessageDataReader _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_read_next_instance_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_take_next_instance_w_condition (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_return_loan (
    Chat_ChatMessageDataReader _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_return_loan (
            (DDS_DataReader)_this,
            (DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReader_get_key_value (
    Chat_ChatMessageDataReader _this,
    Chat_ChatMessage *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
Chat_ChatMessageDataReader_lookup_instance (
    Chat_ChatMessageDataReader _this,
    const Chat_ChatMessage *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_next_sample (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_next_sample (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_return_loan (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS__free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;

        DDS__free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_read_next_instance_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_take_next_instance_w_condition (
    Chat_ChatMessageDataReaderView _this,
    DDS_sequence_Chat_ChatMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_ChatMessageDataReaderView_get_key_value (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
Chat_ChatMessageDataReaderView_lookup_instance (
    Chat_ChatMessageDataReaderView _this,
    Chat_ChatMessage *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)key_holder
	);
    return result;
}

DDS_sequence_Chat_NameService *DDS_sequence_Chat_NameService__alloc (void)
{
    return (DDS_sequence_Chat_NameService *)DDS__malloc (DDS_sequence_free, 0, sizeof(DDS_sequence_Chat_NameService));
}

Chat_NameService *DDS_sequence_Chat_NameService_allocbuf (DDS_unsigned_long len)
{
    DDS_boolean DDS_sequence_Chat_NameService_freebuf (void *buffer);

    return (Chat_NameService *)DDS_sequence_allocbuf (DDS_sequence_Chat_NameService_freebuf, sizeof (Chat_NameService), len);
}

DDS_boolean DDS_sequence_Chat_NameService_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    Chat_NameService *b = (Chat_NameService *)buffer;
    DDS_unsigned_long i;
    void Chat_NameService__free (void *object);

    for (i = 0; i < *count; i++) {
        Chat_NameService__free (&b[i]);
    }
    return TRUE;
}

extern c_bool __Chat_NameService__copyIn(c_base base, void *from, void *to);
extern void __Chat_NameService__copyOut(void *from, void *to);
extern const char *Chat_NameService_metaDescriptor[];
extern const c_ulong Chat_NameService_metaDescriptorArrLength;

Chat_NameServiceTypeSupport
Chat_NameServiceTypeSupport__alloc (
    void
    )
{
    c_ulong i;
    os_size_t strlength =0;
    char * metaDescriptor;
    Chat_NameServiceTypeSupport result;
    for (i = 0; i < Chat_NameService_metaDescriptorArrLength; i++) {
        strlength +=strlen(Chat_NameService_metaDescriptor[i]);
    }

    metaDescriptor = (char*)malloc(strlength+1);
    metaDescriptor[0] = '\0';
    for (i = 0; i < Chat_NameService_metaDescriptorArrLength; i++) {
        strcat(metaDescriptor,Chat_NameService_metaDescriptor[i]);
    }
	result = DDS__FooTypeSupport__alloc (
	    __Chat_NameService__name(),
            __Chat_NameService__keys(),
            metaDescriptor,
            NULL,
            (DDS_copyIn)__Chat_NameService__copyIn,
            (DDS_copyOut)__Chat_NameService__copyOut,
            (DDS_unsigned_long)(sizeof(Chat_NameService)),
            (DDS_typeSupportAllocBuffer)DDS_sequence_Chat_NameService_allocbuf
        );
    free(metaDescriptor);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceTypeSupport_register_type (
    Chat_NameServiceTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooTypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
Chat_NameServiceTypeSupport_get_type_name (
    Chat_NameServiceTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS__FooTypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NameServiceDataWriter_register_instance (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NameServiceDataWriter_register_instance_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_unregister_instance (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_unregister_instance_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_write (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_write_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_dispose (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_dispose_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_writedispose (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_writedispose_w_timestamp (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataWriter_get_key_value (
    Chat_NameServiceDataWriter _this,
    Chat_NameService *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NameServiceDataWriter_lookup_instance (
    Chat_NameServiceDataWriter _this,
    const Chat_NameService *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_read (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_take (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_read_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_take_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_read_next_sample (
    Chat_NameServiceDataReader _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_take_next_sample (
    Chat_NameServiceDataReader _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_read_next_instance_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_take_next_instance_w_condition (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_return_loan (
    Chat_NameServiceDataReader _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_return_loan (
            (DDS_DataReader)_this,
            (DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReader_get_key_value (
    Chat_NameServiceDataReader _this,
    Chat_NameService *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NameServiceDataReader_lookup_instance (
    Chat_NameServiceDataReader _this,
    const Chat_NameService *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_next_sample (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_next_sample (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NameServiceDataReaderView_return_loan (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS__free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;

        DDS__free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NameServiceDataReaderView_read_next_instance_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NameServiceDataReaderView_take_next_instance_w_condition (
    Chat_NameServiceDataReaderView _this,
    DDS_sequence_Chat_NameService *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NameServiceDataReaderView_get_key_value (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
Chat_NameServiceDataReaderView_lookup_instance (
    Chat_NameServiceDataReaderView _this,
    Chat_NameService *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)key_holder
	);
    return result;
}

DDS_sequence_Chat_NamedMessage *DDS_sequence_Chat_NamedMessage__alloc (void)
{
    return (DDS_sequence_Chat_NamedMessage *)DDS__malloc (DDS_sequence_free, 0, sizeof(DDS_sequence_Chat_NamedMessage));
}

Chat_NamedMessage *DDS_sequence_Chat_NamedMessage_allocbuf (DDS_unsigned_long len)
{
    DDS_boolean DDS_sequence_Chat_NamedMessage_freebuf (void *buffer);

    return (Chat_NamedMessage *)DDS_sequence_allocbuf (DDS_sequence_Chat_NamedMessage_freebuf, sizeof (Chat_NamedMessage), len);
}

DDS_boolean DDS_sequence_Chat_NamedMessage_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    Chat_NamedMessage *b = (Chat_NamedMessage *)buffer;
    DDS_unsigned_long i;
    void Chat_NamedMessage__free (void *object);

    for (i = 0; i < *count; i++) {
        Chat_NamedMessage__free (&b[i]);
    }
    return TRUE;
}

extern c_bool __Chat_NamedMessage__copyIn(c_base base, void *from, void *to);
extern void __Chat_NamedMessage__copyOut(void *from, void *to);
extern const char *Chat_NamedMessage_metaDescriptor[];
extern const c_ulong Chat_NamedMessage_metaDescriptorArrLength;

Chat_NamedMessageTypeSupport
Chat_NamedMessageTypeSupport__alloc (
    void
    )
{
    c_ulong i;
    os_size_t strlength =0;
    char * metaDescriptor;
    Chat_NamedMessageTypeSupport result;
    for (i = 0; i < Chat_NamedMessage_metaDescriptorArrLength; i++) {
        strlength +=strlen(Chat_NamedMessage_metaDescriptor[i]);
    }

    metaDescriptor = (char*)malloc(strlength+1);
    metaDescriptor[0] = '\0';
    for (i = 0; i < Chat_NamedMessage_metaDescriptorArrLength; i++) {
        strcat(metaDescriptor,Chat_NamedMessage_metaDescriptor[i]);
    }
	result = DDS__FooTypeSupport__alloc (
	    __Chat_NamedMessage__name(),
            __Chat_NamedMessage__keys(),
            metaDescriptor,
            NULL,
            (DDS_copyIn)__Chat_NamedMessage__copyIn,
            (DDS_copyOut)__Chat_NamedMessage__copyOut,
            (DDS_unsigned_long)(sizeof(Chat_NamedMessage)),
            (DDS_typeSupportAllocBuffer)DDS_sequence_Chat_NamedMessage_allocbuf
        );
    free(metaDescriptor);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageTypeSupport_register_type (
    Chat_NamedMessageTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooTypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
Chat_NamedMessageTypeSupport_get_type_name (
    Chat_NamedMessageTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS__FooTypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NamedMessageDataWriter_register_instance (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NamedMessageDataWriter_register_instance_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_unregister_instance (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_unregister_instance_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_write (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_write_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_dispose (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_dispose_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_writedispose (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_writedispose_w_timestamp (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataWriter_get_key_value (
    Chat_NamedMessageDataWriter _this,
    Chat_NamedMessage *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NamedMessageDataWriter_lookup_instance (
    Chat_NamedMessageDataWriter _this,
    const Chat_NamedMessage *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_read (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_take (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_next_sample (
    Chat_NamedMessageDataReader _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_next_sample (
    Chat_NamedMessageDataReader _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_read_next_instance_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_take_next_instance_w_condition (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_return_loan (
    Chat_NamedMessageDataReader _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_return_loan (
            (DDS_DataReader)_this,
            (DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReader_get_key_value (
    Chat_NamedMessageDataReader _this,
    Chat_NamedMessage *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
Chat_NamedMessageDataReader_lookup_instance (
    Chat_NamedMessageDataReader _this,
    const Chat_NamedMessage *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_next_sample (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_next_sample (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)received_data,
	    sample_info
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

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
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_return_loan (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS__free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;

        DDS__free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_read_next_instance_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_take_next_instance_w_condition (
    Chat_NamedMessageDataReaderView _this,
    DDS_sequence_Chat_NamedMessage *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
Chat_NamedMessageDataReaderView_get_key_value (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS__FooDataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
Chat_NamedMessageDataReaderView_lookup_instance (
    Chat_NamedMessageDataReaderView _this,
    Chat_NamedMessage *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS__FooDataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_sample)key_holder
	);
    return result;
}

#if defined (__cplusplus)
}
#endif
