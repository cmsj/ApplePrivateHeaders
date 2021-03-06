/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, HMFVersion;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying> {

	char _encrypted;
	char _excludeFromCloudStorage;
	char _optional;
	char _conformsToHMBModelNativeCKWrapper;
	Class _classObj;
	NSString* _externalRecordField;
	unsigned long long _loggingVisibility;
	id _defaultValue;
	HMFVersion* _readonlyVersion;
	HMFVersion* _unavailableVersion;
	/*^block*/id _encodeBlock;
	/*^block*/id _decodeBlock;
	/*^block*/id _descriptionBlock;

}

@property (assign,getter=isOptional,nonatomic) char optional;                     //@synthesize optional=_optional - In the implementation block
@property (assign,nonatomic) unsigned long long loggingVisibility;                //@synthesize loggingVisibility=_loggingVisibility - In the implementation block
@property (nonatomic,retain) id defaultValue;                                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) HMFVersion * readonlyVersion;                          //@synthesize readonlyVersion=_readonlyVersion - In the implementation block
@property (nonatomic,copy) HMFVersion * unavailableVersion;                       //@synthesize unavailableVersion=_unavailableVersion - In the implementation block
@property (nonatomic,retain) NSString * externalRecordField;                      //@synthesize externalRecordField=_externalRecordField - In the implementation block
@property (assign,nonatomic) char encrypted;                                      //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,nonatomic) char excludeFromCloudStorage;                        //@synthesize excludeFromCloudStorage=_excludeFromCloudStorage - In the implementation block
@property (assign,nonatomic) char conformsToHMBModelNativeCKWrapper;              //@synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper - In the implementation block
@property (nonatomic,copy) id encodeBlock;                                        //@synthesize encodeBlock=_encodeBlock - In the implementation block
@property (nonatomic,copy) id decodeBlock;                                        //@synthesize decodeBlock=_decodeBlock - In the implementation block
@property (nonatomic,copy) id descriptionBlock;                                   //@synthesize descriptionBlock=_descriptionBlock - In the implementation block
@property (nonatomic,readonly) Class classObj;                                    //@synthesize classObj=_classObj - In the implementation block
+(id)fieldWithClass:(Class)arg1 ;
+(id)fieldWithClass:(Class)arg1 options:(id)arg2 ;
+(id)optionalFieldWithClass:(Class)arg1 ;
+(id)optionalFieldWithClass:(Class)arg1 options:(id)arg2 ;
+(id)deprecatedField;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)isOptional;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(id)initWithClass:(Class)arg1 ;
-(void)setEncrypted:(char)arg1 ;
-(char)encrypted;
-(void)setOptional:(char)arg1 ;
-(id)descriptionBlock;
-(void)setDescriptionBlock:(id)arg1 ;
-(char)excludeFromCloudStorage;
-(NSString *)externalRecordField;
-(id)encodeBlock;
-(char)conformsToHMBModelNativeCKWrapper;
-(Class)classObj;
-(unsigned long long)loggingVisibility;
-(HMFVersion *)readonlyVersion;
-(HMFVersion *)unavailableVersion;
-(id)decodeQueryableValue:(id)arg1 ;
-(id)encodeQueryableValue:(id)arg1 ;
-(id)initWithClass:(Class)arg1 options:(id)arg2 ;
-(void)setLoggingVisibility:(unsigned long long)arg1 ;
-(id)decodeBlock;
-(void)setReadonlyVersion:(HMFVersion *)arg1 ;
-(void)setUnavailableVersion:(HMFVersion *)arg1 ;
-(void)setExternalRecordField:(NSString *)arg1 ;
-(void)setConformsToHMBModelNativeCKWrapper:(char)arg1 ;
-(void)setExcludeFromCloudStorage:(char)arg1 ;
-(void)setEncodeBlock:(id)arg1 ;
-(void)setDecodeBlock:(id)arg1 ;
-(id)descriptionForEncodedQueryableValue:(id)arg1 ;
@end

