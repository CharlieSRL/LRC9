Action()
{

	lr_start_transaction("03_Recommendations");
	
/*	web_custom_request("SendEvent_14",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=9&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t87.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_sideBar_recommendationsPage\",\"object_name\":\"recommendationsPage\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"b7bcc6fa-97dd-4548-9a42-ddb03eddd250\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":9,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383590742}]}",
		LAST);

	web_custom_request("SendEvent_15",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=10&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t88.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"227db5b7-21a0-4747-8bee-c8211b83c307\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":10,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383590749}]}",
		LAST);
*/

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);


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
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/css/2.ab4af526.chunk.css", "Referer=https://myofek.cet.ac.il/he/catalog", ENDITEM, 
		"Url=https://myofek.cet.ac.il/static/js/2.2c6fbff7.chunk.js", "Referer=https://myofek.cet.ac.il/he/catalog", ENDITEM, 
		LAST);

	lr_end_transaction("03_Recommendations",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("04_ContentRepository");
	
/*	web_custom_request("SendEvent_16",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=11&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t92.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_sideBar_catalogPage\",\"object_name\":\"catalogPage\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"1894a295-9ef7-48c1-b133-abf0f0527947\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":11,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383615896}]}",
		LAST);

	web_custom_request("SendEvent_17",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=12&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t93.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/catalog\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"fbb26a6f-b407-41f2-a645-5c74ce954675\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":12,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383615900}]}",
		EXTRARES,
		"URL=https://myofek.cet.ac.il/static/css/20.1af8b6e8.chunk.css", "Referer=https://myofek.cet.ac.il/he/catalog", ENDITEM,
		"URL=https://myofek.cet.ac.il/static/js/20.955e7219.chunk.js", "Referer=https://myofek.cet.ac.il/he/catalog", ENDITEM,
		LAST);
*/

	web_url("GetPage_4", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=catalog&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_url("GetFiltersItemTypes", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Filters/GetFiltersItemTypes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

	
	lr_end_transaction("04_ContentRepository",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("05_FilterByClass");
	
/*	web_custom_request("SendEvent_18",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=13&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t98.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he/catalog\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"ef997792-0ff6-4ef3-8083-ad31a2f886b4\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":13,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383651224}]}",
		LAST);

	web_custom_request("SendEvent_19",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=14&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t99.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/catalog\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"id\":\"2ac0080c-6494-477d-909a-dba0f3266dfb\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":14,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383651224}]}",
		LAST);

	web_custom_request("SendEvent_20",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=15&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t100.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he/catalog\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"id\":\"1827a132-94de-4763-9bcc-a01d0dc4b4aa\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":15,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383654268}]}",
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("SendEvent_21",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=16&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t102.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/catalog\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"be27ede8-5800-4c20-aa93-740df6625d81\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":16,\"timestamp\":\"2022-08-01T19:54:14.2"
		"69Z\",\"timestamp_long\":1659383654269}]}",
		LAST);

*/
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
		LAST);

/*	web_custom_request("SendEvent_22",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=18&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t104.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/catalog/interactive\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"839a7044-a443-4273-9131-e2b7f06b103a\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"b1d1b479"
		"-6c4c-4192-960d-d66acc3d68f5\",\"index\":18,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383655063}]}",
		LAST);

	web_custom_request("SendEvent_23",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=17&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t105.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he/catalog\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"b5cb4e0f-b323-46ee-ad49-1f96dce5c3b4\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":17,\"timesta"
		"mp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383655062}]}",
		LAST);
*/

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

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
		LAST);

	lr_end_transaction("05_FilterByClass",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("06_Filter");	
	
/*	web_custom_request("SendEvent_24",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=19&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t109.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_advFiltering_curriculumSub\",\"object_name\":\"curriculumSub\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"0dd869d7-489e-4105-8d4c-d6b997946b34\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"regi"
		"stration\":\"{regGUID1}\",\"index\":19,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383681836}]}",
		LAST);

	web_custom_request("SendEvent_25",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=20&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t110.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he/catalog/interactive\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"cb8b04dd-1eea-4a0e-ae20-c3baf518c14c\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safa"
		"ri/537.36\",\"registration\":\"{regGUID1}\",\"index\":20,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383683750}]}",
		LAST);

	web_custom_request("SendEvent_26",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=21&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t111.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/catalog/interactive\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"cce15579-ac69-486a-ad1d-c8ade531e47d\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) App"
		"leWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":21,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383683751}]}",
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);


	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");
	//document=9DD49629-873A-4035-B9BE-76B8FA5A7138\",\"externalContextId\"
	web_reg_save_param("DocumentIds","LB=externalContextId\":\"","RB=\",","Ord=All","notfound=warning",LAST);


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
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/media/oops_error_image.21d8cc45.png", "Referer=https://myofek.cet.ac.il/static/css/main.1d34530d.chunk.css", ENDITEM, 
		LAST);

	lr_end_transaction("06_Filter",LR_AUTO);
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
		LAST);

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("SendEvent_27",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=23&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t115.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he/catalog/interactive\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"70e243f5-b2ba-4762-927d-b3b6796e2715\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Apple"
		"WebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":23,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383706805}]}",
		LAST);

	web_custom_request("SendEvent_28",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=22&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t116.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_loTile_moreInfo\",\"object_name\":\"moreInfo\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"],\\\"itemTitle\\\":\\\"כתיבת תרגילים מתאימים לטווח נתון \\\",\\\"itemIndex\\\":1,\\\"parentTitle\\\":\\\"פעילות אינטראקטיבית\\\"}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_g"
		"roup\":\"6\",\"content_subject\":\"math\",\"content_grouping_id\":\"{DocumentId}\",\"id\":\"f47aa3b9-0da7-4874-8c2f-d5cf9bb16add\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":22,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383706804}]}",
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

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
		LAST);

/*	web_custom_request("SendEvent_29",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=24&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t120.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/show-me-more/443e8f1f\",\"object_name\":\"כתיבת תרגילים מתאימים לטווח נתון \",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"interaction_type\":\"Lo\",\"lo_i"
		"d\":\"{DocumentId}\",\"id\":\"7f425057-ba56-4b7c-b8a1-3db7496730c7\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":24,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383707606}]}",
		EXTRARES,
		"URL=https://lo.cet.ac.il/plugin/lo-plugin.js", "Referer=https://myofek.cet.ac.il/", ENDITEM,
		LAST);
*/
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"iframe");
	web_add_header("Upgrade-Insecure-Requests", 		"1");
	
	//web_reg_save_param("sitebust","LB=","RB=","notfound=warning",LAST);
	//web_reg_save_param_regexp ("ParamName=sitebust","RegExp=(.*?)","NotFound=warning",SEARCH_FILTERS,"RequestUrl=*/versioning/version.txt",LAST );
	
/*Correlation comment - Do not change!  Original value='185489' Name ='sitebust' Type ='Manual'*/
	web_reg_save_param_ex("ParamName=sitebust","LB=","RB= \r\n","NotFound=warning",SEARCH_FILTERS,"Scope=Body","RequestUrl=*/version.txt*",LAST);

	web_url("index.html", 
		"URL=https://lo.cet.ac.il/plugin/index.html?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../styles/critical.min.css", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		//"Url=../dynatrace/ruxitagentjs_ICA2QVfhjqrtux_10245220704125537.js", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../dependencies/requirejs/require.min.js", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../runtimeMain.js", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../versioning/version.txt", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../styles/critical.min.css?bust=v185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../styles/main.min.css?bust=v185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=https://cdn.cet.ac.il/fonts/Abraham/stylesheet.css", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		"Url=../lo.config.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../loModulesBundle.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../settings.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../loBundle.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=lo-plugin-client.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../general/api.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../general/controllers/player-controller.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../general/controllers/scorm-controller.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../dependencies/webfontloader/webfontloader.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../dependencies/d3/d3.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=../providers/lms/scorm-manifest-provider-proxy.js?sitebust=185489", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM, 
		"Url=https://cdn.cet.ac.il/libs/bodymovin/5.7.3/lottie.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		"Url=https://cdn.cet.ac.il/libs/jquery/2.1.4/jquery-2.1.4.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		"Url=https://cdn.cet.ac.il/libs/tinymce/4.6.5/tinymce.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		"Url=https://cdn.cet.ac.il/libs/soundmanager2/2.97.20150601/script/soundmanager2.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		"Url=https://apps.assets.cet.ac.il/handlers/appData.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		"Url=https://cdn.cet.ac.il/libs/cet.content/host.min.js?sitebust=185489", "Referer=https://lo.cet.ac.il/", ENDITEM, 
		LAST);


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
		EXTRARES,
		"URL=https://cdn.cet.ac.il/libs/tinymcePresets/2/tinymcePresets.Bundle.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/", ENDITEM,
		LAST);


	web_add_auto_header("Origin", 		"https://lo.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");


/*Correlation comment: Automatic rules - Do not change!  
Original value='b11698f6-ce58-4885-9a26-9090fc64e044' 
Name ='sessionId' 
Type ='Rule' 
AppName ='Ellection' 
RuleName ='sessionId'*/
	web_reg_save_param_json("ParamName=sessionId","QueryString=$.sessionId",SEARCH_FILTERS,"Scope=Body",LAST);

	web_url("state_2",
		"URL=https://apigateway.cet.ac.il/AccessMngApi/state", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

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
		LAST);

	web_url("config_3", 
		"URL=https://apigateway.cet.ac.il/AccessMngApi/config", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);
	//88233aa5-aa9d-4cec-915d-e8fe6258c5b5
	web_reg_save_param("entryID","LB=entryId\":\"","RB=\"","notfound=warning",LAST);
	web_reg_save_param_json("ParamName=documentMajorVersion","QueryString=$.Result.documentMajorVersion","notfound=warning",SEARCH_FILTERS,"Scope=Body",LAST);
	web_reg_save_param_json("ParamName=documentMinorVersion","QueryString=$.Result.documentMinorVersion","notfound=warning",SEARCH_FILTERS,"Scope=Body",LAST);

	web_url("Connect",
		"URL=https://loservices.cet.ac.il/LOService/Connect?TaskId=&DocumentId={DocumentId}&LanguageId=he&SiteKey=ebag&StudentId=&ClientId=&ContextGroupId=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t127.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://js.nagich.co.il/core/3.0.2/accessibility.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://loresources.cet.ac.il/api/themes.ashx?name=lo_math4-6&bust=v{sitebust}", "Referer=https://lo.cet.ac.il/", ENDITEM,
		LAST);


	web_url("9",//  4/9
		"URL=https://documentservice.cet.ac.il/api/documentsRevisions/{DocumentId}/he/{documentMajorVersion}/{documentMinorVersion}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t128.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://lo.cet.ac.il/styles/styles.player.rtl.min.css?bust=v{sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/styles/styles.content.rtl.min.css?bust=v{sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://js.nagich.co.il/style/default.css", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://js.nagich.co.il/assets/scripts/locale.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://lo.cet.ac.il/texts/he.player.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/texts/he.content.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/texts/he.studio.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/share/interactive-content.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/dependencies/cet.tabs/cet-tabs.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/share/cloze.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/clientfieldsmanager/clientfieldsmanager.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/share/question.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/share/question-feedback.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/general/utils/pack.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/generator/generator.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/generator/monom.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/generator/polynom.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/generator/equation-editor.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/extended/math/generator/rational-number.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/like/like.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/discussion/discussion.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/discussion/views/templates.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/thread/thread.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/thread/views/templates.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/post/post.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/post/views/templates.js?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/popup/views/popup-icons.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/question/views/question-icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/keyboard/views/symbols.numpad.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/equation-editor/views/symbols.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/copy-link-share/views/copyLinkSymbol.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/feedback/views/icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/gallery/views/icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/comments-manager/views/icons.default.svg?sitebust={sitebust}", "Referer=https://lo.cet.ac.il/plugin/index.html?", ENDITEM,
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/bg.jpg", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/Question_bg.png", "Referer=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", ENDITEM,
		"URL=https://lo.cet.ac.il/elements/comment/themes/img/comments_icon.svg", "Referer=https://lo.cet.ac.il/styles/styles.content.rtl.min.css?bust=v{sitebust}", ENDITEM,
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/pageTop_small.png", "Referer=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", ENDITEM,
		"URL=https://loresources.cet.ac.il/themes/lo_math4-6/images/frameCircle.svg", "Referer=https://loresources.cet.ac.il/themes/lo_math4-6/styles.min.css?bust=v{sitebust}", ENDITEM,
		LAST);

/*	web_custom_request("SendEvent_30",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=0&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t129.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"questionnaire_1\",\"object_name\":\"questionnaire_1\",\"object_type\":\"lo\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"id\":\"724e8497-d422-4f82-b8dc-05a38857a9c5\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\""
		"index\":0,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383720136}]}",
		LAST);


	web_custom_request("SendEvent_31",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=1&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t130.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"page_1\",\"object_name\":\"page_1\",\"object_type\":\"page\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"id\":\"96e8ea25-21cb-4b09-b355-f9424cd4f12f\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"ddb59cef-fe0f-4089-aba8-8c8f219535"
		"2f\",\"index\":1,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383720909}]}",
		LAST);
*/

	lr_end_transaction("07_SelectItem",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("08_QuickLook");	

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");

/*	web_custom_request("SendEvent_32",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=25&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t131.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_preview_quickView\",\"object_name\":\"quickView\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"b0446fc4-b339-42fd-980f-df218b4ebfef\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x"
		"64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":25,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383746852}]}",
		LAST);

	web_add_auto_header("Origin", 		"https://lo.cet.ac.il");

	web_custom_request("SendEvent_33",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=2&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t132.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0,\"score_raw\":0,\"score_max\":50,\"completion\":true,\"response\":\""
		"e0: 150,\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":0,\\\"e1\\\":0,\\\"e2\\\":0,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"150,\\\",\\\"e1\\\":\\\",\\\",\\\"e2\\\":\\\",\\\",\\\"e3\\\":\\\",\\\"}\",\"id\":\"4aea3367-90df-41e7-88c2-411d80723f02\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":2,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383767825}]}",
		LAST);

	web_custom_request("SendEvent_34",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=3&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t133.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0,\"score_raw\":0,\"score_max\":50,\"completion\":true,\"response\":\""
		"e0: 15001,\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":0,\\\"e1\\\":0,\\\"e2\\\":0,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,\\\",\\\"e1\\\":\\\",\\\",\\\"e2\\\":\\\",\\\",\\\"e3\\\":\\\",\\\"}\",\"id\":\"3f4e1ae8-9777-4310-8da3-6ce61db279d8\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":3,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383770858}]}",
		LAST);

	web_custom_request("SendEvent_35",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=4&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t134.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0.25,\"score_raw\":12.5,\"score_max\":50,\"completion\":true,\"respons"
		"e\":\"e0: 15001,1; e1: 1,\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":0,\\\"e2\\\":0,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"1,\\\",\\\"e2\\\":\\\",\\\",\\\"e3\\\":\\\",\\\"}\",\"id\":\"695e2535-aeb5-4fb0-aee7-6f1045da5487\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":4,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383774126}]}",
		LAST);

	web_custom_request("SendEvent_36",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=5&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t135.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0.25,\"score_raw\":12.5,\"score_max\":50,\"completion\":true,\"respons"
		"e\":\"e0: 15001,1; e1: 15005,\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":0,\\\"e2\\\":0,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"15005,\\\",\\\"e2\\\":\\\",\\\",\\\"e3\\\":\\\",\\\"}\",\"id\":\"ee5f47dc-fba5-471f-9a57-935edf641f35\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":5,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383777168}]}",
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

/*	web_custom_request("SendEvent_37",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=6&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t138.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0.5,\"score_raw\":25,\"score_max\":50,\"completion\":true,\"response\""
		":\"e0: 15001,1; e1: 15005,1\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":1,\\\"e2\\\":0,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"15005,1\\\",\\\"e2\\\":\\\",\\\",\\\"e3\\\":\\\",\\\"}\",\"id\":\"2ffef037-9bbb-4c35-b792-0be44d0fb6d7\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":6,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383780417}]}",
		LAST);


	web_custom_request("SendEvent_38",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=7&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t139.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0.75,\"score_raw\":37.5,\"score_max\":50,\"completion\":true,\"respons"
		"e\":\"e0: 15001,1; e1: 15005,1; e2: 15001,1\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":1,\\\"e2\\\":1,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"15005,1\\\",\\\"e2\\\":\\\"15001,1\\\",\\\"e3\\\":\\\",\\\"}\",\"id\":\"0c719535-f5b3-4ad9-bb35-5a173a240ab6\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":7,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383784021}]}",
		EXTRARES,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/langs/he.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/themes/modern/theme.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/placeholder/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/link/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/media/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/image/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/directionality/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/imagetools/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/autoresize/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/paste/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/textcolor/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/colorpicker/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/table/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetinsertfile/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/charmap/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/code/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetAudioRecorder/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetfixtinybugs/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetSketchLo/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/mathquill/plugin.min.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetinsertfile/langs/he.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetAudioRecorder/langs/he.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetSketchLo/langs/he.js", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/skins/lightgray/skin.min.css", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/skins/lightgray/content.inline.min.css", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetAudioRecorder/plugin.css", "Referer=https://lo.cet.ac.il/", ENDITEM,
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetSketchLo/plugin.css", "Referer=https://lo.cet.ac.il/", ENDITEM,
		LAST);
*/
	web_url("dialog.html", 
		"URL=https://cdn.cet.ac.il/libs/tinymce/4.6.5/plugins/cetSketchLo/dialog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lo.cet.ac.il/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

/*	web_custom_request("SendEvent_39",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=8&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t141.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":false,\"score_scaled\":0.75,\"score_raw\":37.5,\"score_max\":50,\"completion\":true,\"respons"
		"e\":\"e0: 15001,1; e1: 15005,1; e2: 15001,1; e3: 15001,\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":1,\\\"e2\\\":1,\\\"e3\\\":0}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"15005,1\\\",\\\"e2\\\":\\\"15001,1\\\",\\\"e3\\\":\\\"15001,\\\"}\",\"id\":\"306f0c55-6c03-4e4a-b6b0-b8ed74d3d6a7\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":8,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383790012}]}",
		LAST);

	web_custom_request("SendEvent_40",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=9&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t142.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"answered\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":true,\"score_scaled\":1,\"score_raw\":50,\"score_max\":50,\"completion\":true,\"response\":\""
		"e0: 15001,1; e1: 15005,1; e2: 15001,1; e3: 15001,1\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":1,\\\"e2\\\":1,\\\"e3\\\":1}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"15005,1\\\",\\\"e2\\\":\\\"15001,1\\\",\\\"e3\\\":\\\"15001,1\\\"}\",\"id\":\"d7bb9bdb-8fa1-4b89-a7d6-d1898c5e6793\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":9,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383793167}]}",
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

/*	web_custom_request("SendEvent_41",
		"URL=https://apigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID2}&index=10&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lo.cet.ac.il/",
		"Snapshot=t145.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"asked_check\",\"object_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"object_name\":\"e_question\",\"object_type\":\"cmi.interaction\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"content_language\":\"he\",\"task_published_date\":\"0001-01-01T00:00:00\",\"school_id\":\"{schoolId}\",\"current_hyperlink\":\"https://lo.cet.ac.il/plugin/index.html?\",\"lo_id\":\"{DocumentId}\",\"lo_major\":\"4\",\"lo_minor\":\"9\",\"page_id\":\"page_1\",\"question_id\":\"question_a3704bd3-b1a2-49b3-8b0f-901ccd891dba\",\"session_id\":\"{sessionId}\",\"content_age_group\":\"73149d7e-19bb-4bf1-bdb8-7480d389ce34\",\"content_subject\":\"3f8a55e2-b0e7-4080-8b35-ad308c23ae14\",\"interaction_type\":\"combined\",\"success\":true,\"score_scaled\":1,\"score_raw\":50,\"score_max\":50,\"completion\":true,\"response\""
		":\"e0: 15001,1; e1: 15005,1; e2: 15001,1; e3: 15001,1\",\"object_fields_type\":\"{\\\"e0\\\":\\\"math\\\",\\\"e1\\\":\\\"math\\\",\\\"e2\\\":\\\"math\\\",\\\"e3\\\":\\\"math\\\"}\",\"object_fields_graded\":\"{\\\"e0\\\":true,\\\"e1\\\":true,\\\"e2\\\":true,\\\"e3\\\":true}\",\"fields_score\":\"{\\\"e0\\\":1,\\\"e1\\\":1,\\\"e2\\\":1,\\\"e3\\\":1}\",\"fields_response\":\"{\\\"e0\\\":\\\"15001,1\\\",\\\"e1\\\":\\\"15005,1\\\",\\\"e2\\\":\\\"15001,1\\\",\\\"e3\\\":\\\"15001,1\\\"}\",\"id\":\"55462aa7-3c8d-4a54-9656-479a8eca7f47\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID2}\",\"index\":10,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383807507}]}",
		LAST);
*/
	lr_end_transaction("08_QuickLook",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("09_CloseItem");	
	
	
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

	lr_end_transaction("09_CloseItem",LR_AUTO);
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
		LAST);

	web_add_auto_header("origin",		"https://myofek.cet.ac.il");
	web_add_auto_header("sec-fetch-dest", 		"empty");
	web_add_auto_header("sec-fetch-mode", 		"cors");
	web_add_auto_header("sec-fetch-site", 		"same-site");

/*	web_custom_request("Autocomplete", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"searchString\":\"׳©׳‘׳¨\",\"totalMaxResults\":8,\"dimensionsParams\":{\"sectors\":[\"state\"]},\"contentParams\":{\"isPublished\":[true]},\"retrieveParams\":[{\"paramName\":\"syllabus\",\"numResults\":8},{\"paramName\":\"title\",\"numResults\":8}]}", 
		LAST);

	web_custom_request("Autocomplete_2", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"searchString\":\"׳©׳‘׳¨׳™\",\"totalMaxResults\":8,\"dimensionsParams\":{\"sectors\":[\"state\"]},\"contentParams\":{\"isPublished\":[true]},\"retrieveParams\":[{\"paramName\":\"syllabus\",\"numResults\":8},{\"paramName\":\"title\",\"numResults\":8}]}", 
		LAST);
*/
//lr_convert_string_encoding(lr_eval_string("{SearchNames}"), LR_ENC_SYSTEM_LOCALE, LR_ENC_UTF8, "SearchName");
 
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
		//"searchString\":\"׳©׳‘׳¨׳™׳\",
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/css/2.ab4af526.chunk.css", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", ENDITEM, 
		"Url=https://myofek.cet.ac.il/static/js/2.a3398c8c.chunk.js", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", ENDITEM, 
		"Url=https://myofek.cet.ac.il/static/js/23.1a7a2ce5.chunk.js", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", ENDITEM, 
		LAST);


	web_revert_auto_header("origin");

	web_add_auto_header("sec-fetch-site", "same-origin");
		
	web_url("search-loader.json", 
		"URL=https://myofek.cet.ac.il/json/search-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", 
		//"Referer=https://myofek.cet.ac.il/he/search?allFields=%D7%A9%D7%91%D7%A8%D7%99%D7%9D&exactSearch=0",
		"Snapshot=t102.inf", 
		"Mode=HTML", 
/*		EXTRARES, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b9f9c716-7e09-4b97-a073-03d973e9e37e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/dcc239bb-472c-43b5-aaa5-88331533b889/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a38dd530-76a2-4343-9e51-2789ee637006/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/86d6e5d0-b3bc-451f-aab6-1d0131b5923f/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f6c03f2e-dc1f-45de-92e6-69e5b06a0836/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/fc3257f2-1a98-4854-aab2-82fab81dd5f9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/e527a280-0864-44b7-842c-4252b552cc56/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/5ac4e091-1cc1-495b-b48d-7850e75d50f3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a905cdef-611b-4009-bf98-12b48433e46a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7e52bb49-3b14-4a48-b742-a6947d44129b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/bc066932-aab6-4002-aa0f-9470470168ea/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/cdac6776-1ec0-48fe-a2d6-a20e6b249692/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/75d3d61e-220f-4e99-b468-5105f9a70a30/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9300a926-a327-4b20-b112-f0cf6fb7195e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/76f306d8-f3c0-4d90-a13a-8d6103b612da/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f5c7463a-58b6-4fd9-b5b7-94b22cfbd1aa/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c3620f91-8035-4d22-bee7-e8c6f17ae47a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/6ee73141-02e9-49e8-bc2e-56e9254114f4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/d3f47264-ccd2-479d-acd4-787eef07ac6b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/61755a88-ec12-4c01-8996-f9747e3ca155/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/77d8564f-52cc-434a-9572-a80748078747/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/6f8ddd48-03b4-4eb9-a594-4ac05bc18eb5/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/ca31392a-54d9-4b72-872c-eba124759bbc/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/301b6436-856e-44de-b6f5-11e1b94c9c70/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/54955a8c-f756-4771-bf73-2fd08a5169e7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7e6c69f1-e540-49f0-9ee1-c5a6c4790ad3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/da78a2ef-e12d-4027-b465-7292a7ca9be9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/67a29004-ba5e-4d39-9b29-82af77418736/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b322393b-4000-489b-8356-11ac4d58ef4e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/fb06c6fe-0b70-4ab1-954f-cefda737abba/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9b29b3d4-8de6-4a62-bda2-c844ae88c231/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/64b33c3e-2353-4d55-8728-6005948ef7b6/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/51283acd-24ed-4bad-a028-3644b298cc44/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/084b0428-67e0-4c6f-a4d9-ef033705ed7c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a9b55895-6595-4468-ac8b-ec2440521b11/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/64e15933-7383-4c4d-8b01-61f8f6c247b2/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9366cf79-2526-4291-a46c-36ea21eabb8c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/bfee8cd8-310f-4873-93da-a3dce78970bf/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/5f4640eb-9200-48e8-9c8d-e6cd3cfe9194/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/3edda771-4cf1-4acb-b54b-dcf17f67052d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/79ce9aae-3712-4b2d-af8d-1bf9e23c4cfe/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/86535141-7e63-4985-ab64-bfea0ba839b4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/212a9353-6328-487a-a117-3575dfca073c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a97ad1d2-70d8-4972-ba40-2ffca067943d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/342a944d-0a25-4d6d-bae5-57231091e312/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a7721e52-cea2-457b-9ec5-5c0e9fa76e59/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f872de78-61a1-478f-be12-cbbe4d2002c4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/55398b3a-9355-4154-bb39-e69bba2f6030/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4ef16791-bbc3-4834-87d2-d23b58b9201d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7d2436bc-6861-4f08-915f-42a4ab5d6894/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0e126eaf-4db2-4adb-882d-540df25944e9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b48884a6-cd24-491c-9385-788df3a3fc46/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0641178a-5617-46e8-b060-a95c59ccc9b3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f79a39b7-ddff-4cf9-98a0-08cbe3216139/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/d4e2891e-d6b2-4ae9-a9f8-37ac2826c619/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/bf800ae0-e9eb-4c51-93bf-f2650953e3c0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/fb4dac04-f55a-4248-92bb-9079f34907d1/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/014fcca0-aa91-46a7-878e-88224e354880/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f05b5904-ad81-4ca3-bd31-369ba2245525/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f7d9061d-e4b4-4e45-80ed-053ea8c61028/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9d0bf250-1264-4fb4-a9c1-376d03116ff6/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7f9e0d4d-e79a-4839-8201-fe4c8dcbe4a5/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/14ce932a-df5a-42f0-8de6-412a0fad8b6a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b6915813-1043-4ffd-a8d3-a27c1159bb93/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/12dcd215-c4fb-4dc8-b199-fe5716065279/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/90c00539-1c5b-45d9-bbeb-d6ebd4ad2ec7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/2776fe53-f4f0-4058-9527-1c86c11d01fc/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f2516697-74cc-45d2-ad04-98a540044fb3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/5924565a-bc9d-46a0-a2eb-5f32b39c8aa9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/05e1459f-8adb-45fb-8429-acc80596368c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4224b281-1321-4544-bb61-ca4ac4d65677/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c14f7e4f-35e2-4595-a30c-c884b1f91028/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0c9dc245-3952-4b2c-b5f8-19f1b429af20/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/16c28425-3982-4281-8d65-76650ab52cd3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c0c232ed-ee94-442c-bc79-34ede2a6650a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8ed0767d-0d5b-491b-887b-d5d6d3f926bd/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b3a1f31e-ea67-47de-8d48-83fac41729d0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/90d05d9e-88cd-40e3-aa02-22ab586048f3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/69807514-c3a2-46c5-b593-6f8297a31399/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/486495b7-6009-45ba-be30-251060ce030a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/22b6f425-685b-4599-87f8-d6c2f601494f/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/77492ddc-d013-40a9-bcda-699f9c19077c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/2122b794-56d3-4714-bd27-513fc1dabc91/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c65ab4bd-49bf-4d52-9d91-f43dd1c03612/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/200ece47-cd71-41c5-a365-630fdc485255/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b924257c-15da-4181-81e9-92072cb8f67d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/99dd7c4f-167f-4081-b0dd-dd9f9d562e73/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/6908f7e3-aea1-4e64-870a-dc228d24a8b8/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1dc5385e-1826-4c52-824f-d5d142b487aa/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a3d0e772-3f81-4849-84fc-3f440e62b583/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/16e1e5c4-7250-41e2-8cfa-44fb60e8a4c2/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8f04c43b-cb40-4b1f-8985-284891fb600a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/37c671f4-b412-4063-9e69-a97ee4c8b865/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/3ee8c981-9763-4cde-a576-4d5e163083a4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/3ba0e8e2-a1bd-4646-a79f-65a21a339739/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c02b96af-8478-49fa-9cd8-144536192942/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a6de8638-3847-4677-bdc9-7a129d61f8da/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/cc485626-d649-4c13-9d86-dab23b97df5a/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/85d0ffa3-c870-48a9-91e9-b94c27e08514/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/071f4965-220e-433f-89b1-05d55163d65b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/61718524-8230-4a19-82ff-4676297dba9d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/60917ae1-c7a7-45b1-9de2-5a7fcdc04c06/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/50c6c372-9518-49fc-82a6-593dc7ac049e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9214f4da-3d39-4cf2-b08a-f05d2095f8f8/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9c6e6970-21b6-4aed-9a67-4687abf95f41/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0c358286-63c9-49e0-ae42-90d69169cab7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/3d49f753-e175-4113-80d8-b1cc5e69b2f0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/5fd919a2-d4d6-4677-9047-5ec9c027db24/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/ac1994a7-c196-4389-9641-8fe5d637b691/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/62e9af06-46d1-4b71-8f2e-fc825ade08e3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7c0bb9c9-13c4-46b5-98c8-12f52a95bbbe/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/e33281ae-894e-4116-9028-b5d032cd49c2/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/78f72bc1-2e09-495b-b912-28f136c2da3e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1a17739d-346c-4ded-9881-77280bb2c25f/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/06481dea-9b80-4dd8-abd4-c67159b13667/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8f449f19-d4a8-4720-b71d-fd204e4268f7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c480190f-fd63-470a-be7a-50669e17d1f0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a7ce7862-1763-480c-8399-56786c9305e2/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f0cdd39a-ea26-4bd7-bc9f-2aad7cee5a53/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/246ecb70-a614-4b14-b76d-c365843b5ed9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c5d7b868-e461-4f63-a7f5-d64aceda6118/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/3a2dfb31-8d84-4a6d-9910-ebc89548f94e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a3ab1f04-786f-4d47-be31-ba53cf951ad1/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/fcb3eac5-2315-416e-bf89-1dd839af3488/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/e8dcdea2-2e2a-4b11-b481-14fe57ac0b02/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/96ae92e2-fb21-414b-970f-5017447863fe/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/022a5f83-63f7-422a-8cbd-217f500b4ebd/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/d020ae8b-4bde-446c-a796-2ecfbfb4a8cf/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/32bf8a8f-bd52-4f44-a258-e67c23a2e783/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/99eb6ee2-4bac-453f-bf6d-86d1fa997b7b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4ac63441-06be-4913-bda9-26717b41506e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/63c6f3dd-00e2-4b8d-93b0-290c330a7490/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4d13508c-4c2b-4057-9448-007705e5c4f8/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/261d52a0-dd21-4b99-8bfb-9e55f27507c3/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/2e7ccc84-e212-4072-9690-8aa7c07568dc/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/fa3b8098-97cd-4018-a086-59afe407264e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9b2f90ff-bb97-4390-9641-1e1242ebc202/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f07e8c21-a2e8-43cb-a6bf-7c73a0dd5235/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/27300a43-4468-46b2-aaac-713c74fca2c4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/dbc9b56d-b439-47ce-9dbb-e1276d72c0a4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8c948861-2bad-4549-8479-40e75af0369b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7345c00f-a4e1-4235-a7ed-a5d401c6b025/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8a2b185f-1d85-4b60-b2ab-84c7547c7913/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7dbd4891-94d4-45da-9bb6-3a83bc31ecee/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4ef84aef-881e-4d68-9615-4b5fb1204b1d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c5fe15b8-3ccb-4004-83d3-d998c19fb6c7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/e3f593fe-8217-4dac-9c72-7252020bc0b9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c22e4d36-a194-4764-aaf3-93c0f14bc9b1/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c75fa2a9-bfb7-418c-915f-487557f4473e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/05952ff4-e960-46a2-a4f9-68df98f2d16c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/31698269-7aa3-434b-a582-6c08265de10f/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/7bd0b169-067e-467b-85ed-20b98f1df8a5/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/a5947db5-e38d-4551-9d18-5eebefe80622/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/27ce4303-81a4-4f50-a5a0-0bce4c40d9a9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/23da0eea-b52b-44ec-911e-062cb7c33bd0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1cafcdeb-2adc-4b25-8ae7-617279cf0088/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4bd92ec0-424e-4441-a8cd-1f150624d441/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/72dd059e-6c93-4113-857a-dcdd3d1fbe82/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1158c5a8-5d01-4174-a2da-b77d093952a4/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/2266fc25-7524-4bb8-bf4c-134df80b076e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/75302910-bd47-4809-8b6c-1eff122a6975/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0816aa7c-1bbf-48b4-8c27-a2b24899a332/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/787d1e67-cba2-40ae-bfa4-84c411dace82/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/333bb015-a13d-4db4-b3c7-b766d5f955bc/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c0827aa4-8f5c-4f5e-ad90-02d6f1f95fb2/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/2eed1de6-5ac3-4561-a9a1-669033cf2f63/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/9bc4b3fe-800b-468d-9de7-da9bdaec6199/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/22487e1e-e950-45e2-88b4-3e63b69d101e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/268f83c2-a415-4e1e-a1d8-670a0c46cf94/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/72217297-0ad1-4df5-9a61-a508c88b5051/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8cd48d9f-07a5-44ba-837b-ac60a401898b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0e4566fb-2806-4506-8148-c694c5f63005/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/63b5f34e-6236-4740-a994-60194a8c46e9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1ab56092-0ea4-42eb-9183-40251b668fb0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/8d45e571-ecd3-47bc-b5b3-10e371cfd105/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/35881089-79a3-43cc-aa6a-e25962d6e6d7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/21473a37-9fed-4df4-aeb6-9214e18511e0/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0cc97613-56d2-4497-9465-f56214d9820d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1bf5956f-56ae-49e0-961e-87ceaaa2c2d9/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/1723f615-47f5-43ae-9b0f-ecd973a43d70/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0742ebb9-3fb9-4ec3-8210-fec04461211b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/05b20e79-e738-4763-8098-b64fb242757e/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/21644194-5f6f-458e-b3bd-590d427e6979/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/af6ee356-cc56-4c82-a8bf-32f38e867109/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/e7fb3284-83c2-4188-8ff0-b4a91922b4c7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f364b0b4-d9f6-4dc9-930b-97f12fe99a92/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/76a24981-7caa-40de-9c3e-b9540c863bd7/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/97a2fa69-9739-4773-b335-da523901db70/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/b295d7cd-b399-47dc-93ed-14ca56732491/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/ec222411-9050-4dd9-873c-084057c1e889/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/0d41c431-0749-45e4-8ab5-318f5a246f23/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4053f680-ff9e-4d2a-9db1-13b2c2e3d226/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/5015084e-17f2-4d99-969f-5cada34da2d1/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/f78e39cb-6870-4453-b3d6-def5658d891f/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/4f0da358-0e8c-4d79-8822-8d3de5c14f0c/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/54b69b3e-1a67-42ca-a4d5-ca46ef92661d/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/c0f2e05e-6656-49bb-a541-29edcf3cc305/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/bbd02527-8cef-43be-809f-b9ef9550321b/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobitestingstorage.blob.core.windows.net/thumbnails/64ba7d20-017b-4a3e-a5e1-b185ab1876c2/w_220_h_186.png", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		*/LAST);

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
		LAST);
	web_reg_save_param("totalFound","LB=totalFound\":","RB=,\"dimensionFound","notfound=warning",LAST);
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
		LAST);
	web_reg_save_param("totalFound1","LB=totalFound\":","RB=,\"dimensionFound","notfound=warning",LAST);
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
		LAST);

	web_revert_auto_header("origin");

	web_url("GetPage", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=search&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/media/symbols.e46cce46.svg", "Referer=https://myofek.cet.ac.il/he/search?allFields={SearchName}&exactSearch=0", ENDITEM, 
		LAST);
	
	if(atoi(lr_eval_string("{totalFound}"))>0 && atoi(lr_eval_string("{totalFound1}"))>0)
		lr_end_transaction("10_Search",LR_AUTO);
	else
		lr_end_transaction("10_Search",LR_FAIL);
	
	lr_think_time(10);
	

	return 0;
}