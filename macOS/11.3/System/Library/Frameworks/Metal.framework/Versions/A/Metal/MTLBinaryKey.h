/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLBinaryKey : NSObject <NSCopying> {

	SCD_Struct_MT19 _hash;

}

@property (readonly) const SCD_Struct_MT19* value; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const SCD_Struct_MT19*)value;
-(id)initWithHash:(const SCD_Struct_MT19*)arg1 ;
-(char)isEqualToKey:(id)arg1 ;
@end
