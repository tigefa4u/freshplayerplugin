#include <ppapi/c/ppb_core.h>
#include <stddef.h>


static
void
ppb_core_add_ref_resource(PP_Resource resource)
{
    trace_info("{zilch} ppb_core_add_ref_resource\n");
}

static
void
ppb_core_release_resource(PP_Resource resource)
{
    trace_info("{zilch} ppb_core_release_resource\n");
}

static
PP_Time
ppb_core_get_time(void)
{
    trace_info("{zilch} ppb_core_get_time\n");
    return 0;
}

static
PP_TimeTicks
ppb_core_get_time_ticks(void)
{
    trace_info("{zilch} ppb_core_get_time_ticks\n");
    return 0;
}

static
void
ppb_core_call_on_main_thread(int32_t delay_in_milliseconds, struct PP_CompletionCallback callback,
                             int32_t result)
{
    trace_info("{zilch} ppb_core_call_on_main_thread\n");
}

static
PP_Bool
ppb_core_is_main_thread(void)
{
    trace_info("{zilch} ppb_core_is_main_thread\n");
    return PP_FALSE;
}

const PPB_Core ppb_core = {
    .AddRefResource = ppb_core_add_ref_resource,
    .ReleaseResource = ppb_core_release_resource,
    .GetTime = ppb_core_get_time,
    .GetTimeTicks = ppb_core_get_time_ticks,
    .CallOnMainThread = ppb_core_call_on_main_thread,
    .IsMainThread = ppb_core_is_main_thread
};
