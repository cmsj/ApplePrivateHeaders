/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class CoreDAVItem, NSString;

@interface CalDAVSetPropertyQueueableOperation : CalDAVCalendarQueueableOperation {

	CoreDAVItem* _propPatchElement;
	NSString* _uri;

}

@property (retain) CoreDAVItem * propPatchElement;              //@synthesize propPatchElement=_propPatchElement - In the implementation block
@property (retain) NSString * uri;                              //@synthesize uri=_uri - In the implementation block
+(void)initialize;
-(NSString *)uri;
-(void)performOperation;
-(void)setUri:(NSString *)arg1 ;
-(void)resolveError:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)readableDescription;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 property:(id)arg4 value:(id)arg5 valueType:(id)arg6 ;
-(void)setPropPatchElement:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)propPatchElement;
@end

