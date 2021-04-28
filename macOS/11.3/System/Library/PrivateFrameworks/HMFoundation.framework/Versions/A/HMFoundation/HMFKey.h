/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _type;
	NSData* _data;
	unsigned long long _size;

}

@property (readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSData * data;                   //@synthesize data=_data - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(char)isEqualToData:(id)arg1 ;
-(id)shortDescription;
-(id)initWithType:(id)arg1 size:(unsigned long long)arg2 data:(id)arg3 ;
@end
