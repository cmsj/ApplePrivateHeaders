/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMManager, NSMutableDictionary;

@interface DMAPFSPrivVars : NSObject {

	DMManager* _dmManager;
	char _sessionUUID[40];
	unsigned _sessionF2Tport;
	unsigned _sessionT2Fport;
	char _inquiryCache_Enable;
	NSMutableDictionary* _inquiryCache_MDict;

}
@end
