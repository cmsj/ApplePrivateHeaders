/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MMScriptResolver : NSObject {

	/*^block*/id _block;
	NSMutableSet* _tokens;

}
+(id)_resolverWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_addToken:(id)arg1 ;
-(void)_resolveWithToken:(id)arg1 arguments:(id)arg2 ;
@end
