/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPort, NSString;

@interface CalNamedMutex : NSObject {

	NSPort* _port;
	NSString* _name;

}
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithName:(id)arg1 ;
-(char)tryLock;
@end

