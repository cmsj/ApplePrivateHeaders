/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Versions/A/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYDStoreID;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	SYDStoreID* _storeID;

}

@property (nonatomic,retain) SYDStoreID * storeID;              //@synthesize storeID=_storeID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStoreID:(id)arg1 ;
-(SYDStoreID *)storeID;
-(void)setStoreID:(SYDStoreID *)arg1 ;
@end

