/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailService.framework/Versions/A/MailService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSExternalAction : NSObject {

	char _remote;
	long long _sequenceNumber;

}

@property (assign) char remote;                           //@synthesize remote=_remote - In the implementation block
@property (assign) long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(id)entityName;
-(id)init;
-(long long)sequenceNumber;
-(void)setSequenceNumber:(long long)arg1 ;
-(char)remote;
-(void)setRemote:(char)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
-(id)managedObjectForContext:(id)arg1 ;
-(void)_msExternalActionCommonInitWithSequenceNumber:(long long)arg1 ;
@end

