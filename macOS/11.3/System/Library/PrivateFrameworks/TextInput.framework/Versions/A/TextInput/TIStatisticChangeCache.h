/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject {

	NSMutableDictionary* _cacheWithoutInputMode;
	NSMutableDictionary* _cacheWithInputMode;

}
+(id)sharedInstance;
-(id)init;
-(id)flush;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3 ;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3 ;
@end

