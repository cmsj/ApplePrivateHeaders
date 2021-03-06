/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HMService, NSString;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HMService* _service;
	NSString* _homeIdentifier;

}

@property (nonatomic,retain) HMService * service;                     //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * homeIdentifier;                 //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(char)isHidden;
-(HMService *)service;
-(void)setService:(HMService *)arg1 ;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setService:(id)arg1 homeIdentifier:(id)arg2 ;
-(void)updatePossibleStates;
@end

