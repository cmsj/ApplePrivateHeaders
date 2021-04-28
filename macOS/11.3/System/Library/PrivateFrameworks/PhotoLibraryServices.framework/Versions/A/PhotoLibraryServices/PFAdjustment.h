/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PFAdjustment : NSObject {

	char _enabled;
	unsigned long long _formatVersion;
	NSString* _identifier;
	NSDictionary* _settings;
	NSString* _autoIdentifier;
	NSDictionary* _autoSettings;
	NSString* _maskUUID;

}

@property (nonatomic,readonly) unsigned long long formatVersion;              //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSString * autoIdentifier;                     //@synthesize autoIdentifier=_autoIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * autoSettings;                   //@synthesize autoSettings=_autoSettings - In the implementation block
@property (nonatomic,readonly) char enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSString * maskUUID;                           //@synthesize maskUUID=_maskUUID - In the implementation block
+(char)isValidArchiveDictionary:(id)arg1 errors:(id)arg2 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(char)enabled;
-(NSString *)identifier;
-(NSDictionary *)settings;
-(unsigned long long)formatVersion;
-(id)archiveDictionary;
-(NSString *)autoIdentifier;
-(NSDictionary *)autoSettings;
-(NSString *)maskUUID;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(char)arg3 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(char)arg5 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(char)arg5 maskUUID:(id)arg6 ;
-(id)initWithArchiveDictionary:(id)arg1 ;
@end
