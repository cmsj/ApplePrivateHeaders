/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding> {

	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSData* _assetKey;

}

@property (nonatomic,copy) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,copy) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSData * assetKey;                        //@synthesize assetKey=_assetKey - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(NSData *)assetKey;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
@end

