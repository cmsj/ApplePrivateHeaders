/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKToken.h>

@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken {

	NSData* _AID;
	TKSmartCard* _smartCard;
	id _keepAlive;

}

@property (nonatomic,readonly) TKSmartCard * smartCard;              //@synthesize smartCard=_smartCard - In the implementation block
@property (nonatomic,retain) id keepAlive;                           //@synthesize keepAlive=_keepAlive - In the implementation block
@property (readonly) NSData * AID;                                   //@synthesize AID=_AID - In the implementation block
-(NSData *)AID;
-(void)setKeepAlive:(id)arg1 ;
-(id)keepAlive;
-(TKSmartCard *)smartCard;
-(id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4 ;
@end

