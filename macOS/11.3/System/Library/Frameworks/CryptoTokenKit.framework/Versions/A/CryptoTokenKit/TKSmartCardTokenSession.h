/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {

	TKSmartCard* _smartCard;
	char _hasSession;
	TKSmartCard* _errorCard;

}

@property (readonly) TKSmartCard * smartCard; 
-(void)beginRequest;
-(id)name;
-(id)initWithToken:(id)arg1 ;
-(void)endRequest;
-(TKSmartCard *)smartCard;
@end
