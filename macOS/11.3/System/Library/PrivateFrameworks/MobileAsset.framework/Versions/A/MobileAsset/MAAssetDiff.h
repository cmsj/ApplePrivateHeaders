/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/Versions/A/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding> {

	unsigned long long _diffRaw;
	unsigned long long _diff;
	unsigned long long _mask;
	NSString* _description;
	NSString* _assessment;

}
+(char)supportsSecureCoding;
+(id)requireSameAssetTypeAndAssetId;
+(id)requireSameAssetTypeAndDownloadContent;
+(id)requireSameAssetTypeAndAllAttributes;
+(id)allowEverythingDifferent;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)category;
-(id)summary;
-(id)initFromDiff:(unsigned long long)arg1 ;
-(id)initDifferentAssetType:(char)arg1 assetId:(char)arg2 attributes:(char)arg3 assetIdAttributes:(char)arg4 dynamicAssetId:(char)arg5 nonIdAttributes:(char)arg6 content:(char)arg7 url:(char)arg8 policy:(char)arg9 ;
-(id)initFromInverseOfCategories:(unsigned long long)arg1 ;
-(BOOL)isAnythingDifferent;
-(BOOL)isSameAssetType;
-(BOOL)isSameForAllAttributes;
-(BOOL)isSameAssetId;
-(BOOL)isSameForNonAssetIdAttributes;
-(BOOL)isSameDownloadContent;
-(BOOL)isSameDownloadUrl;
-(BOOL)isSameDownloadPolicy;
-(BOOL)hasOnlyAllowedDifferences:(id)arg1 ;
@end

