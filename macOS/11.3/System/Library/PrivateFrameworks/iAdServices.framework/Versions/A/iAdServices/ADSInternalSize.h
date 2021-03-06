/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/Versions/A/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying> {

	float _width;
	float _height;

}

@property (assign,nonatomic) float width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;              //@synthesize height=_height - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(float)width;
-(float)height;
-(id)initWithWidth:(float)arg1 height:(float)arg2 ;
@end

