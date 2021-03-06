/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class DRSDampeningConfigurationMO, DRSDampeningEnforcementSettingsMO, NSSet;

@interface DRSDampeningManagerMO : NSManagedObject

@property (assign,nonatomic) long long totalCap; 
@property (nonatomic,retain) DRSDampeningConfigurationMO * defaultSignatureConfiguration; 
@property (nonatomic,retain) DRSDampeningEnforcementSettingsMO * enforcementSettings; 
@property (nonatomic,retain) NSSet * resourceConfigurations; 
@property (nonatomic,retain) NSSet * teamConfigurations; 
+(id)fetchRequest;
@end

