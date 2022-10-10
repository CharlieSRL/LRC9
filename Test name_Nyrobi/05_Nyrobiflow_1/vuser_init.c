vuser_init()
{
		long ts = 0;
	

	web_set_max_html_param_len("1024000");
	web_set_sockets_option("SSL_VERSION", "AUTO");
	//lr_convert_string_encoding(lr_eval_string("{SearchNames}"), LR_ENC_UTF8, LR_ENC_UNICODE, "SearchName");
	lr_save_string(lr_eval_string("{SearchNames}"),"SearchName");
	
	web_add_auto_header("Sec-Fetch-Site", 		"none");
	web_add_auto_header("Sec-Fetch-Mode",		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");
	web_add_auto_header("cet-blazemeter", "1");

	web_add_auto_header("Content-Type","application/x-www-form-urlencoded; charset=UTF-8");

	lr_start_transaction("00_NyrobiHomePage");
	
	web_url("he",
		"URL=https://myofek.cet.ac.il/he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=/ruxitagentjs_ICA2Vfghjqrux_10245220704125537.js", ENDITEM, 
		"Url=/static/css/6.514cf645.chunk.css", ENDITEM, 
		"Url=/static/css/main.1d34530d.chunk.css", ENDITEM, 
		"Url=/static/js/6.3ff215a9.chunk.js", ENDITEM, 
		"Url=/static/js/main.1ed6181f.chunk.js", ENDITEM, 
		"Url=https://cdn.cet.ac.il/libs/jquery/2.1.4/jquery-2.1.4.min.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/nairobiapi/provider/nairobiprovider.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/contentapi/provider/ContentProvider.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/teachersapi/provider/teachersprovider.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/nairobirecommendationsapi/provider/RecommendationsProvider.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/bigdataapi/provider/BigDataProvider.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/accessmngapi/provider/accessmanagement.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/provider/ApiProvider.js?8d9eed845247680", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://nairobigateway.cet.ac.il/provider/ApiProvider.js?8da6aea738f2900", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=/service-worker.js", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=/static/media/symbols.e46cce46.svg", ENDITEM, 
		"Url=/static/js/0.0528f72e.chunk.js", ENDITEM, 
		"Url=/static/css/0.87194249.chunk.css", ENDITEM, 
		"Url=/static/css/3.457162b6.chunk.css", ENDITEM, 
		"Url=/static/js/3.b5bc31e4.chunk.js", ENDITEM, 
		"Url=/static/css/8.3bb06c11.chunk.css", ENDITEM, 
		"Url=/static/media/LogoOfekHE.a9636308.svg", ENDITEM, 
		"Url=/static/media/CET_logo.3a8c0ee3.svg", ENDITEM, 
		"Url=/static/media/linkedin.473f0491.svg", ENDITEM, 
		"Url=/static/media/facebook.be6f34bb.svg", ENDITEM, 
		"Url=/static/media/youtube.89357fca.svg", ENDITEM, 
		"Url=/static/js/8.21bd561a.chunk.js", ENDITEM, 
		"Url=/images/home_page_whitwwave.svg", ENDITEM, 
		"Url=/static/media/idmLogoHE.22c64dea.png", ENDITEM, 
		"Url=/static/media/cetLogoHe.0fdd0f60.svg", ENDITEM, 
		"Url=/static/media/avatar_male.ab1c6781.svg", ENDITEM, 
		"Url=/images/no_dashboard_data.png", ENDITEM, 
		LAST);


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
		EXTRARES, 
		"Url=https://nairobigateway.cet.ac.il/bigdataapi/resources/ValidateJson.min.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=../static/media/AlmoniNeueDL4.0AAA-Medium.d23bd6d4.otf", "Referer=https://myofek.cet.ac.il/static/css/6.514cf645.chunk.css", ENDITEM, 
		"Url=https://apigateway.cet.ac.il/environment.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		LAST);

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
		LAST);

	
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
		LAST);

	web_url("guest", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/authentication/guest", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);


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
		LAST);

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
		LAST);


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
		LAST);

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
		LAST);

//	web_add_cookie("CetState="
//		"eyJhbGciOiJkaXIiLCJlbmMiOiJBMjU2Q0JDLUhTNTEyIiwidHlwIjoiSldUIn0..GjiPSYq9HMkJ94FBur_zWA.XJGjsD6eJjOBHnYUtT5Eto4-xLf0izIh1re3-m6g8J8pIjkAWwKQAJpc8NeZzsUwNKrAGhMbntHbw8QHc-aQukOqQYUopdxfK9wgG7ou2xHze8mifuKEtfd59Ns1QzZT-B3eLlFr6m_1cZqn4qhsWKPumZFsveo7BkMG21SrmWRdnvCsV7quOqYrc-0H8vWebS_ksWw3YmEJOoy-kM1FA1pdyqT-EwlCpAa4pJLXHA__5A4hC8Kq8kD7bfHnN5zgs4MyIqU1_ZqZKyHUdF-1s7CDYZvHolxtw0uHT_lElPgeKVtJlmyiAQc0zfcNTaxn-QNecKAwWFoEZIKBpSIuleQ6I4a4jYLLFMIY-A3CFfrBmFpMEcpWuO0ImWZklc7v1GqW7-lHdIvhqWVm6Psqv7NiMcLbvm"
//		"a8nlJKijeRAMuvHsDBKfPQxpKB9IfgxoTZKMMeKTKEDIMpCOCkaUJQJDluA4YhF0gLN1r1DVrwCXbEWIoiQQ2rQC4o7v7LjRms-OQ0PtDNg_ieyDUcx8v66FdrmXGtAkJuk8ni66BJWVwe_QxNDHK-OiUwqKtjcdcfl08bJCmnIgJ_0b5S-pqJCWtTR_TLaFOTmj1wgP3Kp-v3AsjIbHKyKnsWcOpsBYQtRV8riRTQJEv71VEaPpzVfm1jy3dsEaQMwZ3k3qwYqgATNA4EUl6dYFLUaIwBTbVB.zf95V_GOYL6_kjzpgEpUL-PPGIwkEzKw0krxCk08SY0; DOMAIN=myofek.cet.ac.il");

	web_add_auto_header("Sec-Fetch-Site", 		"same-site");

	web_url("GetMessagesByDate", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/SystemMessages/GetMessagesByDate?language=he&date={Today}T{GMTtime}Z",//2022-08-01T19%3A51%3A24.994Z
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_custom_request("Search", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Search/Search", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");
	web_revert_auto_header("Access-Control-Request-Method");
	web_add_auto_header("sec-ch-ua",		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("SendEvent", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID}&index=0&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"content_language\":\"he\",\"id\":\""
		"c8b7768b-349d-4029-b12c-fd549afbc5ee\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID}\",\"index\":0,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383486981}]}", 
		LAST);
*/
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
		LAST);

	lr_end_transaction("00_NyrobiHomePage",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("01_LoginPage");
	
/*	web_custom_request("SendEvent_2", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID}&index=1&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"content_language\":\"he\",\"id\":\""
		"c705f718-f4c0-49d0-bdbc-fc3ea3cd9a75\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID}\",\"index\":1,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383486982}]}", 
		LAST);
*/

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
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("SendEvent_3", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID}&index=2&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"content_language\":\"he\",\"id\":\""
		"f5996521-729a-4e65-8c75-6f7797251406\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID}\",\"index\":2,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383486982}]}", 
		LAST);
*/
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
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/media/AlmoniNeueDL4.0AAA-Bold.89a48e44.otf", "Referer=https://myofek.cet.ac.il/static/css/6.514cf645.chunk.css", ENDITEM, 
		LAST);

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
		EXTRARES, 
		"Url=https://js.nagich.co.il/core/4.1.1/accessibility.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

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
		LAST);

/*Correlation comment - Do not change!  Original value='637949910897105891' Name ='cet-cache' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=cet-cache",
		"RegExp=cet-cache=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);

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
		EXTRARES, 
		"Url=https://js.nagich.co.il/style/style.css", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=https://js.nagich.co.il/style/btncolor.css", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		LAST);

	web_url("GetPage", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=home&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 		"cross-site");

	web_url("he.json", 
		"URL=https://js.nagich.co.il/assets/locale/he.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../scripts/pdf.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		"Url=../images/6.svg", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		LAST);
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	web_url("search-loader.json", 
		"URL=https://myofek.cet.ac.il/json/search-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

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
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/media/OpenSansHebrew-Regular.d80f3cc7.woff2", "Referer=https://myofek.cet.ac.il/static/css/6.514cf645.chunk.css", ENDITEM, 
		"Url=https://myofek.cet.ac.il/static/media/loginBg.f59d14c2.png", "Referer=https://myofek.cet.ac.il/static/css/main.1d34530d.chunk.css", ENDITEM, 
		LAST);

/*	web_custom_request("SendEvent_4", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID}&index=3&time={Today}_{GMTtimeDash}Z", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"UIUsage\",\"events\":[{\"verb\":\"pressed\",\"object_id\":\"nairobi_upperToolbar_login\",\"object_name\":\"login\",\"object_type\":\"inputControl\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{\\\"context\\\":\\\"Login\\\"}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\""
		"content_language\":\"he\",\"id\":\"14df2874-1906-4cc8-997a-5c020102334e\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID}\",\"index\":3,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383517032}]}", 
		LAST);
*/

	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_add_header("Sec-Fetch-User", 		"?1");
	web_add_header("Upgrade-Insecure-Requests", 		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='ba2f3c39-8fd4-4019-aee3-e81567b4838f' 
Name ='client_id' 
Type ='Rule' 
AppName ='Ellection' 
RuleName ='client_id'*/
	web_reg_save_param_regexp(
		"ParamName=client_id",
		"RegExp=client_id=(.*?)&scope",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"RequestUrl=*/cet*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='CfDJ8MbuDcczva9GrxiJUnXyqriUw8zaYO30ZHiAKKogxG6GkRwhtEPhuq9K_2HBIXm8I-PehdaTNUwyUuyaSxKahvYui2dhS05-IunxPs5WScZbLzixqCXUAN7L5VuMFVWmWijIrhbN2YwQQeEF8YsqIPujXN5ZwwbsUJIFJA6qr3zlUzxudsqH2SooGsMM8JLjOX9eNPLfCL0vuJlUOpY-ndw1GetI7qjG5qrHFbYqekH9TIJUVk9NCtCrTyuSJP4c6Q4PT0xqGSWHfIhHklGhUtJTSpXRHbhpeGS82pIsOB0lGm4hjY6VK0A4ORVv4wlWyiUKHdktc-OJCxqJ0Lo6xMnSkKJGEuqhwAAqFfw4F2ED2FODjbGXRyWLFMJzynmh9jKwQgrw5d-KXQSbWM1yhR_yb6-_WUV2qudivSmegEmjlYAxHRHz5q1wnCCImhDzwe5KYY62RDiSg-YXFIFQ-88_SPlolvYEtC0iBq9QCQbhYyxCEsJpj9S0pZQuuWx72H1G8sAqGOhl92kqsoDbaeaLF7nr7NK5oPOrUXBAuPWZ' 
Name ='state' 
Type ='Rule' 
AppName ='Ellection' 
RuleName ='state'*/
	web_reg_save_param_regexp(
		"ParamName=state",
		"RegExp=state=(.*?)&backUrl",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"RequestUrl=*/cet*",
		LAST);

	web_url("cet", 
		"URL=https://apigateway.cet.ac.il/AccessMngApi/login/start/cet?gotourl=https%3A%2F%2Fmyofek.cet.ac.il%2Fhe&fromurl=https%3A%2F%2Fmyofek.cet.ac.il%2Fhe&skin=&lang=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);


	web_add_auto_header("Sec-Fetch-Mode", 		"no-cors");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");
	web_add_auto_header("Origin", 		"https://cetlogin.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 		"document");
	web_revert_auto_header("Origin");
	web_add_header("Upgrade-Insecure-Requests", 		"1");

	web_submit_data("login",
		"Action=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://cetlogin.cet.ac.il/nidp//app/login?target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		LAST);

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
		EXTRARES,
		"URL=../js/login.js?bst=12&_=1659383521284", "Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe", ENDITEM,
		"URL=../translations/translations.js?bst=11&_=1659383521285", "Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe", ENDITEM,
		"URL=../images/Bg.jpg", "Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe", ENDITEM,
		LAST);

	web_url("he.json_2",
		"URL=https://cetlogin.cet.ac.il/nidp/cet/translations/he.json",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t34.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://js.nagich.co.il/assets/images/10.svg", "Referer=https://cetlogin.cet.ac.il/", ENDITEM,
		LAST);

	web_revert_auto_header("X-Requested-With");
	web_add_auto_header("Origin", 		"https://cetlogin.cet.ac.il");

	lr_end_transaction("01_LoginPage",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("02_Login");

	web_add_header("X-Requested-With", 		"XMLHttpRequest");

/*Correlation comment: Automatic rules - Do not change!  
Original value='e6d8e0d9-6539-4fca-b61b-0140487957dc' 
Name ='CetSession' 
Type ='Rule' 
AppName ='Ellection' 
RuleName ='CetSession'*/
	web_reg_save_param_regexp(
		"ParamName=CetSession",
		"RegExp=CetSession=(.*?);",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Cookies",
		LAST);

	web_submit_data("login_2",
		"Action=https://cetlogin.cet.ac.il/nidp/app/login?sid=0&sid=0",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://cetlogin.cet.ac.il/nidp/app/login?id=usernamePassword&sid=0&option=credential&sid=0&target=https%3A%2F%2Fcetlogin.cet.ac.il%2Fnidp%2Foauth%2Fnam%2Fauthz%3Fclient_id%3D{client_id}%26scope%3Dopenid%2Bcetprofile%26response_type%3Dcode%26redirect_uri%3Dhttps%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet%26state%3D{state}%26backUrl%3Dhttps%3A%2F%2Fmyofek.cet.ac.il%2Fhe",
		"Snapshot=t36.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=option", "Value=credential", ENDITEM,
		"Name=isAjax", "Value=true", ENDITEM,
		"Name=Ecom_User_ID", "Value={UserName}", ENDITEM,
		"Name=Ecom_Password", "Value=A123456", ENDITEM,
		LAST);

	//web_add_cookie("CetSession={CetSession}; DOMAIN=cetlogin.cet.ac.il");

	//web_add_cookie("LoggedInVia=CET_IDM; DOMAIN=cetlogin.cet.ac.il");
	
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
		ITEMDATA,
		"Name=option", "Value=credential", ENDITEM,
		"Name=isAjax", "Value=false", ENDITEM,
		"Name=target", "Value=https://cetlogin.cet.ac.il/nidp/oauth/nam/authz?client_id={client_id}&scope=openid+cetprofile&response_type=code&redirect_uri=https://apigateway.cet.ac.il/accessmngapi/oauth/cet&state={state}&backUrl=https://myofek.cet.ac.il/he", ENDITEM,
		"Name=authType", "Value=", ENDITEM,
		LAST);

	
	web_url("Redirects_Arik", 
		"URL=https://cetlogin.cet.ac.il/nidp/oauth/nam/authz?client_id={client_id}&scope=openid%2Bcetprofile&response_type=code&redirect_uri=https%3A%2F%2Fapigateway.cet.ac.il%2Faccessmngapi%2Foauth%2Fcet&state={state}&backUrl=https%3A%2F%2Fmyofek.cet.ac.il%2Fhe", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		LAST);
	
	
	web_add_auto_header("Sec-Fetch-Mode",		"no-cors");
	web_add_auto_header("Sec-Fetch-Dest", 		"empty");

	web_add_auto_header("Origin", 		"https://myofek.cet.ac.il");
	web_add_auto_header("Sec-Fetch-Mode", 		"cors");
	web_add_auto_header("Sec-Fetch-Site", 		"same-site");
	
	lr_save_string(lr_eval_string("{myHex}{myHex}-{myHex}-{myHex}-{myHex}-{myHex}{myHex}{myHex}"),"regGUID1");
	lr_output_message("[%s]", lr_eval_string("{regGUID1}"));
	//1659383559247
/*	lr_save_timestamp("TimeStamp_long", "DIGITS=13", LAST );
	ts = atol(lr_eval_string("{TimeStamp_long}"));
	//ts = ts - 10800;
	lr_save_int(ts,"TSCok");*/
	
//	web_add_cookie("CetStateTrace=sessionId%3D{TSCok}%26email%3D{TSCok}%26firstName%3D{TSCok}%26govId%3D{TSCok}%26lastName%3D{TSCok}%26userId%3D{TSCok}%26displayName%3D{TSCok}%26userAvatarUrl%3D{TSCok}%26loginAccount%3D{TSCok}%26gender%3D{TSCok}%26userIsAdmin%3D{TSCok}%26role%3D{TSCok}%26schoolId%3D{TSCok}%26schoolSign%3D{TSCok}%26schoolName%3D{TSCok}%26hasMultipleRoles%3D{TSCok}; DOMAIN=nairobigateway.cet.ac.il");

	
	web_url("GetServerTime_2", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Time/GetServerTime?registration={regGUID1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("config_2", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/config", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

/*	web_add_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_header("sec-ch-ua-mobile", 		"?0");
	web_add_header("sec-ch-ua-platform", 		"\"Windows\"");
	web_add_auto_header("accept", "application/json");
	web_add_auto_header("accept-language", "en-US,en;q=0.9,he-IL;q=0.8,he;q=0.7");
	web_add_auto_header("cache-control", "no-cache");
	web_add_auto_header( "pragma", "no-cache");
	web_add_auto_header( "sec-ch-ua", "\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", "?0");
	web_add_auto_header( "sec-ch-ua-platform", "\"Windows\"");
	web_add_auto_header("sec-fetch-dest", "empty");
 	web_add_auto_header( "sec-fetch-mode", "cors");
	web_add_auto_header("sec-fetch-site", "same-site");
	web_add_header("Upgrade-Insecure-Requests", 		"1");*/

    	
	web_url("GetLabels_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Label/GetLabels?languages=he%2Car", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_custom_request("GetAllDependencies_3", 
		"URL=https://nairobigateway.cet.ac.il/contentapi/Content/GetAllDependencies", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);


	web_revert_auto_header("Access-Control-Request-Headers");
	web_revert_auto_header("Access-Control-Request-Method");
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");
	//d21e9b8c-3e39-4d26-b01d-26c98e9a996a
	web_reg_save_param_json("ParamName=CorruserId","QueryString=$.userId",SEARCH_FILTERS,"Scope=Body",	LAST);
	/*Correlation comment: Automatic rules - Do not change!  
Original value='d6193405-4001-4076-b51f-ba6fa3c4248c' 
Name ='schoolId' 
Type ='Rule' 
AppName ='Ellection' 
RuleName ='schoolId'*/
	web_reg_save_param_json("ParamName=schoolId","QueryString=$.schoolId",SEARCH_FILTERS,"Scope=Body",LAST);
	
	web_url("state", 
		"URL=https://nairobigateway.cet.ac.il/AccessMngApi/state", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);


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
		LAST);

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
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_custom_request("GetFavorites", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Favorites/GetFavorites", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("importCourseEnvironments", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Import/importCourseEnvironments", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetTeacherData_2", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Profile/GetTeacherData", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);


	web_revert_auto_header("Access-Control-Request-Headers");
	web_revert_auto_header("Access-Control-Request-Method");
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
		LAST);

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
		LAST);

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
		LAST);

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("importCourseEnvironments_3", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Import/importCourseEnvironments", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"teacherId\":\"{CorruserId}\"}", 
		LAST);*/
/*
	web_custom_request("SendEvent_5",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=0&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"3d6f30db-b2ae-4d96-8b32-cc2fffed04f7\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":0,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562833}]}",
		LAST);
*/
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
		LAST);

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
		LAST);

/*	web_custom_request("SendEvent_6",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=1&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"00000000-0000-0000-0000-000000000000\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"00000000-0000-0000-0000-000000000000\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"a45eb555-0593-4745-951b-5079d904e3e4\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":1,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562835}]}",
		EXTRARES,
		"URL=https://myofek.cet.ac.il/service-worker.js", "Referer=https://myofek.cet.ac.il/service-worker.js", ENDITEM,
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	
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
		LAST);

/*	web_custom_request("SendEvent_7",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=2&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t62.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"2b40eb22-cdcf-4e3d-9d08-77cef2783b9a\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":2,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562837}]}",
		LAST);
*/
/*	web_custom_request("importCourseEnvironments_4", 
		"URL=https://nairobigateway.cet.ac.il/teachersapi/Import/importCourseEnvironments", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"teacherId\":\"{CorruserId}\"}", 
		LAST);*/

/*	web_custom_request("SendEvent_8",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=3&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t64.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"school_id\":\"{schoolId}\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"ea07970c-b8fd-41c5-8194-1e57764f4304\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":3,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562839}]}",
		LAST);

	web_custom_request("SendEvent_9",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=4&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t65.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"guest\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"e9bb5173-6c51-445c-96e3-7a935d125bba\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":4,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562841}]}",
		LAST);

	web_custom_request("SendEvent_10",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=5&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t66.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"767005e5-2b0b-4ab3-9a03-a35d4c96b0c8\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":5,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562842}]}",
		LAST);

	web_custom_request("SendEvent_11",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=6&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"school_id\":\"{schoolId}\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"985f441b-7d4a-4ab3-aabd-883aa4057d02\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":6,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383562842}]}",
		LAST);
*/
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_custom_request("EventErrors", 
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Diagnostics/EventErrors?registration={regGUID1}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);



	web_revert_auto_header("Access-Control-Request-Headers");
	web_revert_auto_header("Access-Control-Request-Method");
	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*Correlation comment - Do not change!  Original value='637949911655720700' Name ='cet-cache_1' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=cet-cache_1",
		"RegExp=cet-cache=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);

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
		LAST);

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
		LAST);

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
		LAST);

	web_url("GetMessagesByDate_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/SystemMessages/GetMessagesByDate?language=he&date={Today}T{GMTtime}Z", //2022-08-01T19%3A52%3A42.808Z
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

	web_add_auto_header("sec-ch-ua", 		"\".Not/A)Brand\";v=\"99\", \"Google Chrome\";v=\"103\", \"Chromium\";v=\"103\"");
	web_add_auto_header("sec-ch-ua-mobile", 		"?0");
	web_add_auto_header("sec-ch-ua-platform", 		"\"Windows\"");

/*	web_custom_request("SendEvent_12",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=7&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"exited\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"d25529d1-6c40-4f40-8bce-64b13adf825d\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":7,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383564731}]}",
		LAST);

	web_custom_request("SendEvent_13",
		"URL=https://nairobigateway.cet.ac.il/bigdataapi/Events/SendEvent?registration={regGUID1}&index=8&time={Today}_{GMTtimeDash}Z",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://myofek.cet.ac.il/",
		"Snapshot=t76.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"partition\":\"{CorruserId}\",\"table\":\"Learning\",\"events\":[{\"verb\":\"launched\",\"object_id\":\"he\",\"object_name\":\"home\",\"object_type\":\"webpage\",\"product\":\"nairobi\",\"context_referrer\":\"https://myofek.cet.ac.il/he\",\"user_role\":\"teacher\",\"user_id\":\"{CorruserId}\",\"object_additional_information\":\"{}\",\"current_hyperlink\":\"https://myofek.cet.ac.il/he\",\"session_id\":\"{CetSession}\",\"content_language\":\"he\",\"id\":\"50730277-b195-498e-b26a-249ce81dca7f\",\"version\":\"1.0\",\"client_user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36\",\"registration\":\"{regGUID1}\",\"index\":8,\"timestamp\":\"{Today}T{GMTtime}Z\",\"timestamp_long\":1659383564731}]}",
		LAST);
*/

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
		LAST);

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
		LAST);

	web_url("GetPage_2", 
		"URL=https://nairobigateway.cet.ac.il/nairobiapi/Pages/GetPage?pageKey=home&language=he", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_revert_auto_header("sec-ch-ua-platform");
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
		LAST);

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
		LAST);
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
		LAST);

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
		LAST);

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
		LAST);

	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 		"same-origin");

	web_url("item-loader.json", 
		"URL=https://myofek.cet.ac.il/json/item-loader.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://myofek.cet.ac.il/he", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://apigateway.cet.ac.il/dashboardapi/provider/dashboardprovider.js", "Referer=https://myofek.cet.ac.il/", ENDITEM, 
		LAST);

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
		EXTRARES, 
		"Url=https://myofek.cet.ac.il/static/css/14.682186e5.chunk.css", "Referer=https://myofek.cet.ac.il/he/recommendations", ENDITEM, 
		"Url=https://myofek.cet.ac.il/static/js/14.5b9485ce.chunk.js", "Referer=https://myofek.cet.ac.il/he/recommendations", ENDITEM, 
		LAST);

	lr_end_transaction("02_Login",LR_AUTO);
	lr_think_time(10);
	return 0;
}
