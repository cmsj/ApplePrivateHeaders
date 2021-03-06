/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMCameraUserNotificationSettings, NSSet, NSString, NSArray;

@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	char _snapshotsAllowed;
	char _periodicSnapshotsAllowed;
	char _accessModeIndicatorEnabled;
	char _nightVisionModeEnabled;
	char _recordingAudioEnabled;
	char _cameraManuallyDisabled;
	char _activityZonesIncludedForSignificantEventDetection;
	NSUUID* _UUID;
	unsigned long long _supportedFeatures;
	unsigned long long _accessModeAtHome;
	unsigned long long _accessModeNotAtHome;
	unsigned long long _currentAccessMode;
	unsigned long long _recordingEventTriggers;
	HMCameraUserNotificationSettings* _notificationSettings;
	NSSet* _activityZones;

}

@property (copy) NSUUID * UUID;                                                                                                              //@synthesize UUID=_UUID - In the implementation block
@property (assign) unsigned long long supportedFeatures;                                                                                     //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (assign) unsigned long long accessModeAtHome;                                                                                      //@synthesize accessModeAtHome=_accessModeAtHome - In the implementation block
@property (assign) unsigned long long accessModeNotAtHome;                                                                                   //@synthesize accessModeNotAtHome=_accessModeNotAtHome - In the implementation block
@property (assign) unsigned long long currentAccessMode;                                                                                     //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (assign) unsigned long long recordingEventTriggers;                                                                                //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (getter=areSnapshotsAllowed) char snapshotsAllowed;                                                                                //@synthesize snapshotsAllowed=_snapshotsAllowed - In the implementation block
@property (getter=arePeriodicSnapshotsAllowed) char periodicSnapshotsAllowed;                                                                //@synthesize periodicSnapshotsAllowed=_periodicSnapshotsAllowed - In the implementation block
@property (getter=isAccessModeIndicatorEnabled) char accessModeIndicatorEnabled;                                                             //@synthesize accessModeIndicatorEnabled=_accessModeIndicatorEnabled - In the implementation block
@property (getter=isNightVisionModeEnabled) char nightVisionModeEnabled;                                                                     //@synthesize nightVisionModeEnabled=_nightVisionModeEnabled - In the implementation block
@property (getter=isRecordingAudioEnabled) char recordingAudioEnabled;                                                                       //@synthesize recordingAudioEnabled=_recordingAudioEnabled - In the implementation block
@property (getter=isCameraManuallyDisabled) char cameraManuallyDisabled;                                                                     //@synthesize cameraManuallyDisabled=_cameraManuallyDisabled - In the implementation block
@property (copy) HMCameraUserNotificationSettings * notificationSettings;                                                                    //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (copy) NSSet * activityZones;                                                                                                      //@synthesize activityZones=_activityZones - In the implementation block
@property (getter=areActivityZonesIncludedForSignificantEventDetection) char activityZonesIncludedForSignificantEventDetection;              //@synthesize activityZonesIncludedForSignificantEventDetection=_activityZonesIncludedForSignificantEventDetection - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)shortDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSString *)shortDescription;
-(void)setUUID:(NSUUID *)arg1 ;
-(HMCameraUserNotificationSettings *)notificationSettings;
-(id)initWithUUID:(id)arg1 ;
-(NSString *)privateDescription;
-(unsigned long long)supportedFeatures;
-(void)setSupportedFeatures:(unsigned long long)arg1 ;
-(void)setNotificationSettings:(HMCameraUserNotificationSettings *)arg1 ;
-(NSArray *)attributeDescriptions;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(char)isAccessModeIndicatorEnabled;
-(char)areSnapshotsAllowed;
-(char)isNightVisionModeEnabled;
-(char)isRecordingAudioEnabled;
-(char)isCameraManuallyDisabled;
-(NSSet *)activityZones;
-(char)areActivityZonesIncludedForSignificantEventDetection;
-(char)arePeriodicSnapshotsAllowed;
-(void)setAccessModeAtHome:(unsigned long long)arg1 ;
-(void)setAccessModeNotAtHome:(unsigned long long)arg1 ;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setRecordingEventTriggers:(unsigned long long)arg1 ;
-(void)setSnapshotsAllowed:(char)arg1 ;
-(void)setPeriodicSnapshotsAllowed:(char)arg1 ;
-(void)setAccessModeIndicatorEnabled:(char)arg1 ;
-(void)setNightVisionModeEnabled:(char)arg1 ;
-(void)setRecordingAudioEnabled:(char)arg1 ;
-(void)setCameraManuallyDisabled:(char)arg1 ;
-(void)setActivityZones:(NSSet *)arg1 ;
-(void)setActivityZonesIncludedForSignificantEventDetection:(char)arg1 ;
@end

