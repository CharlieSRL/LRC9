# 1 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
		long ts = 0;
	

	web_set_max_html_param_len("1024000");
	web_set_sockets_option("SSL_VERSION", "AUTO");
	 
	lr_save_string(lr_eval_string("{SearchNames}"),"SearchName");
	
	web_add_auto_header("Sec-Fetch-Site", 		"none");
	web_add_auto_header("Sec-Fetch-Mode",		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");
	web_add_auto_header("cet-blazemeter", "1");

	web_add_auto_header("Content-Type","application/x-www-form-urlencoded; charset=UTF-8");

	lr_start_transaction("00_HomePage");
	
	web_url("he",
		"URL=https://myofek.cet.ac.il/he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		 
		"Url=/static/css/6.514cf645.chunk.css", "ENDITEM", 
		"Url=/static/css/main.1d34530d.chunk.css", "ENDITEM", 
		"Url=/static/js/6.3ff215a9.chunk.js", "ENDITEM", 
		"Url=/static/js/main.1ed6181f.chunk.js", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/libs/jquery/2.1.4/jquery-2.1.4.min.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/nairobiapi/provider/nairobiprovider.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/contentapi/provider/ContentProvider.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/teachersapi/provider/teachersprovider.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/nairobirecommendationsapi/provider/RecommendationsProvider.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/bigdataapi/provider/BigDataProvider.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/accessmngapi/provider/accessmanagement.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/provider/ApiProvider.js?8d9eed845247680", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://nairobigateway.cet.ac.il/provider/ApiProvider.js?8da6aea738f2900", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=/service-worker.js", "ENDITEM", 
		"Url=/favicon.ico", "ENDITEM", 
		"Url=/static/media/symbols.e46cce46.svg", "ENDITEM", 
		"Url=/static/js/0.0528f72e.chunk.js", "ENDITEM", 
		"Url=/static/css/0.87194249.chunk.css", "ENDITEM", 
		"Url=/static/css/3.457162b6.chunk.css", "ENDITEM", 
		"Url=/static/js/3.b5bc31e4.chunk.js", "ENDITEM", 
		"Url=/static/css/8.3bb06c11.chunk.css", "ENDITEM", 
		"Url=/static/media/LogoOfekHE.a9636308.svg", "ENDITEM", 
		"Url=/static/media/CET_logo.3a8c0ee3.svg", "ENDITEM", 
		"Url=/static/media/linkedin.473f0491.svg", "ENDITEM", 
		"Url=/static/media/facebook.be6f34bb.svg", "ENDITEM", 
		"Url=/static/media/youtube.89357fca.svg", "ENDITEM", 
		"Url=/static/js/8.21bd561a.chunk.js", "ENDITEM", 
		"Url=/images/home_page_whitwwave.svg", "ENDITEM", 
		"Url=/static/media/idmLogoHE.22c64dea.png", "ENDITEM", 
		"Url=/static/media/cetLogoHe.0fdd0f60.svg", "ENDITEM", 
		"Url=/static/media/avatar_male.ab1c6781.svg", "ENDITEM", 
		"Url=/images/no_dashboard_data.png", "ENDITEM", 
		"LAST");


	web_add_header("Sec-Fetch-Site", 		"same-origin");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 		"cors");

	web_url("page-loader.json", 
		"URL=https://myofek.cet.ac.il/json/page-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://nairobigateway.cet.ac.il/bigdataapi/resources/ValidateJson.min.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=../static/media/AlmoniNeueDL4.0AAA-Medium.d23bd6d4.otf", "Referer=https://myofek.cet.ac.il/static/css/6.514cf645.chunk.css", "ENDITEM", 
		"Url=https://apigateway.cet.ac.il/environment.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"LAST");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");

	web_url("config", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/config", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	
	lr_save_string(lr_eval_string("{myHex}{myHex}-{myHex}-{myHex}-{myHex}-{myHex}{myHex}{myHex}"),"regGUID");
	lr_output_message("[%s]", lr_eval_string("{regGUID}"));

	web_url("GetServerTime", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Time/GetServerTime?registration={regGUID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("guest", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/authentication/guest", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetAllDimensionsByLanguage", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");


	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_url("GetLabels", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Label/GetLabels?languages=he%2Car", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method",		"POST");
	
	web_custom_request("GetAllDependencies", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");


	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetAllDimensionsByLanguage_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\"}", 
		"LAST");

	web_custom_request("GetAllDependencies_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		"LAST");

 
 
 

	web_add_auto_header("Sec-Fetch-Site", 		"same-site");

	web_url("GetMessagesByDate", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/SystemMessages/GetMessagesByDate?language=he&date={Today}T{GMTtime}Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Access-Control-Request-Headers", 		"content-type");
	web_add_auto_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetNewestItemsIds", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetNewestItemsIds", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("Search", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Access-Control-Request-Headers", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("Access-Control-Request-Method", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("sec-ch-ua",		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 259 "vuser_init.c"
	web_custom_request("Search_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":\"lastCatalogPublishedDate\",\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"]},\"contentParams\":{\"id\":[\"05DE31DE\",\"04C9B07C\",\"04F4A5C8\",\"04FC5C72\",\"028A582A\",\"031598D1\",\"03361F1B\",\"04ABC9E0\",\"04C25598\",\"0523AEB8\"],\"isPublished\":[true]},\"textParams\":{},\"retrieveParams\":{\"orderBy\":\"lastCatalogPublishedDate\",\"maxResults\":10}}", 
		"LAST");

	lr_end_transaction("00_HomePage",2);
	lr_think_time(10);
	lr_start_transaction("01_LoginPage");
	
 
# 290 "vuser_init.c"

	web_custom_request("GetNewestItemsIds_2",
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetNewestItemsIds", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"numResults\":10}", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"GET");
	
	web_custom_request("getSchoolYear", 
		"URL=https://ebag.cet.ac.il/api/lmscp/getSchoolYear?date={Today}T{GMTtime}Z", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 338 "vuser_init.c"
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetBanners", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/media/AlmoniNeueDL4.0AAA-Bold.89a48e44.otf", "Referer=https://myofek.cet.ac.il/static/css/6.514cf645.chunk.css", "ENDITEM", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 	"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetBanners_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"isPublish\":[true],\"langs\":[\"he\"],\"userTypes\":[\"guest\"],\"sectors\":[\"state\",\"mmad\"]}]", 
		"EXTRARES", 
		"Url=https://js.nagich.co.il/core/4.1.1/accessibility.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"LAST");

	 

	web_custom_request("Search_3", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":\"lastCatalogPublishedDate\",\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"]},\"contentParams\":{\"id\":[\"z4pTcmKe\",\"z7DypZrt\",\"yCfFGVI8\",\"2iTpJhZF\",\"HIDy1W78\",\"jX3C1O3F\",\"x8dq6dMZ\",\"19F16621\",\"73280E37\",\"BPO62ste\"],\"isPublished\":[true]},\"textParams\":{},\"retrieveParams\":{\"orderBy\":\"lastCatalogPublishedDate\",\"maxResults\":10}}", 
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=cet-cache",
		"RegExp=cet-cache=(.*?);",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"LAST");

	web_custom_request("getSchoolYear_2", 
		"URL=https://ebag.cet.ac.il/api/lmscp/getSchoolYear?date={Today}T{GMTtime}Z", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"EXTRARES", 
		"Url=https://js.nagich.co.il/style/style.css", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=https://js.nagich.co.il/style/btncolor.css", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"LAST");

	web_url("GetPage", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=home&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 		"cross-site");

	web_url("he.json", 
		"URL=https://js.nagich.co.il/assets/locale/he.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../scripts/pdf.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"Url=../images/6.svg", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"LAST");
	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	web_url("search-loader.json", 
		"URL=https://myofek.cet.ac.il/json/search-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");

	web_custom_request("Search_4", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":\"lastCatalogPublishedDate\",\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"]},\"contentParams\":{\"id\":[\"72162998\",\"8045D909\",\"08E7AC80\",\"021AEB02\",\"0634175D\",\"0B57E529\",\"DhpIhR0Y\",\"0446B2C6\",\"57E8848F\",\"77399E6F\",\"37BF4AB9\",\"00531C42\",\"2BBED613\",\"59AF6CB5\",\"8161A5D9\",\"60092E07\",\"03606332\",\"044FEB99\",\"43CE5B7B\",\"09C618D3\",\"07912521\",\"sODpGH93\",\"JIUbqM3D\",\"Qn8pRflI\",\"0A8CF8A5\",\"0FD9CF27\","
		"\"2050EA2F\",\"919C79D6\",\"04AB3CB5\",\"2361DB45\",\"4A66012B\",\"311C9C4B\",\"17644B5A\",\"114E9E81\",\"08F1C707\",\"7101310A\",\"Q9qXappd\",\"393806F7\",\"3E8FC3E3\",\"5EE2C277\",\"28FC2537\",\"8421A9A6\",\"hmou7zc5\"],\"isPublished\":[true]},\"textParams\":{},\"retrieveParams\":{\"orderBy\":\"lastCatalogPublishedDate\"}}", 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/media/OpenSansHebrew-Regular.d80f3cc7.woff2", "Referer=https://myofek.cet.ac.il/static/css/6.514cf645.chunk.css", "ENDITEM", 
		"Url=https://myofek.cet.ac.il/static/media/loginBg.f59d14c2.png", "Referer=https://myofek.cet.ac.il/static/css/main.1d34530d.chunk.css", "ENDITEM", 
		"LAST");

 
# 482 "vuser_init.c"

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_add_header("Sec-Fetch-User", 		"?1");
	web_add_header("Upgrade-Insecure-Requests", 		"1");

 





	web_reg_save_param_regexp(
		"ParamName=client_id",
		"RegExp=client_id=(.*?)&scope",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"RequestUrl=*/cet*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=state",
		"RegExp=state=(.*?)&backUrl",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"RequestUrl=*/cet*",
		"LAST");

	web_url("cet", 
		"URL=https://apigateway.cet.ac.il/AccessMngApi/login/start/cet?gotourl=https%3A%2F%2Fmyofek.cet.ac.il%2Fhe&fromurl=https%3A%2F%2Fmyofek.cet.ac.il%2Fhe&skin=&lang=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");


	web_add_auto_header("Sec-Fetch-Mode", 		"no-cors");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("Origin", 		"https://cetlogin.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));
	web_add_header("Upgrade-Insecure-Requests", 		"1");

	web_submit_data("login",
		"Action=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://cetlogin.cet.ac.il/nidp//app/login?target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("X-Requested-With", 		"XMLHttpRequest");

	web_url("cet_skin.jsp",
		"URL=https://cetlogin.cet.ac.il/nidp/cet/skins/cet_skin.jsp?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe&bst=11",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=../js/login.js?bst=12&_=1659383521284", "Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe", "ENDITEM",
		"URL=../translations/translations.js?bst=11&_=1659383521285", "Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe", "ENDITEM",
		"URL=../images/Bg.jpg", "Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe", "ENDITEM",
		"LAST");

	web_url("he.json_2",
		"URL=https://cetlogin.cet.ac.il/nidp/cet/translations/he.json",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=https://js.nagich.co.il/assets/images/10.svg", "Referer=https://cetlogin.cet.ac.il/", "ENDITEM",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Origin", 		"https://cetlogin.cet.ac.il");

	lr_end_transaction("01_LoginPage",2);
	lr_think_time(10);
	lr_start_transaction("02_Login");

	web_add_header("X-Requested-With", 		"XMLHttpRequest");

 





	web_reg_save_param_regexp(
		"ParamName=CetSession",
		"RegExp=CetSession=(.*?);",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"LAST");

	web_submit_data("login_2",
		"Action=https://cetlogin.cet.ac.il/nidp/app/login?sid=0&sid=0",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=option", "Value=credential", "ENDITEM",
		"Name=isAjax", "Value=true", "ENDITEM",
		"Name=Ecom_User_ID", "Value={UserName}", "ENDITEM",
		"Name=Ecom_Password", "Value=A123456", "ENDITEM",
		"LAST");

	 

	 
	
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_add_header("Sec-Fetch-User", 		"?1");
	web_add_header("Upgrade-Insecure-Requests", 		"1");


	web_submit_data("login_3",
		"Action=https://cetlogin.cet.ac.il/nidp/app/login?sid=0&sid=0",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=option", "Value=credential", "ENDITEM",
		"Name=isAjax", "Value=false", "ENDITEM",
		"Name=target", "Value=https://cetlogin.cet.ac.il/nidp/oauth/nam/authz?client_id={client_id}&scope=openid+cetprofile&response_type=code&redirect_uri=https://apigateway.cet.ac.il/accessmngapi/oauth/cet&state={state}&backUrl=https://myofek.cet.ac.il/he", "ENDITEM",
		"Name=authType", "Value=", "ENDITEM",
		"LAST");

	
	web_url("Redirects_Arik", 
		"URL=https://cetlogin.cet.ac.il/nidp/oauth/nam/authz?client_id={client_id}&scope=openid%2Bcetprofile&response_type=code&redirect_uri=https%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet&state={state}&backUrl=https%3A%2F%2Fmyofek.cet.ac.il%2Fhe", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		"LAST");
	
	
	web_add_auto_header("Sec-Fetch-Mode",		"no-cors");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Mode", 		"cors");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");
	
	lr_save_string(lr_eval_string("{myHex}{myHex}-{myHex}-{myHex}-{myHex}-{myHex}{myHex}{myHex}"),"regGUID1");
	lr_output_message("[%s]", lr_eval_string("{regGUID1}"));
	 
 



	
 

	
	web_url("GetServerTime_2", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Time/GetServerTime?registration={regGUID1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("config_2", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/config", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"LAST");

 
# 707 "vuser_init.c"

    	
	web_url("GetLabels_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Label/GetLabels?languages=he%2Car", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Access-Control-Request-Headers", 		"content-type");
	web_add_auto_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetAllDimensionsByLanguage_3", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("GetAllDependencies_3", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");


	(web_remove_auto_header("Access-Control-Request-Headers", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("Access-Control-Request-Method", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");
	 
	web_reg_save_param_json("ParamName=CorruserId","QueryString=$.userId","SEARCH_FILTERS","Scope=Body",	"LAST");
	 





	web_reg_save_param_json("ParamName=schoolId","QueryString=$.schoolId","SEARCH_FILTERS","Scope=Body","LAST");
	
	web_url("state", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/state", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"LAST");


	web_custom_request("GetAllDependencies_4", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		"LAST");

	web_custom_request("GetAllDimensionsByLanguage_4", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\"}", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Access-Control-Request-Headers", 		"content-type");
	web_add_auto_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetTeacherData", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Profile/GetTeacherData", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("GetFavorites", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Favorites/GetFavorites", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("importCourseEnvironments", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Import/importCourseEnvironments", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("GetTeacherData_2", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Profile/GetTeacherData", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");


	(web_remove_auto_header("Access-Control-Request-Headers", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("Access-Control-Request-Method", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");
	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");


	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");
	web_add_auto_header("Sec-Fetch-Site",		"same-site");

	web_custom_request("GetFavorites_2", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Favorites/GetFavorites", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetTeacherData_3", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Profile/GetTeacherData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"profileId\":\"{CorruserId}\"}", 
		"LAST");

	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");
	
	web_custom_request("importCourseEnvironments_2", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Import/importCourseEnvironments", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 912 "vuser_init.c"
 
# 926 "vuser_init.c"
	web_custom_request("GetTeacherData_4", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Profile/GetTeacherData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"profileId\":\"{CorruserId}\"}", 
		"LAST");

	web_custom_request("GetFavorites_3", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Favorites/GetFavorites", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"teacherId\":\"{CorruserId}\"}", 
		"LAST");

 
# 966 "vuser_init.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"GET");

	web_custom_request("getSchoolYear_3", 
		"URL=https://ebag.cet.ac.il/api/lmscp/getSchoolYear?date={Today}T{GMTtime}Z", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	
	web_add_auto_header("sec-ch-ua", 	"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetFavorites_4", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Favorites/GetFavorites", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"teacherId\":\"{CorruserId}\"}", 
		"LAST");

 
# 1013 "vuser_init.c"
 
# 1024 "vuser_init.c"

 
# 1077 "vuser_init.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Access-Control-Request-Headers", 		"content-type");
	web_add_auto_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetBanners_3", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("EventErrors", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Diagnostics/EventErrors?registration={regGUID1}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"LAST");



	(web_remove_auto_header("Access-Control-Request-Headers", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("Access-Control-Request-Method", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
	web_reg_save_param_regexp(
		"ParamName=cet-cache_1",
		"RegExp=cet-cache=(.*?);",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"LAST");

	web_custom_request("getSchoolYear_4", 
		"URL=https://ebag.cet.ac.il/api/lmscp/getSchoolYear?date={Today}T{GMTtime}Z", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_custom_request("EventErrors_2",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Diagnostics/EventErrors?registration={regGUID1}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"error\":{\"name\":\"RateLimitError\",\"message\":\"Cannot send more than 6 parallel events.\"},\"event\":{\"table\":\"Learning\",\"registration\":\"{regGUID1}\",\"lastIndex\":5,\"clientTime\":\"{Today}T{GMTtime}Z\",\"sessionId\":\"{CetSession}\",\"userId\":\"{CorruserId}\",\"verb\":\"exited\",\"product\":\"nairobi\",\"contextReferrer\":\"https://myofek.cet.ac.il/he\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\"}}]",
		"LAST");

	web_custom_request("GetBanners_4", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"isPublish\":[true],\"langs\":[\"he\"],\"userTypes\":[\"guest\"],\"sectors\":[\"state\",\"mmad\"]}]", 
		"LAST");

	web_url("GetMessagesByDate_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/SystemMessages/GetMessagesByDate?language=he&date={Today}T{GMTtime}Z",  
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetNewestItemsIds_3", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetNewestItemsIds", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 1213 "vuser_init.c"

	web_custom_request("GetBanners_5",
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"isPublish\":[true],\"langs\":[\"he\"],\"userTypes\":[\"teacher\"],\"sectors\":[\"state\",\"mmad\"]}]", 
		"LAST");

	web_custom_request("GetBanners_6", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"isPublish\":[true],\"langs\":[\"he\"],\"userTypes\":[\"teacher\"],\"sectors\":[\"state\",\"mmad\"]}]", 
		"LAST");

	web_url("GetPage_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=home&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetActivitiesByTeacherId", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/LMSActivity/GetActivitiesByTeacherId", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("sec-ch-ua", 	"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetNewestItemsIds_4", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetNewestItemsIds", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"numResults\":10}", 
		"LAST");
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetActivitiesByTeacherId_2", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/LMSActivity/GetActivitiesByTeacherId", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetActivitiesByTeacherId_3", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/LMSActivity/GetActivitiesByTeacherId", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"profileId\":\"{CorruserId}\"}", 
		"LAST");

	web_custom_request("GetActivitiesByTeacherId_4", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/LMSActivity/GetActivitiesByTeacherId", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"profileId\":\"{CorruserId}\"}", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	web_url("item-loader.json", 
		"URL=https://myofek.cet.ac.il/json/item-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://apigateway.cet.ac.il/dashboardapi/provider/dashboardprovider.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"LAST");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");

	web_url("GetLightTasks", 
		"URL=https://nairobigateway.cet.ac.il/dashboardapi/Teachers/GetLightTasks?teacherId={CorruserId}&schoolId={schoolId}&minDate=Mon%20Aug%2001%202022&maxDate=Mon%20Jul%2031%202023", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/css/14.682186e5.chunk.css", "Referer=https://myofek.cet.ac.il/he/recommendations", "ENDITEM", 
		"Url=https://myofek.cet.ac.il/static/js/14.5b9485ce.chunk.js", "Referer=https://myofek.cet.ac.il/he/recommendations", "ENDITEM", 
		"LAST");

	lr_end_transaction("02_Login",2);
	lr_think_time(10);
	return 0;
}
# 4 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c" 2

# 1 "Action.c" 1
Action()
{

	lr_start_transaction("03_Recommendations");
	
 
# 32 "Action.c"

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetRecommendationsHistogtram", 
		"URL=https://nairobigateway.cet.ac.il/nairobirecommendationsapi/Recommendations/GetRecommendationsHistogtram", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_url("GetPage_3", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=recommendations&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");


	web_custom_request("GetRecommendationsHistogtram_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobirecommendationsapi/Recommendations/GetRecommendationsHistogtram", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"teacherId\":\"{CorruserId}\"}", 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/css/2.ab4af526.chunk.css", "Referer=https://myofek.cet.ac.il/he/catalog", "ENDITEM", 
		"Url=https://myofek.cet.ac.il/static/js/2.2c6fbff7.chunk.js", "Referer=https://myofek.cet.ac.il/he/catalog", "ENDITEM", 
		"LAST");

	lr_end_transaction("03_Recommendations",2);
	lr_think_time(10);
	lr_start_transaction("04_ContentRepository");
	
 
# 113 "Action.c"

	web_url("GetPage_4", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=catalog&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("GetFiltersItemTypes", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Filters/GetFiltersItemTypes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("getDisciplinesByAgeGrades", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/getDisciplinesByAgeGrades", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("getDisciplinesByAgeGrades_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/getDisciplinesByAgeGrades", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[\"state\",\"mmad\"]", 
		"LAST");

	
	lr_end_transaction("04_ContentRepository",2);
	lr_think_time(10);
	lr_start_transaction("05_FilterByClass");
	
 
# 211 "Action.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("Search_5", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 246 "Action.c"
	web_custom_request("Search_6", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":null,\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"],\"ageGrades\":[\"grade6\"],\"disciplines\":[\"math\"]},\"contentParams\":{\"isPublished\":[true]},\"textParams\":{},\"retrieveParams\":{\"dimensionName\":\"itemTypes\",\"maxResults\":1}}", 
		"LAST");

 
# 287 "Action.c"

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("getDimensionsByProfile", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/getDimensionsByProfile", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("Search_7", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":null,\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"],\"ageGrades\":[\"grade6\"],\"disciplines\":[\"math\"],\"itemTypes\":[\"interactive\"]},\"contentParams\":{\"isPublished\":[true]},\"textParams\":{},\"retrieveParams\":{\"dimensionName\":\"itemTypes\",\"maxResults\":200}}", 
		"LAST");

	web_custom_request("getDimensionsByProfile_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/getDimensionsByProfile", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ageGrade\":\"grade6\",\"discipline\":\"math\",\"itemTypes\":[\"interactive\"],\"sectors\":[\"state\",\"mmad\"]}", 
		"LAST");

	lr_end_transaction("05_FilterByClass",2);
	lr_think_time(10);
	lr_start_transaction("06_Filter");	
	
 
# 380 "Action.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("Search_8", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"LAST");


	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");
	 
	web_reg_save_param("DocumentIds","LB=externalContextId\":\"","RB=\",","Ord=All","notfound=warning","LAST");


	web_custom_request("Search_9", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":null,\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"],\"ageGrades\":[\"grade6\"],\"disciplines\":[\"math\"],\"itemTypes\":[\"interactive\"],\"syllabusSubjects\":[\"math6_expansion\"]},\"contentParams\":{\"isPublished\":[true]},\"textParams\":{},\"retrieveParams\":{\"dimensionName\":\"itemTypes\",\"maxResults\":200}}", 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/media/oops_error_image.21d8cc45.png", "Referer=https://myofek.cet.ac.il/static/css/main.1d34530d.chunk.css", "ENDITEM", 
		"LAST");

	lr_end_transaction("06_Filter",2);
	lr_think_time(10);
	lr_save_string(lr_paramarr_random("DocumentIds"),"DocumentId");
	
	lr_start_transaction("07_SelectItem");	

	
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetItemAndDimensionsByIdFast", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetItemAndDimensionsByIdFast", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 471 "Action.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetItemAndDimensionsByIdFast_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetItemAndDimensionsByIdFast", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform",		"\"Windows\"");

	web_custom_request("GetItemAndDimensionsByIdFast_3", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetItemAndDimensionsByIdFast", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"itemId\":\"443E8F1F\",\"lang\":\"he\"}", 
		"LAST");

	web_custom_request("GetItemAndDimensionsByIdFast_4", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetItemAndDimensionsByIdFast", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"itemId\":\"443E8F1F\",\"lang\":\"he\"}", 
		"LAST");

 
# 533 "Action.c"
	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"iframe");
	web_add_header("Upgrade-Insecure-Requests", 		"1");
	
	 
	 
	
 
	web_reg_save_param_ex("ParamName=sitebust","LB=","RB= \r\n","NotFound=warning","SEARCH_FILTERS","Scope=Body","RequestUrl=*/version.txt*","LAST");

	web_url("index.html", 
		"URL=https://lo.cet.ac.il/plugin/index.html?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../styles/critical.min.css", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		 
		"Url=../dependencies/requirejs/require.min.js", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../runtimeMain.js", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../versioning/version.txt", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../styles/critical.min.css?bust=v185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../styles/main.min.css?bust=v185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/fonts/Abraham/stylesheet.css", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"Url=../lo.config.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../loModulesBundle.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../settings.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../loBundle.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=lo-plugin-client.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../general/api.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../general/controllers/player-controller.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../general/controllers/scorm-controller.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../dependencies/webfontloader/webfontloader.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../dependencies/d3/d3.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=../providers/lms/scorm-manifest-provider-proxy.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/libs/bodymovin/5.7.3/lottie.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/libs/jquery/2.1.4/jquery-2.1.4.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/libs/tinymce/4.6.5/tinymce.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/libs/soundmanager2/2.97.20150601/script/soundmanager2.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"Url=https://apps.assets.cet.ac.il/handlers/appData.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"Url=https://cdn.cet.ac.il/libs/cet.content/host.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", "ENDITEM", 
		"LAST");


	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 		"cors");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	web_url("templates.html",
		"URL=https://lo.cet.ac.il/elements/error-viewer/views/templates.html?sitebust={sitebust}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lo.cet.ac.il/plugin/index.html?",
		"Snapshot=t122.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=https://cdn.cet.ac.il/libs/tinymcePresets/2/tinymcePresets.Bundle.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"LAST");


	web_add_auto_header("Origin", 		"https://lo.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");


 





	web_reg_save_param_json("ParamName=sessionId","QueryString=$.sessionId","SEARCH_FILTERS","Scope=Body","LAST");

	web_url("state_2",
		"URL=https://apigateway.cet.ac.il/AccessMngApi/state", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"LAST");

	lr_save_string(lr_eval_string("{myHex}{myHex}-{myHex}-{myHex}-{myHex}-{myHex}{myHex}{myHex}"),"regGUID2");
	lr_output_message("[%s]", lr_eval_string("{regGUID2}"));

	web_url("GetServerTime_3", 
		"URL=https://apigateway.cet.ac.il/bigdataapi/Time/GetServerTime?registration={regGUID2}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("config_3", 
		"URL=https://apigateway.cet.ac.il/AccessMngApi/config", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"LAST");
	 
	web_reg_save_param("entryID","LB=entryId\":\"","RB=\"","notfound=warning","LAST");
	web_reg_save_param_json("ParamName=documentMajorVersion","QueryString=$.Result.documentMajorVersion","notfound=warning","SEARCH_FILTERS","Scope=Body","LAST");
	web_reg_save_param_json("ParamName=documentMinorVersion","QueryString=$.Result.documentMinorVersion","notfound=warning","SEARCH_FILTERS","Scope=Body","LAST");

	web_url("Connect",
		"URL=https://loservices.cet.ac.il/LOService/Connect?TaskId=&DocumentId={DocumentId}&LanguageId=he&SiteKey=ebag&StudentId=&ClientId=&ContextGroupId=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t127.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=https://js.nagich.co.il/core/3.0.2/accessibility.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"URL=https://loresources.cet.ac.il/api/themes.ashx?name=lo_math4-6&bust=v{sitebust}", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"LAST");


	web_url("9", 
		"URL=https://documentservice.cet.ac.il/api/documentsRevisions/{DocumentId}/he/{documentMajorVersion}/{documentMinorVersion}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t128.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=https://lo.cet.ac.il/styles/styles.player.rtl.min.css?bust=v{sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/styles/styles.content.rtl.min.css?bust=v{sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://js.nagich.co.il/style/default.css", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"URL=https://js.nagich.co.il/assets/scripts/locale.js", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"URL=https://lo.cet.ac.il/texts/he.player.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/texts/he.content.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/texts/he.studio.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/share/interactive-content.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/dependencies/cet.tabs/cet-tabs.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/share/cloze.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/clientfieldsmanager/clientfieldsmanager.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/share/question.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/share/question-feedback.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/general/utils/pack.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/generator/generator.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/generator/monom.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/generator/polynom.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/generator/equation-editor.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/extended/math/generator/rational-number.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/like/like.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/discussion/discussion.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/discussion/views/templates.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/thread/thread.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/thread/views/templates.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/post/post.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/post/views/templates.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/popup/views/popup-icons.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/question/views/question-icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/keyboard/views/symbols.numpad.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/equation-editor/views/symbols.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/copy-link-share/views/copyLinkSymbol.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/feedback/views/icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/gallery/views/icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/comments-manager/views/icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", "ENDITEM",
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/bg.jpg", "Referer=https://lo.cet.ac.il/", "ENDITEM",
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/Question_bg.png", "Referer=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", "ENDITEM",
		"URL=https://lo.cet.ac.il/elements/comment/themes/img/comments_icon.svg", "Referer=https://lo.cet.ac.il/styles/styles.content.rtl.min.css?bust=v{sitebust}", "ENDITEM",
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/pageTop_small.png", "Referer=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", "ENDITEM",
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/frameCircle.svg", "Referer=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", "ENDITEM",
		"LAST");

 
# 741 "Action.c"

	lr_end_transaction("07_SelectItem",2);
	lr_think_time(10);
	lr_start_transaction("08_QuickLook");	

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");

 
# 820 "Action.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("88233aa5-aa9d-4cec-915d-e8fe6258c5b5", 
		"URL=https://loservices.cet.ac.il/States/{entryID}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("88233aa5-aa9d-4cec-915d-e8fe6258c5b5_2", 
		"URL=https://loservices.cet.ac.il/States/{entryID}", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"manualScore\":0,\"finalScore\":0,\"evaluatedWeight\":0,\"activityState\":\"none\",\"version\":18,\"elements\":{\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e0\":{\"stateData\":{\"row\":[{\"editable\":[{\"latex\":\"15001\"},{\"latex\":\"1\"}]}],\"specialStateSpecified\":false},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e0\",\"autoScore\":100,\"submittedScore\":0,\"normalizedScore\":0,\""
		"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_equationEditor\",\"parentDocumentModelName\":\"e_cloze\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze\":{\"stateData\":null,\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze\",\"autoScore\":50,\"submittedScore\":0,\""
		"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_cloze\",\"parentDocumentModelName\":\"e_question\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\":{\"stateData\":null,\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"autoScore\":50,\"submittedScore\":0,\""
		"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_question\",\"parentDocumentModelName\":\"e_page\"},\"questionnaire_1\":{\"stateData\":null,\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"questionnaire_1\",\"autoScore\":50,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\""
		":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_questionnaire\",\"parentDocumentModelName\":null},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e1\":{\"stateData\":{\"row\":[{\"editable\":[{\"latex\":\"15005\"},{\"latex\":\"1\"}]}],\"specialStateSpecified\":false},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e1\",\""
		"autoScore\":100,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_equationEditor\",\"parentDocumentModelName\":\"e_cloze\"}}}", 
		"LAST");

 
# 915 "Action.c"
	web_url("dialog.html", 
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetSketchLo/dialog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"LAST");

 
# 953 "Action.c"
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("88233aa5-aa9d-4cec-915d-e8fe6258c5b5_3", 
		"URL=https://loservices.cet.ac.il/States/{entryID}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("88233aa5-aa9d-4cec-915d-e8fe6258c5b5_4", 
		"URL=https://loservices.cet.ac.il/States/{entryID}", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"manualScore\":0,\"finalScore\":0,\"evaluatedWeight\":0,\"activityState\":\"none\",\"version\":19,\"elements\":{\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e2\":{\"stateData\":{\"row\":[{\"editable\":[{\"latex\":\"15001\"},{\"latex\":\"1\"}]}],\"specialStateSpecified\":false},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e2\",\"autoScore\":100,\"submittedScore\":0,\"normalizedScore\":0,\""
		"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_equationEditor\",\"parentDocumentModelName\":\"e_cloze\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze\":{\"stateData\":null,\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze\",\"autoScore\":100,\"submittedScore\":0,\""
		"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_cloze\",\"parentDocumentModelName\":\"e_question\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\":{\"stateData\":null,\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"autoScore\":100,\"submittedScore\":0,\""
		"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_question\",\"parentDocumentModelName\":\"e_page\"},\"questionnaire_1\":{\"stateData\":null,\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"questionnaire_1\",\"autoScore\":75,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\""
		":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_questionnaire\",\"parentDocumentModelName\":null},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e3\":{\"stateData\":{\"row\":[{\"editable\":[{\"latex\":\"15001\"},{\"latex\":\"1\"}]}],\"specialStateSpecified\":false},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e3\",\""
		"autoScore\":100,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":true,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_equationEditor\",\"parentDocumentModelName\":\"e_cloze\"}}}", 
		"LAST");

 
# 1005 "Action.c"
	lr_end_transaction("08_QuickLook",2);
	lr_think_time(10);
	lr_start_transaction("09_CloseItem");	
	
	
	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("88233aa5-aa9d-4cec-915d-e8fe6258c5b5_5", 
		"URL=https://loservices.cet.ac.il/States/{entryID}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("88233aa5-aa9d-4cec-915d-e8fe6258c5b5_6", 
		"URL=https://loservices.cet.ac.il/States/{entryID}", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"manualScore\":0,\"finalScore\":0,\"evaluatedWeight\":0,\"activityState\":\"none\",\"version\":20,\"elements\":{\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e0_feedback\":{\"stateData\":{\"answered\":true,\"feedback\":0,\"customClass\":\"\"},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e0_feedback\",\"autoScore\":null,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\""
		"weight\":0,\"answered\":null,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_feedback\",\"parentDocumentModelName\":\"e_equationEditor\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e1_feedback\":{\"stateData\":{\"answered\":true,\"feedback\":0,\"customClass\":\"\"},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e1_feedback"
		"\",\"autoScore\":null,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":null,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_feedback\",\"parentDocumentModelName\":\"e_equationEditor\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e2_feedback\":{\"stateData\":{\"answered\":true,\"feedback\":0,\"customClass\":\"\"},\"startupData\":null,\"newAppendableData\":null,\""
		"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e2_feedback\",\"autoScore\":null,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":null,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_feedback\",\"parentDocumentModelName\":\"e_equationEditor\"},\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e3_feedback\":{\"stateData\":{\"answered\":true"
		",\"feedback\":0,\"customClass\":\"\"},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_cloze_e3_feedback\",\"autoScore\":null,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":null,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\"documentModelName\":\"e_feedback\",\"parentDocumentModelName\":\"e_equationEditor\"},\""
		"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_questionFeedback\":{\"stateData\":{\"answered\":true,\"feedback\":0,\"customClass\":\"\"},\"startupData\":null,\"newAppendableData\":null,\"appendableData\":null,\"elementId\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba_questionFeedback\",\"autoScore\":null,\"submittedScore\":0,\"normalizedScore\":0,\"ignoreScore\":false,\"weight\":0,\"answered\":null,\"skipped\":false,\"trial\":0,\"stateVersion\":7,\"modifiedDate\":\"{Today}T{GMTtime}Z\",\""
		"documentModelName\":\"e_questionFeedback\",\"parentDocumentModelName\":\"e_question\"}}}", 
		"LAST");

	lr_end_transaction("09_CloseItem",2);
	lr_think_time(10);
	
	lr_start_transaction("10_Search");
	
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_url("symbols.e46cce46.svg", 
		"URL=https://myofek.cet.ac.il/static/media/symbols.e46cce46.svg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://myofek.cet.ac.il/he", 
		"Snapshot=t100.inf", 
		"LAST");

	web_add_auto_header("origin",		"https://myofek.cet.ac.il");
	web_add_auto_header("sec-fetch-dest", 		"empty");
	web_add_auto_header("sec-fetch-mode", 		"cors");
	web_add_auto_header("sec-fetch-site", 		"same-site");

 
# 1098 "Action.c"
 
 
web_custom_request("Autocomplete_3",
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"searchString\":\"{SearchName}\",\"totalMaxResults\":8,\"dimensionsParams\":{\"sectors\":[\"state\"]},\"contentParams\":{\"isPublished\":[true]},\"retrieveParams\":[{\"paramName\":\"syllabus\",\"numResults\":8},{\"paramName\":\"title\",\"numResults\":8}]}", 
		 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/css/2.ab4af526.chunk.css", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", "ENDITEM", 
		"Url=https://myofek.cet.ac.il/static/js/2.a3398c8c.chunk.js", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", "ENDITEM", 
		"Url=https://myofek.cet.ac.il/static/js/23.1a7a2ce5.chunk.js", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", "ENDITEM", 
		"LAST");


	(web_remove_auto_header("origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("sec-fetch-site", "same-origin");
		
	web_url("search-loader.json", 
		"URL=https://myofek.cet.ac.il/json/search-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", 
		 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
 "LAST");
# 1333 "Action.c"

	web_add_auto_header("origin", 		"https://myofek.cet.ac.il");
	web_add_auto_header("sec-fetch-site",		"same-site");

		web_url("GetFiltersItemTypes", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Filters/GetFiltersItemTypes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"LAST");
	web_reg_save_param("totalFound","LB=totalFound\":","RB=,\"dimensionFound","notfound=warning","LAST");
	web_custom_request("Search", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":null,\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"]},\"contentParams\":{\"isPublished\":[true]},\"textParams\":{\"allFields\":\"{SearchName}\"},\"retrieveParams\":{\"dimensionName\":\"itemTypes\",\"maxResults\":1}}", 
		"LAST");
	web_reg_save_param("totalFound1","LB=totalFound\":","RB=,\"dimensionFound","notfound=warning","LAST");
	web_custom_request("Search_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\",\"skipCache\":true,\"orderBy\":null,\"dimensionParams\":{\"sectors\":[\"state\",\"mmad\"]},\"contentParams\":{\"isPublished\":[true]},\"textParams\":{\"allFields\":\"{SearchName}\"},\"retrieveParams\":{\"maxResults\":200}}", 
		"LAST");

	(web_remove_auto_header("origin", "ImplicitGen=Yes", "LAST"));

	web_url("GetPage", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=search&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://myofek.cet.ac.il/static/media/symbols.e46cce46.svg", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", "ENDITEM", 
		"LAST");
	
	if(atoi(lr_eval_string("{totalFound}"))>0 && atoi(lr_eval_string("{totalFound1}"))>0)
		lr_end_transaction("10_Search",2);
	else
		lr_end_transaction("10_Search",1);
	
	lr_think_time(10);
	

	return 0;
}
# 5 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	lr_start_transaction("99_Logout");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");

 	
# 96 "vuser_end.c"
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_add_header("Sec-Fetch-User", 		"?1");
	web_add_header("Upgrade-Insecure-Requests", 		"1");

	web_url("logout", 
		"URL=https://cetlogin.cet.ac.il/nidp/app/logout?logoutURL=https%3A%2F%2Fapigateway.cet.ac.il%2FAccessMngApi%2Flogout%3Fgotourl%3Dhttps%253A%252F%252Fmyofek.cet.ac.il%252Fhe%26fromurl%3Dhttps%253A%252F%252Fmyofek.cet.ac.il%252Fhe%252Fcatalog%253FageGrades%253Dgrade6%2526disciplines%253Dmath%2526itemTypes%253Dinteractive%2526syllabusSubjects%253Dmath6_expansion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../javascript/smart-app-banner.css", "Referer=https://cetlogin.cet.ac.il/nidp/app", "ENDITEM", 
		"Url=../cet/css/cet_preloader.css", "Referer=https://cetlogin.cet.ac.il/nidp/app", "ENDITEM", 
		"Url=../css/ux_access.css", "Referer=https://cetlogin.cet.ac.il/nidp/app", "ENDITEM", 
		"Url=../javascript/smart-app-banner.js", "Referer=https://cetlogin.cet.ac.il/nidp/app", "ENDITEM", 
		"Url=../javascript/jquery.min.js", "Referer=https://cetlogin.cet.ac.il/nidp/app", "ENDITEM", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 		"cors");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");
	web_add_auto_header("X-Requested-With", 		"XMLHttpRequest");

	web_url("logoutSuccess.jsp", 
		"URL=https://cetlogin.cet.ac.il/nidp/jsp/logoutSuccess.jsp?login_hint&uiDestination=contentDiv", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cetlogin.cet.ac.il/nidp/app", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("configuration", 
		"URL=https://cetlogin.cet.ac.il/nidp/mobileaccess/endpoint/configuration?refresh=true&output=json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cetlogin.cet.ac.il/nidp/app", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"LAST");


	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"iframe");
	web_add_header("Upgrade-Insecure-Requests", 		"1");

	web_url("logout_2", 
		"URL=https://cetaccount.cet.ac.il/sspr/public/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cetlogin.cet.ac.il/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"LAST");


	web_add_header("Origin", 		"https://cetlogin.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 		"no-cors");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("Origin",	"https://myofek.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Mode", 		"cors");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");

	web_url("config_4", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/config", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"LAST");

	lr_save_string(lr_eval_string("{myHex}{myHex}-{myHex}-{myHex}-{myHex}-{myHex}{myHex}{myHex}"),"regGUID3");
	lr_output_message("[%s]", lr_eval_string("{regGUID3}"));

	web_url("GetServerTime_4", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Time/GetServerTime?registration={regGUID3}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://apigateway.cet.ac.il/environment.js", "Referer=https://myofek.cet.ac.il/", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Access-Control-Request-Headers", 		"content-type");
	web_add_auto_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetAllDependencies_5", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("GetAllDimensionsByLanguage_5", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Access-Control-Request-Headers", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("Access-Control-Request-Method", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_url("GetLabels_3", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Label/GetLabels?languages=he%2Car", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"LAST");


	web_custom_request("GetAllDependencies_6", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		"LAST");

	web_custom_request("GetAllDimensionsByLanguage_6", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"lang\":\"he\"}", 
		"LAST");

	web_url("GetMessagesByDate_3", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/SystemMessages/GetMessagesByDate?language=he&date={Today}T{GMTtime}Z",  
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetNewestItemsIds_5", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetNewestItemsIds", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

 
# 334 "vuser_end.c"

	web_url("GetPage_5",
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=home&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));
	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));
	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"POST");

	web_custom_request("GetBanners_7", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile",	"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetNewestItemsIds_6", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetNewestItemsIds", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"numResults\":10}", 
		"LAST");

	web_add_header("Access-Control-Request-Headers", 		"content-type");
	web_add_header("Access-Control-Request-Method", 		"GET");

	web_custom_request("getSchoolYear_5", 
		"URL=https://ebag.cet.ac.il/api/lmscp/getSchoolYear?date={Today}T{GMTtime}Z", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

	web_custom_request("GetBanners_8", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Banners/GetBanners", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"isPublish\":[true],\"langs\":[\"he\"],\"userTypes\":[\"guest\"],\"sectors\":[\"state\",\"mmad\"]}]", 
		"LAST");

	
	web_custom_request("getSchoolYear_6", 
		"URL=https://ebag.cet.ac.il/api/lmscp/getSchoolYear?date={Today}T{GMTtime}Z", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");


	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	lr_end_transaction("99_Logout",2);


	return 0;
}
# 6 "d:\\projects\\matach\\scripts\\05_nyrobiflow_1\\\\combined_05_Nyrobiflow_1.c" 2

