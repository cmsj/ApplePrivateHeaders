/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPItemID;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {

	FPItemID* _itemID;

}

@property (copy,readonly) FPItemID * itemID;              //@synthesize itemID=_itemID - In the implementation block
+(char)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
+(id)knownFileProviderIdentifiersSoFar;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FPItemID *)itemID;
-(id)initWithItemID:(id)arg1 ;
@end
