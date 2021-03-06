/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDSettingGroup.h>
@class NSArray, NSString;


@protocol HMDSettingGroup <HMDSettingBaseProtocol>
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy,readonly) NSString * keyPath; 
@required
-(NSArray *)groups;
-(NSString *)keyPath;
-(NSArray *)settings;

@end


@class NSArray, NSString, NSUUID, NSMutableSet;

@interface HMDSettingGroup : NSObject <HMDSettingGroup> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSString* _name;
	NSString* _keyPath;
	NSMutableSet* _settingsInternal;
	NSMutableSet* _groupsInternal;

}

@property (retain) NSMutableSet * settingsInternal;                 //@synthesize settingsInternal=_settingsInternal - In the implementation block
@property (retain) NSMutableSet * groupsInternal;                   //@synthesize groupsInternal=_groupsInternal - In the implementation block
@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSUUID * parentIdentifier;                //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy) NSString * keyPath;                                //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)groups;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSArray *)settings;
-(id)initWithModel:(id)arg1 ;
-(void)addGroup:(id)arg1 ;
-(NSUUID *)parentIdentifier;
-(void)addSetting:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5 ;
-(NSMutableSet *)settingsInternal;
-(NSMutableSet *)groupsInternal;
-(void)setSettingsInternal:(NSMutableSet *)arg1 ;
-(void)setGroupsInternal:(NSMutableSet *)arg1 ;
@end

