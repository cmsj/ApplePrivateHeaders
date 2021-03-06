/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/Versions/A/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSObject;

@interface DaemonUtils : NSObject {

	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(char)deviceHasPearl;
+(char)deviceHasTouchID;
+(char)isLidClosed;
+(void)dispatchReallyAfter:(long long)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(char)deviceHasSEP;
+(char)deviceHasSecureDFR;
+(void)_enumAllSubrequirements:(ACMRequirementRef)arg1 processingBlock:(/*^block*/id)arg2 ;
+(char)isClosedLidPreventingUseOfTouchID;
+(char)canShowUiInCurrentSession:(id*)arg1 ;
+(char)_isNonUiExtensionPointIdentifier:(id)arg1 ;
+(char)deviceSupports3D;
+(char)deviceSupportsSecureDoubleClick;
+(id)sharedInstance;
+(id)queue;
+(id)callerDisplayNameWithPid:(int)arg1 auditToken:(SCD_Struct_Ca2)arg2 bundleId:(id*)arg3 ;
+(char)deviceHasDFR;
+(char)isAppleSigned:(SCD_Struct_Ca2)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
@end

