/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface APSPerAppTokenMap : NSObject {

	NSMutableDictionary* _perAppTokenMap;
	long long _missingTokens;
	char _enumerating;

}
-(id)description;
-(id)debugDescription;
-(id)init;
-(char)isEmpty;
-(id)topics;
-(void)removeAllTokens;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(id)tokensForTopic:(id)arg1 ;
-(char)hasMissingTokens;
-(void)addIdentifier:(id)arg1 forTopic:(id)arg2 ;
-(void)removeIdentifier:(id)arg1 forTopic:(id)arg2 ;
-(void)setToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(id)tokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(char)flagForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)setFlag:(char)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(id)allPerAppTokens;
-(id)identifiersForTopic:(id)arg1 ;
-(void)enumerateMissingTokensUsingBlock:(/*^block*/id)arg1 ;
@end

