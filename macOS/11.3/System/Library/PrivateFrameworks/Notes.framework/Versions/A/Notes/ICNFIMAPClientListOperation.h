/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPSingleClientOperation.h>

@class NSString, NSDictionary;

@interface ICNFIMAPClientListOperation : ICNFIMAPSingleClientOperation {

	NSString* _mailboxName;
	NSString* _referenceName;
	long long _options;
	NSDictionary* _listing;
	NSString* _separator;

}

@property (copy) NSString * mailboxName;                //@synthesize mailboxName=_mailboxName - In the implementation block
@property (copy) NSString * referenceName;              //@synthesize referenceName=_referenceName - In the implementation block
@property (assign) long long options;                   //@synthesize options=_options - In the implementation block
@property (copy) NSDictionary * listing;                //@synthesize listing=_listing - In the implementation block
@property (copy) NSString * separator;                  //@synthesize separator=_separator - In the implementation block
-(id)init;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(NSString *)separator;
-(void)setSeparator:(NSString *)arg1 ;
-(NSString *)referenceName;
-(void)setReferenceName:(NSString *)arg1 ;
-(id)activityString;
-(NSString *)mailboxName;
-(void)setMailboxName:(NSString *)arg1 ;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(char)shouldSendAgainOnError;
-(id)initWithMailboxName:(id)arg1 options:(long long)arg2 ;
-(NSDictionary *)listing;
-(void)setListing:(NSDictionary *)arg1 ;
-(id)initWithMailboxName:(id)arg1 referenceName:(id)arg2 options:(long long)arg3 ;
@end

