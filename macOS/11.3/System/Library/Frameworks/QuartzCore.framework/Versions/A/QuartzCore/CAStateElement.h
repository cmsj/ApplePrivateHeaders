/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding> {

	CALayer* _target;
	CAStateElement* _source;

}

@property (assign,nonatomic,__weak) CALayer * target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAStateElement * source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(char)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(CALayer *)target;
-(CAStateElement *)source;
-(NSString *)keyPath;
-(char)matches:(id)arg1 ;
-(id)save;
-(void)setSource:(CAStateElement *)arg1 ;
-(void)apply:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(id)targetName;
@end

