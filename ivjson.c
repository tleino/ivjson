#include "ivjson.h"
#include <assert.h>
#include <stddef.h>

ivjson_array_t
ivjson_add_array(struct ivjson_spec *spec, const char *path, int minv,
int maxv)
{
	assert(maxv == -1 || minv <= maxv);
	assert(minv >= 0);

	return (ivjson_array_t) { .handle = 0 };
}

ivjson_number_t
ivjson_add_number_to_array(struct ivjson_spec *spec, ivjson_array_t arr,
    const char *path, int minv, int maxv)
{
	assert(arr.handle != 0);
	assert(maxv == -1 || minv <= maxv);
	assert(minv >= 0);

	return (ivjson_number_t) { .handle = 0 };
}

ivjson_string_t
ivjson_add_string_to_array(struct ivjson_spec *spec, ivjson_array_t arr,
    const char *path, int minv, int maxv)
{
	assert(arr.handle != 0);
	assert(maxv == -1 || minv <= maxv);
	assert(minv >= 0);

	return (ivjson_string_t) { .handle = 0 };
}

int
ivjson_parse(char *json, struct ivjson_spec *spec)
{
	assert(json != NULL);
	assert(spec != NULL);

	return 1;
}

const char*
ivjson_error(int code)
{
	return "Unknown error";
}

int
ivjson_array(ivjson_array_t handle)
{
	assert(handle.handle != 0);

	return 0;
}

int
ivjson_number_from_array(ivjson_array_t arr, int i, ivjson_number_t handle)
{
	assert(arr.handle != 0);
	assert(i != 0);

	return 0;
}

const char*
ivjson_string_from_array(ivjson_array_t arr, int i, ivjson_string_t handle)
{
	assert(arr.handle != 0);
	assert(i != 0);

	return "";
}
