/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TUMomentsProvider : NSObject {

	char _remoteMomentsAvailable;
	long long _streamToken;
	NSString* _requesterID;
	NSDictionary* _remoteIDSDestinations;

}

@property (nonatomic,readonly) long long streamToken;                                                    //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * requesterID;                                              //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * remoteIDSDestinations;                                //@synthesize remoteIDSDestinations=_remoteIDSDestinations - In the implementation block
@property (getter=isRemoteMomentsAvailable,nonatomic,readonly) char remoteMomentsAvailable;              //@synthesize remoteMomentsAvailable=_remoteMomentsAvailable - In the implementation block
-(long long)streamToken;
-(char)isEqualToProvider:(id)arg1 ;
-(NSString *)requesterID;
-(NSDictionary *)remoteIDSDestinations;
-(char)isRemoteMomentsAvailable;
-(id)initWithCall:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
@end

