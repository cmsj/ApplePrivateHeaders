/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData;

@interface _CNChangeHistoryFetchExecutionResponse : NSObject {

	NSArray* _events;
	NSData* _token;

}

@property (copy,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (copy,readonly) NSData * token;                //@synthesize token=_token - In the implementation block
-(NSData *)token;
-(NSArray *)events;
-(id)initWithEvents:(id)arg1 token:(id)arg2 ;
@end
