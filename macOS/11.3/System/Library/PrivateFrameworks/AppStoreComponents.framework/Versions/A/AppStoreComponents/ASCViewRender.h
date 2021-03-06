/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASCSignpostGroup.h>

@class NSString;

@interface ASCViewRender : NSObject <ASCSignpostGroup>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)category;
+(id)log;
+(id)subsystem;
+(void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1 ;
+(void)modelPrefetchDidEndWithTag:(unsigned long long)arg1 ;
+(void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2 ;
+(id)requiredFieldNames;
+(void)overlayRequestedWithTag:(unsigned long long)arg1 ;
+(void)pageRequestedWithTag:(unsigned long long)arg1 ;
+(void)bootstrapDidBeginWithTag:(unsigned long long)arg1 ;
+(void)bootstrapDidEndWithTag:(unsigned long long)arg1 ;
+(void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2 ;
+(void)requestDidBeginWithTag:(unsigned long long)arg1 ;
+(void)requestDidEndWithTag:(unsigned long long)arg1 ;
+(void)jsCallDidBeginWithTag:(unsigned long long)arg1 ;
+(void)jsCallDidEndWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelPresentWithTag:(unsigned long long)arg1 ;
+(void)resourceRequestDidBeginWithTag:(unsigned long long)arg1 ;
+(void)resourceRequestDidEndWithTag:(unsigned long long)arg1 ;
+(void)pageUserReadyWithTag:(unsigned long long)arg1 ;
@end

