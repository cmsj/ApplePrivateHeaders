/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/Versions/A/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMethodSignature, NSDictionary;

@interface _NADelegateMethodMetadata : NSObject {

	NSMethodSignature* _methodSignature;
	/*^block*/id _customHandler;
	NSDictionary* _customLogSettingsByArgumentIndex;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;                        //@synthesize methodSignature=_methodSignature - In the implementation block
@property (nonatomic,copy) id customHandler;                                             //@synthesize customHandler=_customHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * customLogSettingsByArgumentIndex;              //@synthesize customLogSettingsByArgumentIndex=_customLogSettingsByArgumentIndex - In the implementation block
-(NSMethodSignature *)methodSignature;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(id)customHandler;
-(void)setCustomHandler:(id)arg1 ;
-(NSDictionary *)customLogSettingsByArgumentIndex;
-(void)setCustomLogSettingsByArgumentIndex:(NSDictionary *)arg1 ;
@end

