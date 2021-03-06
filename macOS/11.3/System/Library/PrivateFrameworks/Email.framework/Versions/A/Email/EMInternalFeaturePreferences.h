/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMInternalFeaturePreferences : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
+(id)log;
+(char)featureEnabled:(unsigned long long)arg1 ;
+(void)_registerForDefaultChanges;
+(char)_featureEnabled:(unsigned long long)arg1 ;
+(id)defaultForFeature:(unsigned long long)arg1 ;
+(char)_userDefaultEnabledForKey:(id)arg1 defaultValue:(char)arg2 ;
+(void)_setUserDefaultEnabled:(char)arg1 forKey:(id)arg2 ;
+(id)observeChangesForFeature:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)setFeature:(unsigned long long)arg1 enabled:(char)arg2 ;
+(char)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2 ;
@end

