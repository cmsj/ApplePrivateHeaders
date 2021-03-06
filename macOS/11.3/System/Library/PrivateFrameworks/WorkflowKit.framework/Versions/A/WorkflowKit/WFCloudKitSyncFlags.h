/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSData, NSString;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem> {

	char _migratedVoiceShortcuts;
	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	long long _defaultShortcutsVersion;

}

@property (assign,nonatomic) char migratedVoiceShortcuts;                    //@synthesize migratedVoiceShortcuts=_migratedVoiceShortcuts - In the implementation block
@property (assign,nonatomic) long long defaultShortcutsVersion;              //@synthesize defaultShortcutsVersion=_defaultShortcutsVersion - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;                  //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(id)properties;
+(id)recordIDWithZoneID:(id)arg1 ;
+(char)isCloudKitSyncFlagsRecordID:(id)arg1 ;
-(CKRecordID *)identifier;
-(id)initWithZoneID:(id)arg1 ;
-(void)setDefaultShortcutsVersion:(long long)arg1 ;
-(long long)defaultShortcutsVersion;
-(NSData *)recordSystemFieldsData;
-(char)migratedVoiceShortcuts;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(void)setMigratedVoiceShortcuts:(char)arg1 ;
@end

