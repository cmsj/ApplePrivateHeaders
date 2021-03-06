/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAttribute.h>

@class NSString;

@interface MTLAttributeInternal : MTLAttribute {

	unsigned char _flags;
	NSString* _name;
	unsigned long long _attributeIndex;
	unsigned long long _attributeType;

}
-(id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(MTLAttributeFlags)arg4 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(char)isActive;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(unsigned long long)attributeType;
-(unsigned long long)attributeIndex;
-(char)isPatchControlPointData;
-(char)isPatchData;
@end

