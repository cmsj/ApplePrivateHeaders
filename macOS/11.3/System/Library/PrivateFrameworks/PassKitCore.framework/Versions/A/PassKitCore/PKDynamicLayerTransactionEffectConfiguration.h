/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)configureTransactionEffectEmitterLayer:(id)arg1 withImage:(CGImageRef)arg2 andEmitterShapeData:(id)arg3 ;
-(void)configureTransactionEffectEmitterLayer:(id)arg1 withBounds:(CGRect)arg2 ;
@end

