/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelCommandBase : RMModelPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	RMModelAnyPayload* _commandPayload;

}

@property (nonatomic,copy) NSString * commandType;                          //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,copy) NSString * commandIdentifier;                    //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * commandPayload;              //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commandType;
-(void)setCommandType:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(char)mustBeSupervised;
-(int)executionLevel;
-(RMModelAnyPayload *)commandPayload;
-(void)setCommandPayload:(RMModelAnyPayload *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(char)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

