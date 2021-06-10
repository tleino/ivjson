#ifndef IVJSON_H
#define IVJSON_H

/*
 * Trick to get compiler validate types for us.
 */
typedef struct ivjson_array { int handle; } ivjson_array_t;
typedef struct ivjson_string { int handle; } ivjson_string_t;
typedef struct ivjson_number { int handle; } ivjson_number_t;

struct ivjson_spec;
struct ivjson;

ivjson_array_t			 ivjson_add_array(struct ivjson_spec *,
				    const char *, int, int);
ivjson_number_t			 ivjson_add_number_to_array(
				    struct ivjson_spec *, ivjson_array_t,
				    const char *, int, int);
ivjson_string_t			 ivjson_add_string_to_array(
				    struct ivjson_spec *, ivjson_array_t,
				    const char *, int, int);

int				 ivjson_parse(char *, struct ivjson_spec *);

const char*			 ivjson_error(int);

int				 ivjson_array(ivjson_array_t);
int				 ivjson_number_from_array(ivjson_array_t,
				    int, ivjson_number_t);
const char*			 ivjson_string_from_array(ivjson_array_t,
				    int, ivjson_string_t);

#endif
