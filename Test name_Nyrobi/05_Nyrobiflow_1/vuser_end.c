vuser_end()
{
	lr_start_transaction("99_Logout");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");

/*	web_custom_request("SendEvent_42",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=26&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t148.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_preview_backFromQuickView\",\"object_name\":\"backFromQuickView\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"ed0541c4-15b6-4f62-825a-508072a6eb7b\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows N"
		"T 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":26,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383821813}]}",
		LAST);

	web_custom_request("SendEvent_43",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=27&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t149.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_preview_assign\",\"object_name\":\"assign\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"a8f7d235-f2f4-4baf-ad02-ca116dde7e1d\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Ap"
		"pleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":27,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383840909}]}",
		EXTRARES,
		"URL=https://myofek.cet.ac.il/static/media/mustLoginBg.6bcc7921.png", "Referer=https://myofek.cet.ac.il/static/css/main.1d34530d.chunk.css", ENDITEM,
		LAST);

	web_custom_request("SendEvent_44",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=28&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t150.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_modal_cancelButon\",\"object_name\":\"cancelButon\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"],\\\"itemDocumentID\\\":\\\"443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\\\"}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\""
		",\"id\":\"c33e0965-d5dd-4315-89eb-726cd37f6232\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":28,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383864938}]}",
		LAST);

	web_custom_request("SendEvent_45",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=29&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t151.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he/show-me-more/443e8f1f\",\"object_name\":\"כתיבת תרגילים מתאימים לטווח נתון \",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"interaction_type\":\"Lo\",\"lo_id\":\"{DocumentId}\",\"id"
		"\":\"273444b2-fd21-4bba-b9fe-78f461bc05f6\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":29,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383864938}]}",
		LAST);

	web_custom_request("SendEvent_46",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=30&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t152.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he/catalog/interactive\",\"object_name\":\"catalog\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"6640d098-00f0-457f-a0dd-c8f3fff251cb\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Appl"
		"eWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":30,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383864939}]}",
		LAST);

	web_custom_request("SendEvent_47",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=31&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t153.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_upperToolbar_logout\",\"object_name\":\"logout\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he/catalog/item/443E8F1F?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{\\\"pageParams\\\":[\\\"ageGrades=grade6\\\",\\\"disciplines=math\\\",\\\"itemTypes=interactive\\\",\\\"syllabusSubjects=math6_expansion\\\"]}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he/catalog?ageGrades=grade6&disciplines=math&itemTypes=interactive&syllabusSubjects=math6_expansion\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"content_age_group\":\"6\",\"content_subject\":\"math\",\"id\":\"b166c770-1573-46a7-9b09-b5322fa0806a\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x6"
		"4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":31,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383882961}]}",
		LAST);

//	web_add_cookie("_PA_SDK_SSO_=pMD79MD8uy5UEUfzbP1H5F1LlVWONrWWN4jkZfdQQtdQeO+NS6k3PZeQ5F5DaX2QOAnnBnyt3noq33aKXK1fsa6xMF/IniCyxsk72gkym/tQ+x2SZc3lmeN4EcSoZeawd3W3OTHnDFzlaJ3wigye6Lqd1uNsZ9BNnr/5L1esnqukTD4j9v51eJj0JP6EKS0c7wW1SbzWbG2exEQEMK0VfjlQMc0baCaNaEto/zzd1bgi1cfyNKyy6gFVveqnwz7zul6Yt9wZRpIhOSFiiv4lx+XXPxDFLKwpJJ20m3z9mXk=; DOMAIN=cetlogin.cet.ac.il");
	
*/	
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
		EXTRARES, 
		"Url=../javascript/smart-app-banner.css", "Referer=https://cetlogin.cet.ac.il/nidp/app", ENDITEM, 
		"Url=../cet/css/cet_preloader.css", "Referer=https://cetlogin.cet.ac.il/nidp/app", ENDITEM, 
		"Url=../css/ux_access.css", "Referer=https://cetlogin.cet.ac.il/nidp/app", ENDITEM, 
		"Url=../javascript/smart-app-banner.js", "Referer=https://cetlogin.cet.ac.il/nidp/app", ENDITEM, 
		"Url=../javascript/jquery.min.js", "Referer=https://cetlogin.cet.ac.il/nidp/app", ENDITEM, 
		LAST);

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
		LAST);

	web_url("configuration", 
		"URL=https://cetlogin.cet.ac.il/nidp/mobileaccess/endpoint/configuration?refresh=true&output=json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cetlogin.cet.ac.il/nidp/app", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);


	web_revert_auto_header("X-Requested-With");
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
		LAST);


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
		LAST);

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
		EXTRARES, 
		"Url=https://apigateway.cet.ac.il/environment.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_custom_request("GetAllDimensionsByLanguage_5", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDimensionsByLanguage", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");
	web_revert_auto_header("Access-Control-Request-Method");
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
		LAST);


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
		LAST);

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
		LAST);

	web_url("GetMessagesByDate_3", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/SystemMessages/GetMessagesByDate?language=he&date={Today}T{GMTtime}Z", //2022-08-01T19%3A58%3A08.863Z
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("SendEvent_48", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID3}&index=1&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"content_language\":\"he\",\"id\":\""
		"e1266a04-1048-48e3-9229-b0ac74da6a55\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID3}\",\"index\":1,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383890818}]}", 
		LAST);

	web_custom_request("SendEvent_49", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID3}&index=0&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"content_language\":\"he\",\"id\":\""
		"1ccdfbca-7fd6-4360-ba58-43c8e0cc7eb2\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID3}\",\"index\":0,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383890818}]}", 
		LAST);

	web_custom_request("SendEvent_50", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID3}&index=2&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"content_language\":\"he\",\"id\":\""
		"4a6869db-a7b2-42e3-9107-3c5ac94855c9\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID3}\",\"index\":2,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383890818}]}", 
	LAST);
*/

	web_url("GetPage_5",
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=home&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);

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
		LAST);

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
		LAST);

	
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
		LAST);


	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	lr_end_transaction("99_Logout",LR_AUTO);


	return 0;
}
