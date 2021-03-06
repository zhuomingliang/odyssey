#ifndef ODYSSEY_INSTANCE_H
#define ODYSSEY_INSTANCE_H

/*
 * Odyssey.
 *
 * Scalable PostgreSQL connection pooler.
*/

typedef struct od_instance od_instance_t;

struct od_instance
{
	od_pid_t     pid;
	od_logger_t  logger;
	od_id_mgr_t  id_mgr;
	char        *config_file;
	od_config_t  config;
	int          is_shared;
};

void od_instance_init(od_instance_t*);
void od_instance_free(od_instance_t*);
int  od_instance_main(od_instance_t*, int, char**);

#endif /* ODYSSEY_INSTANCE_H */
