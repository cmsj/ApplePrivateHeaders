/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMRuntimeTestSuite.h>
#import <IMCore/IMCloudKitEventHandler.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler> {

	char _shouldTearDown;
	IMCloudKitHookTestSingleton* _cloudKitHooks;

}

@property (assign) char shouldTearDown;                                                //@synthesize shouldTearDown=_shouldTearDown - In the implementation block
@property (nonatomic,retain) IMCloudKitHookTestSingleton * cloudKitHooks;              //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)runTestsIfNeeded;
-(id)init;
-(void)tearDown;
-(void)setUp;
-(void)setShouldTearDown:(char)arg1 ;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(char)shouldTearDown;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
@end

