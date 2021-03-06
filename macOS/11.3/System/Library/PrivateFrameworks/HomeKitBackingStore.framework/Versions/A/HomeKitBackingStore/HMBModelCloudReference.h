/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModelReference.h>
#import <libobjc.A.dylib/HMBModelNativeCKWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKReference, HMBCloudZone, NSString;

@interface HMBModelCloudReference : HMBModelReference <HMBModelNativeCKWrapper, NSSecureCoding> {

	CKReference* _reference;
	HMBCloudZone* _cloudZone;
	unsigned long long _action;

}

@property (assign,nonatomic,__weak) HMBCloudZone * cloudZone;              //@synthesize cloudZone=_cloudZone - In the implementation block
@property (assign,nonatomic) unsigned long long action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) CKReference * reference;                      //@synthesize reference=_reference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5 ;
+(char)includeInModelEncoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(CKReference *)reference;
-(void)setReference:(CKReference *)arg1 ;
-(id)attributeDescriptions;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2 ;
-(void)associateWithContainer:(id)arg1 ;
-(id)initWithModelID:(id)arg1 action:(unsigned long long)arg2 ;
-(id)referencedModelFromCloudZone:(id)arg1 allowExternalFetch:(char)arg2 ;
@end

