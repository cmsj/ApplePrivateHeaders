/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKAccessControllerPrimaryThreadBoostTicket.h>

@protocol TSKAccessControllerPrimaryThreadBoostTicket <NSObject>
@required
-(void)endBoost;

@end


@class TSKAccessController, TSKAccessControllerRunLoop, NSString;

@interface TSKAccessControllerPrimaryThreadBoostTicket : NSObject <TSKAccessControllerPrimaryThreadBoostTicket> {

	TSKAccessController* _accessController;
	TSKAccessControllerRunLoop* _accessControllerRunLoop;
	pthread_override_sRef _threadOverride;
	Ac _didEndBoosting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithAccessController:(id)arg1 ;
-(void)endBoost;
@end
