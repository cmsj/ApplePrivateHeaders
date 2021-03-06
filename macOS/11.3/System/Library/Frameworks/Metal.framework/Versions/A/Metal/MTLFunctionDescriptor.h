/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLFunctionConstantValues;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {

	MTLFunctionDescriptorPrivate _private;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * specializedName; 
@property (nonatomic,copy) MTLFunctionConstantValues * constantValues; 
@property (assign,nonatomic) unsigned long long options; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(id)functionDescriptor;
-(NSString *)specializedName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLFunctionConstantValues *)constantValues;
-(void)setConstantValues:(MTLFunctionConstantValues *)arg1 ;
-(void)setSpecializedName:(NSString *)arg1 ;
@end

