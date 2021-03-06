/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABBuddyStatus : NSObject {

	Class IMService;
	NSMutableDictionary* cache;

}
+(id)sharedBuddyStatus;
+(char)showStatus;
-(void)dealloc;
-(id)init;
-(void)updateStatus:(id)arg1 ;
-(char)isHandleAvailable:(id)arg1 ;
-(void)statusUpdate:(id)arg1 ;
-(unsigned long long)statusForPerson:(id)arg1 ;
-(id)statusImageForPerson:(id)arg1 ;
-(char)isAvailable:(id)arg1 ;
-(id)abServiceKeyForHandle:(id)arg1 ;
@end

