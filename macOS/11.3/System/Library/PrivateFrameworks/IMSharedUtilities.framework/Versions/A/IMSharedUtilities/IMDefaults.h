/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDefaults : NSObject
+(id)sharedInstance;
-(char)getBoolFromDomain:(id)arg1 forKey:(id)arg2 ;
-(char)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(char)arg3 ;
-(void)setBool:(char)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
-(id)getValueFromDomain:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
@end
