/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSNumber;

@interface AFCoreAnalyticsDeviceContextPayload : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _nearbyProductType;
	NSString* _proximity;
	NSNumber* _alarmFiring;
	NSNumber* _timerFiring;
	NSString* _playbackState;
	NSNumber* _playbackRecency;
	NSString* _homeAnnouncementState;
	NSNumber* _homeAnnouncementRecency;
	NSString* _nearbyDevicesRequestIdentifier;
	NSString* _targetedResult;
	NSString* _contextIdentifier;

}

@property (nonatomic,copy,readonly) NSString * nearbyProductType;                           //@synthesize nearbyProductType=_nearbyProductType - In the implementation block
@property (nonatomic,copy,readonly) NSString * proximity;                                   //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * alarmFiring;                                 //@synthesize alarmFiring=_alarmFiring - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timerFiring;                                 //@synthesize timerFiring=_timerFiring - In the implementation block
@property (nonatomic,copy,readonly) NSString * playbackState;                               //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackRecency;                             //@synthesize playbackRecency=_playbackRecency - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeAnnouncementState;                       //@synthesize homeAnnouncementState=_homeAnnouncementState - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * homeAnnouncementRecency;                     //@synthesize homeAnnouncementRecency=_homeAnnouncementRecency - In the implementation block
@property (nonatomic,copy,readonly) NSString * nearbyDevicesRequestIdentifier;              //@synthesize nearbyDevicesRequestIdentifier=_nearbyDevicesRequestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetedResult;                              //@synthesize targetedResult=_targetedResult - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextIdentifier;                           //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)proximity;
-(NSString *)contextIdentifier;
-(NSString *)playbackState;
-(NSString *)nearbyProductType;
-(NSNumber *)alarmFiring;
-(NSNumber *)timerFiring;
-(NSNumber *)playbackRecency;
-(NSString *)homeAnnouncementState;
-(NSNumber *)homeAnnouncementRecency;
-(NSString *)nearbyDevicesRequestIdentifier;
-(NSString *)targetedResult;
-(id)initWithNearbyProductType:(id)arg1 proximity:(id)arg2 alarmFiring:(id)arg3 timerFiring:(id)arg4 playbackState:(id)arg5 playbackRecency:(id)arg6 homeAnnouncementState:(id)arg7 homeAnnouncementRecency:(id)arg8 nearbyDevicesRequestIdentifier:(id)arg9 targetedResult:(id)arg10 contextIdentifier:(id)arg11 ;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
@end

