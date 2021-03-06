/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCaptionRubyInternal, NSString;

@interface AVCaptionRuby : NSObject <NSCopying, NSSecureCoding> {

	AVCaptionRubyInternal* _internal;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) long long position; 
@property (nonatomic,readonly) long long alignment; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alignment;
-(long long)position;
-(NSString *)text;
-(id)initWithText:(id)arg1 ;
-(const OpaqueFigCaptionDataRef)copyFigCaptionData;
-(id)initWithFigCaptionData:(const OpaqueFigCaptionDataRef)arg1 ;
-(id)initWithText:(id)arg1 position:(long long)arg2 alignment:(long long)arg3 ;
@end

