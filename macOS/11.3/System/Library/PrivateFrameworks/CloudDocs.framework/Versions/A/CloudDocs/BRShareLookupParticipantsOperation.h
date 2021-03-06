/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSArray;

@interface BRShareLookupParticipantsOperation : BROperation {

	NSArray* _userIdentities;
	/*^block*/id _lookupParticipantsCompletionBlock;

}

@property (copy) id lookupParticipantsCompletionBlock;              //@synthesize lookupParticipantsCompletionBlock=_lookupParticipantsCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)lookupParticipantsCompletionBlock;
-(void)setLookupParticipantsCompletionBlock:(id)arg1 ;
-(id)initWithUserIdentities:(id)arg1 ;
@end

